/* package whatever; // don't place package name! */

import java.util.*;
import java.lang.*;
import java.io.*;

/* Name of the class has to be "Main" only if the class is public. */
class Ideone
{
	public static void main (String[] args) throws java.lang.Exception
	{
		
	    tree node1=new tree(1,null,null);
		tree node2=new tree(2,null,null);
		tree node3=new tree(3,null,null);
		tree node4=new tree(4,null,null);
		tree node5=new tree(5,null,null);
		tree node6=new tree(6,null,null);
		tree node7=new tree(7,null,null);
		
		
		node1.left=node2;
		node1.right=node3;
		node2.left=node4;
		node2.right=node5;
		node3.left=node6;
		node3.right=node7;
		
		func(node1);
		
	}
	
	static void func(tree root){
		
		ArrayDeque<tree> deque=new ArrayDeque<tree>();
		deque.add(root);
		
		int level=0;
		
		while(!deque.isEmpty()){
			
			int size=deque.size();
		//	System.out.println(level+" "+size);
			
			for(int i=0;i<size;i++){
			
			tree x;
			if(level%2!=0){
			// x=deque.getFirst();
			 x=deque.removeFirst();
			}
			else {
		//	x=deque.getLast();{
			x=deque.removeLast();
			}
			
			System.out.print("x"+x.data+" ");
			//System.out.println(deque);
			
		
			if(x.left!=null)
			 deque.add(x.left);
			 
			if(x.right!=null)
			 deque.add(x.right);
			 
		 }
			
			
			level+=1;
			
			
			
			
			
		}
		
		
		
		
	}
	
		static class tree{
		
		
		tree(int d,tree l,tree r){
			
			this.data=d;
			this.left=l;
			this.right=r;
		}
		int data;
		tree left;
		tree right;
	}
}

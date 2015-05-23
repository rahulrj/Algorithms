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
		
		node1.left=node2;
		node1.right=node3;
		node2.left=node4;
		node2.right=node5;
		node4.left=node6;
		
		inorderstack(node1);
	     
	}
	
	static private void inorderstack(tree node1){
		
		Stack stack=new Stack();
		stack.push(node1);
		
		while(!stack.empty()){
			
			tree node=(tree)stack.pop();
			if(node.visited){
				
				System.out.println(node.data);
			}
			else{
			
			node.visited=true;
			if(node.right!=null)
			  stack.push(node.right);
			  
			stack.push(node);
			if(node.left!=null)
			  stack.push(node.left);
			  
		   }
			
			
		}
		
	}
	
		static class tree{
	
		tree(int d,tree l,tree r){
			
			this.data=d;
			this.left=l;
			this.right=r;
			visited=false;
		}
		int data;
		tree left;
		tree right;
		boolean visited;
	}
}

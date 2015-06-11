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
		node5.left=node6;
		node5.right=node7;
		
		boolean x=ancestors(node1,7);
		
		
	}
	
	static boolean ancestors(tree node,int key){
		
		
		if(node==null)
		return false;
		
		if((node.left!=null && node.left.data==key) || (node.right!=null && node.right.data==key)){
		System.out.println(node.data);
		return true;
		}
		
		boolean x=ancestors(node.left,key)||ancestors(node.right,key);
		if(x){
			
			System.out.println(node.data);
		}
		
		return x;
		
		
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

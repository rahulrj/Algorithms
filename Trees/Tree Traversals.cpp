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
		
		node1.left=node2;
		node1.right=node3;
		node2.left=node4;
		node2.right=node5;
		
		
		preorder(node1);
		System.out.println("");
		inorder(node1);
		
		
		
	}
	
	private static void inorder(tree root){
		
		if(root!=null){
		 inorder(root.left);
		 System.out.print(root.data+" ");
		 //inorder(root);
		 inorder(root.right);
		}
		
	}
	
	private static void preorder(tree root){
		
		if(root!=null){
		System.out.print(root.data+" ");
		preorder(root.left);
		preorder(root.right);
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

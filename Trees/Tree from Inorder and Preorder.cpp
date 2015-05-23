/* package whatever; // don't place package name! */

import java.util.*;
import java.lang.*;
import java.io.*;

/* Name of the class has to be "Main" only if the class is public. */
class Ideone
{
	public static void main (String[] args) throws java.lang.Exception
	{
		 tree node1=new tree('Z',null,null);
		// tree node2=new tree('Z',null,null);
		// tree node3=new tree(3,null,null);
		// tree node4=new tree(4,null,null);
		// tree node5=new tree(5,null,null);
		// tree node6=new tree(6,null,null);
		
		// node1.left=node2;
		// node1.right=node3;
		// node2.left=node4;
		// node2.right=node5;
		// node3.left=node6;
		
		String preorder="ABDECF";
		String inorder="DBEAFC";
		
		tree x=construct(preorder,inorder);
		
		preorder(x);
		
	}
	
	static void preorder(tree x){
		
		if(x!=null){
		System.out.print(x.data+" ");
		preorder(x.left);
		preorder(x.right);
		}
		
	}
	
	static tree construct(String preorder,String inorder){
		
		 
		char x=preorder.charAt(0);
		tree node=new tree(x,null,null);
		
		int index=inorder.indexOf(x);
		String subinleft=inorder.substring(0,index);
		String subinright=inorder.substring(index+1);
		
	    
		
		String subpreleft=preorder.substring(1,subinleft.length()+1);
		String subpreright=preorder.substring(subinleft.length()+1);
	    
	    	System.out.println(subinleft+" "+subinright+" "+subpreleft+" "+subpreright);
	    
	    if(subinleft.length()>0)
	    node.left=construct(subpreleft,subinleft);
	    if(subinright.length()>0)
	    node.right=construct(subpreright,subinright);
	    
	    return node;
	    
	   // node.left=construct()
		
		
	}
	
		static class tree{
		
		
		tree(char d,tree l,tree r){
			
			this.data=d;
			this.left=l;
			this.right=r;
		}
		char data;
		tree left;
		tree right;
	}
}

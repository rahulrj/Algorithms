/* package whatever; // don't place package name! */

import java.util.*;
import java.lang.*;
import java.io.*;

/* Name of the class has to be "Main" only if the class is public. */
class Ideone
{
	public static void main (String[] args) throws java.lang.Exception
	{
	    tree node1=new tree(10,null,null);
		tree node2=new tree(8,null,null);
		tree node3=new tree(2,null,null);
		tree node4=new tree(3,null,null);
		tree node5=new tree(5,null,null);
		tree node6=new tree(2,null,null);
		
		node1.left=node2;
		node1.right=node3;
		node2.left=node4;
		node2.right=node5;
		node3.left=node6;
		
		boolean x=checksum(node1,21,0);
		System.out.print(x);
	     
	}
	
	static private boolean checksum(tree node1,int sum,int res){
		
		
		if(node1==null)
		return false;
		
		res=res+node1.data;
		
		if(node1.left==null && node1.right==null && res==sum)
		return true;
		
		
		
		//System.out.println(res+" "+node1.data);
			
			
		
		
		
			
			return (checksum(node1.left,sum,res)|| checksum(node1.right,sum,res));
		
		
		
		
		//return false;
		
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

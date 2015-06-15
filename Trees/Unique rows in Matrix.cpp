/* package whatever; // don't place package name! */

import java.util.*;
import java.lang.*;
import java.io.*;

/* Name of the class has to be "Main" only if the class is public. */
class Ideone
{
	public static void main (String[] args) throws java.lang.Exception
	{
			
			int M[][] =        {{0, 1, 0, 0, 1},
        					   {1, 0, 1, 1, 0},
        					   {0, 1, 0, 0, 1},
        					   {1, 0, 1, 0, 0},
        					   {0, 1, 0, 0, 1},
        					   {1, 0, 1, 0, 0}
        					   };
        					   
        	findUniqueRows(M);
    							
	}
	
	static boolean insert(int a[][],int m,Trie head){
		
		Trie temp=head;
		boolean flag=true;
		
		for(int i=0;i<5;i++){
			
			if(a[m][i]==0){
				
				if(temp.children[0]==null){
					
					Trie newNode=new Trie(0);
					temp.children[0]=newNode;
					temp=temp.children[0];
					flag=false;
				}
				
				else{
					
					temp=temp.children[0];
				}
				
			}
			else{
				
				
				if(temp.children[1]==null){
					
					Trie newNode=new Trie(0);
					temp.children[1]=newNode;
					temp=temp.children[1];
					flag=false;
				}
				
				else{
					
					temp=temp.children[1];
				}
				
				
				
				
				
			}
			
		}
		
		return flag;
	}
	
	static void findUniqueRows(int matrix[][]){
		
		Trie head=new Trie(0);
		
		for(int i=0;i<6;i++){
			
			if(!insert(matrix,i,head)){
				
				System.out.println(i);
			}
		}
		
		
	}
	
	static class Trie{
		
		int data;
		Trie children[];
		
		public Trie(int d){
			
			this.data=data;
			children=new Trie[2];
			children[0]=null;
			children[1]=null;
			
		}
		
		
	}
}

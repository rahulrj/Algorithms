/* package whatever; // don't place package name! */

import java.util.*;
import java.lang.*;
import java.io.*;

/* Name of the class has to be "Main" only if the class is public. */
public class HelloWorld
{
	public static void main (String[] args) throws java.lang.Exception
	{
		
		//ll node1=new ll
		ll node1=new ll(1,null,null);
		ll node2=new ll(2,null,null);
		ll node3=new ll(3,null,null);
		ll node4=new ll(4,null,null);
		ll node5=new ll(5,null,null);
		
		node1.next=node2;
        node2.next=node3;
        node3.next=node4;
        node4.next=node5;

        node1.arbit=node3;
        node2.arbit=node1;
        node3.arbit=node5;
        node4.arbit=node3;
        node5.arbit=node2;
        
         ll arr[]=new ll[5];
         //int arr1[5];
        arr[0]=node1;arr[1]=node2;arr[2]=node3;arr[3]=node4;arr[4]=node5;
        int i=0;
    
        
        do{
            
            ll next;
            if(i<=3)
            next=arr[i+1];
            else
            next=null;
            
            ll node=new ll(arr[i].data,next,null);
            arr[i].next=node;
            i+=1;
        }while(i<=4);
        
        // while(node1!=null){
            
        //     System.out.print(node1.data);
        //     node1=node1.next;
        // }
        
        ll head2=node1.next;

	}
	
	static class ll{
		
		ll(int d,ll l,ll r){
			
			data=d;
			next=l;
			arbit=r;
		}
		
		int data;
		ll next;
		ll arbit;
	}
}

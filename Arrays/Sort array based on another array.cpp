/* package whatever; // don't place package name! */

import java.util.*;
import java.lang.*;
import java.io.*;

/* Name of the class has to be "Main" only if the class is public. */
class Ideone
{
	
	static List<Integer>list=new ArrayList<Integer>();
	public static void main (String[] args) throws java.lang.Exception
	{
	      Integer a1[] = {2,1,2,5,7,1,9,3,6,8,8};
          Integer a2[] = {2, 1, 8, 3};
          
          
          list=Arrays.asList(a2);
          
          func(a1);
          
          for(int i=0;i<a1.length;i++)
           System.out.print(a1[i]+" ");
	}
	
	 static void func(Integer a[]){
		
	//	class comp
		
		Arrays.sort(a,new comp());
		
		
		
	}
	
	static class comp implements Comparator<Integer>{
 
	@Override
	public int compare(Integer o1, Integer o2) {
		
		int index1=list.indexOf(o1);
		int index2=list.indexOf(o2);
		
		if(index1==-1 && index2!=-1)
		 return 1;
		 
		if(index2==-1 && index1!=-1)
		 return -1;
		 
		if(index2==-1 && index1==-1)
		 return (o1-o2);
		 
		 
		
		return index1-index2;
		//return (index1<index2?0:1);
	}
}
}

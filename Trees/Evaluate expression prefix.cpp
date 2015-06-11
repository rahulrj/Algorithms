/* package whatever; // don't place package name! */

import java.util.*;
import java.lang.*;
import java.io.*;

/* Name of the class has to be "Main" only if the class is public. */
class Ideone
{
	public static void main (String[] args) throws java.lang.Exception
	{
		
		String prefix="+-+7*/935/82*/625";
		
		Stack stack=new Stack();
		
		int sum=0;
		
		for(int i=prefix.length()-1;i>=0;i--){
			
			
			char c=prefix.charAt(i);
			if(c!='+' && c!='-' && c!='*' && c!='/'){
				
				stack.push(c-'0');
			}
			
			
			else{
				
				Integer x=(Integer)stack.pop();
				Integer y=(Integer)stack.pop();
				
				
				if(c=='+'){
					
					sum=(x+y);
				}
				else if(c=='-'){
					
					sum=(x-y);
				}
				else if(c=='*'){
					
					
					sum=(x*y);
				}
				else{
					
					sum=(x/y);
				}
				
				
				stack.push(sum);
				
			}
			
		}
		
		System.out.println(sum);
		
	}
}

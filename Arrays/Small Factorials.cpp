/* package whatever; // don't place package name! */

import java.util.*;
import java.lang.*;
import java.math.*;
import java.io.*;

/* Name of the class has to be "Main" only if the class is public. */
class Ideone
{
	public static void main (String[] args) throws java.lang.Exception
	{
	
	  BigInteger b1=new BigInteger("100");
	  BigInteger mul=new BigInteger("1");
	  BigInteger result;
	  
	  for(int i=99;i>=1;i--){
	  	
	  	String str=String.valueOf(i);
	  	mul=mul.multiply(new BigInteger(str));
	  	
	  }
	  
	  System.out.println(mul);
	}
}

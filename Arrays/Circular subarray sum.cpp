#include <iostream>
using namespace std;



void func(int a[]){

   int i=0;
   int sum_till_now=0;
   int max=0;
   bool flag=false;
   bool flag2=false;
   
  
   
   while(1){
   	
   	if(i>10)
   	 i=0;
   	
   	if(flag2 && a[i]<0){
   		
   	 max=sum_till_now>max?sum_till_now:max;
   	 break;
   	}
   	 
   	
   	 if(a[i]>=0)
   	  sum_till_now+=a[i];
   	  
   	 if(a[i]<0){
   	   max=sum_till_now>max?sum_till_now:max;
   	   sum_till_now=0;
   	 }
   	 
   	 
   	 if(i==10){
   	 
   	  flag2=true;	
   	 	
   	  if(a[10]<0 || a[0]<0 || a[1]<0)
       flag=true;	
   	 	
   	  max=sum_till_now>max?sum_till_now:max;
   	  if(flag)
   	  break;
   	  
   	 }
   	  
   	  i+=1;
   	  
   	  //cout<<i<<endl;
   	
   }
   
   cout<<max<<endl;
   
	
}

int main() {
	
	int a[]={12,3,-4,5,6,-7,-8,9,-10,13,11};
	func(a);
	
	return 0;
}

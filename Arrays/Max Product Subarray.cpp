#include <iostream>
using namespace std;


void func(int a[]){

   int i=0;
   int max_so_far=1;
   int min_so_far=-100;
   
   int final_max=1;
   
   while(i<8){
   	
   	if(a[i]<0){
   		if(a[i]>min_so_far)
   	  		min_so_far=a[i];
   	}
   	
   	 if(a[i]!=0)
   	   max_so_far*=a[i]; 
   	   
   	 if(a[i]==0){
   	 	
   	 	
   	 	
   	 	if(max_so_far<0)
   	 	  max_so_far=max_so_far/min_so_far;
   	 	  
   	 	  
   	 	if(max_so_far>final_max)
   	 	  final_max=max_so_far;
   	 	  
   	 	  min_so_far=0;
   	 	max_so_far=1;
   	 }
   	 
   	 if(i==7)
   	   if(max_so_far>final_max)
   	     final_max=max_so_far;
   	   
   	   i+=1;
   	
   }
   
   cout<<final_max<<endl;
  
   	
}

int main() {
	
	int a[]={-2,3,0,48,0,4,19,0};
	func(a);
	
	return 0;
}


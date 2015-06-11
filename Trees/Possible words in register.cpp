#include<iostream>

using namespace std;


void func(int n,int arr[],int sum,int start,int k){
	
	if(sum==7){
			
			for(int j=0;j<start;j++)
			 cout<<arr[j];
			 cout<<endl;
			 
			 return;
		}
	

		
	
		
		if(sum<=n-1){
		  arr[k]=1;
		  func(n,arr,sum+1,start+1,k+1);
		   
		
	   }
	   
	   
	   if(sum<=n-2){
	   	
	   	 arr[k]=2;
	   	 func(n,arr,sum+2,start+1,k+1);
	   }
	   
	   	
		
		
		
	
	
}

int main(){
	
	
	int arr[7]={0};
	func(7,arr,0,0,0);
	
	return 0;
}

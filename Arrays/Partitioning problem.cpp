#include <iostream>
using namespace std;


void func(int a[],int n,int start,int sum,int size,int count){
	
	for(int i=start;i<4;i++){
		
		int sum2=sum+a[i];
		int count2=count+1;
		
		if(count2==size){
		if(sum2==n)
		  cout<<"yes"<<" "<<i<<endl;
		  
		  //count2=count;
		  //sum2=sum;
		}
	else
		  
		func(a,n,i+1,sum2,size,count2);  
		
	}
	
}

int main() {
	
	int a[]={1,5,11,5};
	
	for(int i=1;i<=4;i++)
	 func(a,11,0,0,i,0);
	
	return 0;
}


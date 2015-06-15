#include<iostream>

using namespace std;



void func(int a[],int n,int prod,int start,int count){
	
	for(int i=start;i<n;i++){
		
		//prod=prod*a[start];
		int prd=prod*a[i];
		int ctr=count+1;
		if(ctr==3){
			
			cout<<prd<<endl;
			//return;
		}
		else
		func(a,n,prd,i+1,ctr);
	}
	
}

int main(){
	
	
	int a[]={3,2,5,6};
	func(a,4,1,0,0);
	return 0;
}

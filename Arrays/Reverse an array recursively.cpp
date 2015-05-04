//Rverse an array recursively

#include <iostream>
using namespace std;

void func(int a[],int n,int low,int high){
	
	int temp=a[low];
	a[low]=a[high-1];
	a[high-1]=temp;
	
	if(low==n/2)
	return;
	
	func(a,n,low+1,high-1);
	
	
}


int main() {
	
	
	int a[]={2,3,14,15,20,21};
	
	func(a,6,0,6);
	
	for(int i=0;i<6;i++)
	cout<<a[i]<<endl;
	
	return 0;
}


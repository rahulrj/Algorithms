#include<iostream>

using namespace std;

int func(int a[],int low,int high){
	
	
	int mid=(low+high)/2;
	
	
		if(mid==low && a[mid+1]>=a[mid])
		return mid+1;
	
	if((mid==high && a[mid]>a[mid-1]) || (a[mid]>=a[mid-1] && a[mid]>=a[mid+1]))
	return mid;
	
	
	if(mid>0 && a[mid]<a[mid-1])
	 return func(a,low,mid-1);
	 
	if(mid>0 && a[mid]>a[mid-1])
	 return func(a,mid,high);
	
}


int main(){
	
	int a[]={2,3,1,5,6,7,20,9};
	int n=sizeof(a)/sizeof(a[0]);
	int x=func(a,0,n-1);
	cout<<x<<endl;
	
	return 0;
}

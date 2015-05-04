#include<iostream>

using namespace std;

int func(int a[],int size,int x,int k,int left,int right){
	
	if(left<=right){
		
	//	cout<<left<<" "<<right<<endl;
	
	int mid=(left+right)/2;
	
	if(right-left==1){
		
		if(a[right]>=x && a[left]<x)
		return right;
		
		return 0;
	}
	
	if(a[mid]>=x && a[mid-1]<x)
	 return mid;
	 
    if(a[mid]>=x)
	 return func(a,size,x,k,left,mid-1);
	 
	if(a[mid]<x)
	 return func(a,size,x,k,mid,right);
}
	  
	
}

int main(){
	
	int arr[] ={12, 16, 22, 30, 35, 39, 42,45, 48, 50, 53, 55, 56};
	int size=sizeof(arr)/sizeof(arr[0]);
	int x=35;
	int k=4;
	
	int pivot=func(arr,size,x,k,0,size-1);
	
	
	int right=pivot;
	int left=pivot-1;
	int count=0;
	
	while(count<k && left>=0 && right<size){
		
		if(arr[right]==x)
		right++;
		
		if(arr[right]-x > x-arr[left]){
			
			count++;
			cout<<arr[left]<<" ";
			left--;
		}
		
		if(arr[right]-x < x-arr[left]){
			
			count++;
			cout<<arr[right]<<" ";
			right++;
		}
	}
	
	
	
//	cout<<pivot<<endl;
	return 0;
}

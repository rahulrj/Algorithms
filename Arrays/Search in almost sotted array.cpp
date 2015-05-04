#include<iostream>

using namespace std;


int func(int a[],int key,int low,int high){
	
	if(low<=high){
	
	int mid=(low+high)/2;
	
	if(a[mid]==key)
	 return mid;
	 
	if(mid-1>=low && a[mid-1]==key)
	return mid-1;
	
	if(mid+1<=high && a[mid+1]==key)
	return mid+1;
	
	if(a[mid]>key)
	return func(a,key,low,mid-1);
	
	if(a[mid]<key)
	return func(a,key,mid+1,high); 
	
//	return -1;
	
}
else return -1;
	
	
}

int main(){
	
	
	int a[]={10, 3, 40, 20, 50, 80, 70};
	
	int x=func(a,10,0,6);
	cout<<x<<endl;
	
	return 0;
	
}





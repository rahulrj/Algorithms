#include<iostream>
#include<math.h>

using namespace std;


int func(int a,int b[],int low,int high,int key){
	
	if(low>=0 && low<=high && high<4){
	
	
	int mid=(low+high)/2;
	
	if(b[mid]==key)
	 return b[mid];
	 
	if(b[mid]<key && b[mid+1]>=key){
		
	    int diff1=abs(key-b[mid]);
	    int diff2=abs(key-b[mid+1]);
	    
	    return (diff2<diff1?b[mid+1]:b[mid]);
	    
	}
	
	else if(b[mid]<key){
	
	   return func(a,b,mid+1,high,key);
	}
	
	else if(b[mid]>key){
		
		return func(a,b,low,mid-1,key);
	}
	
}
	
	
	
}

int main(){
	
	
	int a[]={1,4,5,7};
	int b[]={10,20,30,40};
	
	int value=9999;
	int key=32;
	
	
	for(int i=0;i<4;i++){
		
		int x=func(a[i],b,0,3,key-a[i]);
		int diff=abs(a[i]+x-key);
		value=diff<value?diff:value;
		
		
	}
	
	cout<<value<<endl;
	
	return 0;
}

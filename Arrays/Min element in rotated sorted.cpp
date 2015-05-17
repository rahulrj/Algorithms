#include <iostream>
using namespace std;

int mini=100;

void func(int a[],int low,int high){
	
	
	if(low==high)
	{
		if(a[low]<=mini)
		   mini=a[low];
	  
	  return;
	}
	
	int mid=(low+high)/2;
	

	
	//if(a[mid]<=a[low] && a[mid]<=a[high]){
//		
//		if(a[mid]<mini)
//		  mini=a[mid];
//	}

  if(a[low]<=a[mid] && a[high]>=a[mid]){
  	
  	mini=a[low];
  	return;
  }
  
	  
	if(a[low]>=a[mid])
	 func(a,low,mid);
	 
	if(a[high]<=a[mid])
	 func(a,mid+1,high);
	
	  
}

int main() {
	
	
	int a[]={2,3,4,5,6,7,8,9};
	//int a[]={9,8,7,6,5,4,3,2};
	
	func(a,0,7);
	
	cout<<mini<<endl;
	
	return 0;
}

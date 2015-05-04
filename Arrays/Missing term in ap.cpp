#include<iostream>

using namespace std;

int func(int a[],int diff,int low,int high){
	
	int mid=(low+high)/2;
	
	if(a[mid]-a[mid-1]==diff && a[mid+1]-a[mid]!=diff){
		
		cout<<a[mid]<<" "<<diff<<endl;
		return (a[mid]+diff);
	}
	
	else if(a[mid]-a[mid-1]!=diff && a[mid+1]-a[mid]==diff){
		
		return (a[mid]-diff);
	}
	
   else if(a[mid]-a[low]==(mid-low)*diff){
   	  
   	  return func(a,diff,mid+1,high);
   	
   }
   
   else if(a[mid]-a[high]==(high-mid)*diff){
   	
   	return func(a,diff,low,mid-1);
   }
	
}

int main(){
	
	int a[]={1,6,11,16,21,31};
	int diff=(a[5]-a[0])/6;
	
	cout<<diff<<endl;
	
	int x=func(a,diff,0,5);
	cout<<x<<endl;
	
	return 0;
}

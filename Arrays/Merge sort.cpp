#include<iostream>

using namespace std;

void swap(int *a,int *b){
	
	int temp=*a;
	*a=*b;
	*b=temp;
	
}

void merge(int a[],int low,int mid,int high){
	
	
	int n1=mid-low+1;
	int n2=high-mid;
	
	int left[n1];
	int right[n2];
	
	for(int i=0;i<n1;i++){
		
		left[i]=a[low+i];
		cout<<"left"<<left[i]<<" ";
	}
	cout<<endl;
	
	
	
	for(int i=0;i<n2;i++){
		
		right[i]=a[mid+1+i];
		cout<<"right"<<right[i]<<" ";
	}
	cout<<endl;
	
	int j=0,k=0,l=low;
	
	while(j<n1 && k<n2){
		
		
		if(left[j]<=right[k]){
			
			
			
			a[l]=left[j];
			if(low==0 && high==6)
			 cout<<"A"<<j<<" "<<k<<" "<<l<<" "<<left[j]<<" "<<a[l]<<endl;
			j++;
		}
		
		
		else if(left[j]>right[k]){
			
		
			
			
			a[l]=right[k];
				if(low==0 && high==6)
			 cout<<"B"<<j<<" "<<k<<" "<<l<<" "<<right[k]<<" "<<a[l]<<endl;
			k++;
		}
		l++;
		
		
	}
	
	if(low==0 && high==6){
	
	for(int i=0;i<7;i++)
	cout<<a[i]<<" ";
	cout<<endl;
}
	
	while(j<n1){
		
		
		
		 a[l]=left[j];
		 l++;
		 j++;
	}
	
 while(k<n2){
		
		
		 a[l]=right[k];
		 k++;
		 l++;
	}
	
	for(int i=0;i<7;i++)
	cout<<a[i]<<" ";
	cout<<endl;
	
	
}

void func(int a[],int low,int high){
	
	//cout<<low<<" "<<high<<endl;
	if(low<high){
		
	//cout<<"A"<<endl;
	int mid=(low+high)/2;
	
	func(a,low,mid);
	func(a,mid+1,high);
	
	merge(a,low,mid,high);
	
  }
	
}

int main(){
	
	int a[]={3,6,23,18,16,15,5};
	int n=sizeof(a)/sizeof(a[0]);
	
	func(a,0,n-1);
	
	for(int i=0;i<n;i++)
	cout<<a[i]<<" ";
	
	return 0;
}

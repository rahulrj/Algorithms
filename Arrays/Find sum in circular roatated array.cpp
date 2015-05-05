#include<iostream>

using namespace std;

int func(int a[],int n,int key){
	
	int pivot=0;
	for(int i=0;i<n;i++){
		
		if(i>0){
			
			if(a[i]<a[i-1])
			pivot=i;
			 
		}
	}
	
	//cout<<pivot<<endl;
	
	int left=pivot;
	int right=0;
	int found=0;
	int flag=0;
	
	while(left<n && right>=0){
		
		
		
		if(a[left]+a[right]<key){
			
			left++;
		}
		else if(a[left]+a[right]>key){
			
			if(flag==0)
			right++;
			else
			right--;
			
			if(right==pivot){
			
			 flag=1;
			 right=n-1;
		  }
		}
		else
		{
			found=1;
			break;
		}
	}
	
	return found;
	
	
}

int main(){
	
	
	int a[]={9,8,2,3,4,5,6,7};
	
	int b[]={4,5,6,7,8,9,2,3};
	
	int n=sizeof(a)/sizeof(a[0]);
	int x=func(a,n,7);
	cout<<x<<endl;
	return 0;
}

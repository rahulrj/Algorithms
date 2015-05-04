#include<iostream>

using namespace std;

void rotate(int a[],int j,int i){
	
	int x=a[j];
	for(int k=j;k>=i;k--){
		
		a[k]=a[k-1];
		
	}
	
	a[i]=x;
	
}

void func(int a[],int n){
	
	for(int i=0;i<n;i++){
		
		if(i%2==0 && a[i]>0){
			
			for(int j=i+1;j<n;j++){
				
				if(a[j]<0){
					
					//cout<<j<<endl;
					rotate(a,j,i);
					for(int kk=0;kk<n;kk++)
					 cout<<a[kk]<<" ";
					 cout<<endl;
					break;
					
				}
			}
		}
		
		if(i%2!=0 && a[i]<0){
			
			
			for(int j=i+1;j<n;j++){
				
				if(a[j]>0){
					
					rotate(a,j,i);
					for(int kk=0;kk<n;kk++)
					 cout<<a[kk]<<" ";
					 cout<<endl;
					break;
				}
			}
			
		}
	}
}

int main(){
	
	int a[]={1,2,3,-4,-1,4};
	int n=sizeof(a)/sizeof(a[0]);
	func(a,n);
	
//	for(int i=0;i<n;i++)
//	cout<<a[i]<<" ";
	
	return 0;
}

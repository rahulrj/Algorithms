#include<iostream>

using namespace std;


void printArray(int a[],int n) {
for (int i = 0; i<n; i++) {
cout<<a[i]<<" ";
}
 cout<<endl;
}

void permute(int a[],int k,int n) {
if(k==n)
printArray(a,n);
else
for (int i = k; i<n; i++) {
int temp=a[k];
a[k]=a[i];
a[i]=temp;
permute(a,k+1,n);
temp=a[k];
a[k]=a[i];
a[i]=temp;
}
}

int main(){
	
	
	int a[]={1,2,3,4};
	int n=sizeof(a)/sizeof(a[0]);
	permute(a,0,n);

	
	return 0;
	
}





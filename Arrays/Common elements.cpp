#include<iostream>

using namespace std;

void func(int a[],int b[],int c[],int n1,int n2,int n3){
	
	 int i=0,j=0,k=0;
	 while(i<n1 && j<n2 && k<n3){
	 	
	 	if(a[i]==b[j] && b[j]==c[k]){
	 		
	 		cout<<a[i]<<endl;
	 		i++;j++;k++;
	 	}
	 	
	 	if(a[i]<b[j] && a[i]<c[k]){
	 		
	 		i++;
	 	}
	 	
	 	else if(b[j]<a[i] && b[j]<c[k]){
	 		
	 		j++;
	 	}
	 	
	 	else if(c[k]<a[i] && c[k]<b[j]){
	 		
	 		k++;
	 	}
	 }
}

int main(){
	
	int ar1[] = {1, 5, 10, 20, 40, 80};
    int ar2[] = {6, 7, 20, 80, 100};
    int ar3[] = {3, 4, 15, 20, 30, 70, 80, 120};
    
    int n1=sizeof(ar1)/sizeof(ar1[0]);
    int n2=sizeof(ar2)/sizeof(ar2[0]);
    int n3=sizeof(ar3)/sizeof(ar3[0]);
    
    func(ar1,ar2,ar3,n1,n2,n3);
	return 0;
}

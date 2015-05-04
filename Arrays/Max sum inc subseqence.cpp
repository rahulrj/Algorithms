
//
#include <iostream>
using namespace std;

void func(int a[],int  prev,int start,int sum){
	
	for(int i=start;i<7;i++){
		
	    int summ=0,j=prev;
	    if(a[i]>a[prev]){
	    	
	     j=i; 	
	     summ=sum+a[i];
	    }
	    else
	    summ=sum;
	    
	     
	    if(i==6){
	    cout<<summ<<endl;
	
	    }
	    else
		func(a,j,i+1,summ);
	}
}

int main() {
	
	int a[]={1,101,2,3,100,4,5};
	func(a,-1,0,0);
	
	return 0;
}



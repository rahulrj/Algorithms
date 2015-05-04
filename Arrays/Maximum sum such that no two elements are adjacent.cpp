#include <iostream>
using namespace std;


int totalsum=0;
int calc(int a[],int start,int sum){
	
	
	if(start<5){
	sum=sum+a[start];
	if(sum>totalsum){
	  totalsum=sum;
	  //cout<<"tot"<<totalsum<<endl;
	}
	  
	for(int i=2;i<5;i++) 
	calc(a,start+i,sum);
	
	return totalsum;
	
	
	}
	
	
	
}

int main() {


    int a[]={3,2,5,20,7};
    int x=calc(a,0,0);
    cout<<"Total"<<x;
	return 0;
}



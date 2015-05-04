#include <iostream>
using namespace std;

int poss=100;

func(int a[],int n,int low,int high,int pos){
	
	if(low==high)
	return;
	
	int mid=(low+high)/2;
	if(a[mid]==n){
		
		if(mid<poss){
			poss=mid;
		}
	}
	
	func(a,n,low,mid-1,poss);
	func(a,n,mid,high,poss);
	
	
	
	
}

int main() {
	
	
	int a[]={0,1,2,2,2,2,4,5,6,7};
	func(a,2,0,9,100);
	
	cout<<"pos"<<pos<<endl;
	return 0;
}


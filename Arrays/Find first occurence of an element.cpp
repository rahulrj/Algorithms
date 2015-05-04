#include <iostream>
using namespace std;

int poss=100;

int func(int a[],int n,int low,int high,int pos){
	
	
	if(low>high)
	return pos;
	
	int mid=(low+high)/2;
	//cout<<"mid"<<mid<<endl;
	if(a[mid]==n){
		
		if(mid<pos){
			pos=mid;
			//cout<<"pos"<<pos<<" "<<"mid"<<mid<<endl;
			
		}
	}
	
		if(low==high)
	return pos;
	
	int pos1=func(a,n,low,mid,pos);
	int pos2=func(a,n,mid+1,high,pos);
	
	return pos1<=pos2?pos1:pos2;
	
	
}

int main() {
	
	
	int a[]={0,4,3,9,9,6,4,5,6,2};
	int position=func(a,2,0,9,100);
	
	cout<<"pos"<<position<<endl;
	return 0;
}




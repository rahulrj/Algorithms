//Blocak swaap algorithm

#include <iostream>
using namespace std;


void swap(int a[],int startlow,int length,int starthigh,int n){
	
	//cout<<startlow<<" "<<starthigh<<" "<<length<<endl;
	
	for(int i=0;i<length;i++){
		
		int temp=a[startlow];
		a[startlow]=a[starthigh];
		a[starthigh]=temp;
		
	//	cout<<a[startlow]<<" "<<a[starthigh]<<" "<<starthigh<<" "<<startlow;
	//	cout<<endl;
		
		startlow+=1;
		starthigh+=1;
	}
	
	for(int i=0;i<7;i++){
		cout<<a[i]<<" ";
		
	}
	cout<<endl;
}

void swap2(int a[],int aa,int bb){
	
	int temp=a[bb];
	a[bb]=a[aa];
	a[aa]=temp;
	
}


void rotate(int a[],int n,int start,int d){
	
	
  	cout<<"n"<<n<<" "<<d<<endl;
	
	if(n==2){
		
		//cout<<"came"<<a[start]<<" "<<a[start+1]<<endl;
		
		swap2(a,start,start+1);
		return;
	}
	
	if(d==n || d==0)
	return;
	
	
	if(d<n-d){
		
		swap(a,start,d,n-d,n);
		n=n-d;
	}
	
	else if(d>n-d){
		
        	//cout<<"start"<<start<<" "<<n-d<<" "<<d<<endl;
        
		
		swap(a,start,n-d,d+start,n);
	//	swap(a,start,n-d,n-d+1+start);
		start=start+n-d;
		int k=d;
		d=2*d-n;
		n=k;
		
		
		
	}
	
	else if(d==n-d){
		
		swap(a,start,d,n-d,n);
		return;
	}
	
	rotate(a,n,start,d);
	
}

int main() {

		int a[]={1,2,3,4,5,6,7};
		rotate(a,7,0,5);
		
		// for(int i=0;i<7;i++)
		// cout<<a[i]<<endl;
	return 0;
}



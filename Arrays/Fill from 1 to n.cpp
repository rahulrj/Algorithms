#include<iostream>

#define N 4

using namespace std;

void func(int a[],int start,bool flag){
	
	for(int i=1,j=start;i<=N;i++){
		
		//cout<<start<<endl;
		
		a[j++]=i;
		if(j<=2*N-1)
		func(a,start+1,true);
		
	}
	
	if(start==2*N-1){
		
		for(int i=0;i<2*N-1;i++){
			
			cout<<a[i]<<" ";
			if(a[i]!=a[i+a[i]+1])
			flag=false;
			
		}
		cout<<endl;
		
		if(flag==true)
		 cout<<"yes"<<endl;
	}
	
	
	
}

int main(){
	
	//int n=4;
	int a[2*N]={0};
	func(a,0,true);
	
	//for(int i=0;i<2*N;i++)
//	 cout<<a[i]<<endl;
	
	
	return 0;
}

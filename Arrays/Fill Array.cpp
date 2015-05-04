#include<iostream>
#include<cstring>
using namespace std;

#define A 5
#define B 7


void func(int m,int n){
	
	int mat[A][B];
	
	memset(mat,-1,sizeof(mat[0][0])*m*n);
	
	int count=m/2;
	int start=0;
	int colno=n;
	int rowno=m;
	
	for(int i=0;i<=count;i++){
		
		//if(i==3)
//			cout<<start<<" "<<colno<<endl;
		
		for(int j=start,k=rowno-1;j<colno;j++){
			
			
			mat[i][j]=i%2==0?1:0;
			mat[k][j]=i%2==0?1:0;
		}
		
		start+=1;
		colno-=1;
		rowno-=1;
	}
	
	for(int i=0;i<m;i++){
		
		for(int j=0;j<n;j++){
			
			if(mat[i][j]==-1){
				
				mat[i][j]=mat[i-1][j];
			}
		}
	}
	
	
		for(int i=0;i<m;i++){
		
		for(int j=0;j<n;j++){
			
		   cout<<mat[i][j]<<" ";
		   
		}
		cout<<endl;
	}
	
	
	
}

int main(){
	
	int m=A,n=B;
	func(m,n);
	
	return 0;
}

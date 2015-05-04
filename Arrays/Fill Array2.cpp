#include<iostream>
#include<cstring>
using namespace std;

#define A 6
#define B 7


void func(int m,int n){
	
	int mat[A][B];
	
	int colno=B;
	int rowno=A;
	
	int rowstart=0;
	int colstart=0;
	
	int colend=colno;
	int rowend=rowno;
	
	memset(mat,-1,sizeof(mat[0][0])*m*n);
	
	int i=0,j=0;
	int count=m%2==0?(m/2):(m/2+1);
	

   	for(int x=0;x<count;x++){
   	

	 for(j=colstart;j<colend;j++)
	   mat[i][j]=x%2==0?1:0;
 
	 j=j-1;
	 

	for(i=rowstart;i<rowend;i++)
	 mat[i][j]=x%2==0?1:0;
 
	 i=i-1;
	 
	for(j=j;j>=colstart;j--)
	 mat[i][j]=x%2==0?1:0;
	 
	 j=j+1;


    rowstart+=1;
	 
	 for(i=i;i>=rowstart;i--)
	  mat[i][j]=x%2==0?1:0;
	
	i+=1;
	  
	  colstart+=1;
	  colend-=1;
	  rowend-=1;
	  
	  
	  
}
	
	for(int k=0;k<A;k++){
		
		for(int l=0;l<B;l++)
		 cout<<mat[k][l]<<"  ";
		 cout<<endl;
	}

	
	
	
}

int main(){
	
	int m=A,n=B;
	func(m,n);
	
	return 0;
}

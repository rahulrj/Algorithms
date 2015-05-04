#include<iostream>

#define N 5

using namespace std;

void func(int a[][N],int istart,int jstart,int j){
	
	if(istart<=N-3 && jstart<=N-3){
	
	int sum=0;
	for(int i=istart;i<istart+3;i++){
		
		for(int j=jstart;j<jstart+3;j++){
			 
			 sum+=a[i][j];
			
		}
		
	}
	cout<<sum<<" "<<istart<<" "<<jstart<<endl;
	
	if(jstart==N-3)
	func(a,istart+1,j,j);
	else
	func(a,istart,jstart+1,j);
	//func(a,istart+1,jstart);
	
  }
	
}

int main(){
	
	int mat[N][N] = {{1, 1, 1, 1, 1},
                     {2, 2, 2, 2, 2},
                     {3, 3, 3, 3, 3},
                     {4, 4, 4, 4, 4},
                     {5, 5, 5, 5, 5},
                    };
                    
    func(mat,0,0,0);
	
	return 0;
}

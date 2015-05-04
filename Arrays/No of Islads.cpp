#include <iostream>
using namespace std;



int  func(int a[5][5],int i,int j){
	
	
	  for(int k=i-1;k<=i+1;k++){
	  	
	  	   for(int m=j-1;m<=j+1;m++){
	  	   	
	  	   	  if((k>=0 && k<5 && m>=0 && m<5) &&  !(k==i && m==j)  ){
	  	   	  	
	  	   	  	  if(a[k][m]==1){
	  	   	  	  	
	  	   	  	  	
	  	   	  	  	a[k][m]=-1;
	  	   	  	  	func(a,k,m);
	  	   	  	  }
	  	   	  	  
	  	   	  }
	  	   	    
	  	   }
	  }
	
}

int main() {
	
	int a[5][5]={{1,1,0,0,0},
	             {0,1,0,1,1},
	             {1,0,0,1,1},
	             {0,0,0,0,1},
	             {1,0,1,0,1}};
	             
    int sum=0;
    for(int i=0;i<5;i++){
    	
    	for(int j=0;j<5;j++){
    		
    		if(a[i][j]==1)
    		{
    		a[i][j]=-1;
    		func(a,i,j);
    		sum+=1;
    		}
    	}
    }
	     
	cout<<sum<<endl;             
	//func(a);
	
	return 0;
}

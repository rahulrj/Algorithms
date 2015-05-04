#include<iostream>
#include<math.h>

using namespace std;

int main(){
	
	int n=4;
	
	int total=pow(2,n);
	int consec=0;
	
	for(int i=0;i<n-1;i++){
		
	    if(i-1==0 || i+2==n-1){
	    
	    consec+=pow(2,n-4);
	    
	    	
	    }
		 
		else if(i==0 || i==n-2)
		consec+=pow(2,n-3);
		
	
		
		else{
			
			consec+=pow(2,n-4)+2;
		}
		
		cout<<"A"<<consec<<endl;
	}
	
	cout<<total-consec<<endl;
	
	return 0;
}

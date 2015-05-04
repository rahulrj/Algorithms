#include<iostream>
#include<math.h>
using namespace std;

struct job{
	
	int start;
	int end;
	int profit;
};

int profitt=0;

void func(job a[4],int start,int k,int count,int profit){
	
    for(int i=start;i<4;i++){
    	
    	job x=a[start];
    	count=count+1;
    	profit+=x.profit;
    	
    	if(count==k){
    		
    		//profit+=x.profit;
    		cout<<profit<<" "<<k<<" "<<start<<endl;
    		profit-=x.profit;
    		count-=1;
    		
    	}
    	
       func(a,start+1,k,count,profit);	
    	
    }
	
}

int main(){
	
	
	job j1,j2,j3,j4;
	
	j1.start=1;
	j1.end=2;
	j1.profit=50;
	
		
	j2.start=3;
	j2.end=5;
	j2.profit=20;
	
		
	j3.start=6;
	j3.end=19;
	j3.profit=100;
	
		
	j4.start=2;
	j4.end=100;
	j4.profit=200;
	
	job arr[4]={j1,j2,j3,j4};
	
	for(int k=2;k<3;k++)
	func(arr,0,k,0,0);
	
	cout<<profitt<<endl;
	
	return 0;
}

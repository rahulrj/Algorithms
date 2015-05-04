#include <iostream>
#include<math.h>
using namespace std;


string x="";
int minsums=500;
void func(int a[],int sum,int count,string stringSum,int minsum,int start ){
	
	
	for(int i=start;i<10;i++){
		
		int sum1=sum+a[i];
		int count1=count+1;
		
		string stringSum1=stringSum+std::to_string(a[i])+" ";
		//cout<<stringSum1;
	//	
		if(count1==5){
			
			int sum2=abs(296-sum1);
			if(abs(sum2-sum1)<minsums){
			 minsums=abs(sum2-sum1);
			 
			 x=stringSum1;
			 
			 //cout<<sum2<<" "<<sum1<<" "<<minsums<<"dd"<<x<<endl;
			 
			}
			//cout<<stringSum1<<endl;
			// cout<<stringSum1<<endl;
			// return stringSum1;
			 
			
		}
		
		else
		
		 func(a,sum1,count1,stringSum1,minsum,i+1);
		
		
	}
	
}

int main() {
	
	int a[]={3,4,5,-3,100,1,89,54,23,20};
	func(a,0,0,"",500,0);
	cout<<x<<endl;
	
	return 0;
}

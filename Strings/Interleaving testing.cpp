#include<iostream>
#include<string.h>

using namespace std;

#define N 7

void func(string a,string b,char *result,int start,int j){
	
	
	if(j<a.length()){
	
	
	for(int i=start;i<N-1;i++){
		
		char arr[N];
		strcpy(arr,result);
		arr[i]=a.at(j);
		//cout<<"z"<<arr<<"i"<<i<<" "<<j<<endl;
		func(a,b,arr,i+1,j+1);
	}
	
  }
  
 else{
 	
 int k=0,l=0;
 
 while(k<N-1){
 	
 	if(result[k]!=' '){
 		
 		k++;
 		
 	}
 	else
 	{
 		result[k]=b.at(l);
 		k++;
 		l++;
 	}
 }	
 cout<<result<<endl;
}
  
 
	
}

int main(){
	
	
	string a="ABC";
	string b="DEF";
	
	char result[N];
	for(int i=0;i<N-1;i++)
	 result[i]=' ';
	 
	 result[N-1]='\0';
	
	func(a,b,result,0,0);
	
	return 0;
}

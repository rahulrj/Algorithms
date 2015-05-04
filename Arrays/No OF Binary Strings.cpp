#include<iostream>
#include<cstring>

#define N 13

using namespace std;


int count=0;
void func(char *s,int index,int n){
	
	
	if(index==n)
	 count+=1;
	
	if(index<=n-1){
	
	//count+=1;
	func(s,index+1,n);
	
	if(((index>0 || index<n-1)&& s[index-1]!='1' && s[index+1]!='1') || (index==n-1 && s[index-1]!='1') || (index==0 && s[index+1]!='1') ){
		
	  char mystring[N];
      strcpy( mystring ,s );	
	  mystring[index]='1';
	  s=mystring;
	  
	   func(s,index+1,n);
   }
  
 }
	
}

int main(){
	
	
	int n=N;
	func("0000000000000",0,n);
	cout<<count;
	
	
//	cout<<pivot<<endl;
	return 0;
}

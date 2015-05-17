#include<iostream>

using namespace std;

void func(string s,char * ss,int i,int j,int n){
	
	 
	 cout<<i<<endl;
	 
	 if(i>n){
	 	
	 	for(int i=0;i<8;i++)
	 	cout<<ss[i];
	 	cout<<endl;
	 	return;
	 }
	
  if(i<=n && j<=2){
  
  
	
  if(ss[i-1]!=' '){
  
  ss[i]=' ';
  func(s,ss,i+1,j,n);
  
 }
  
  ss[i]=s.at(j);
  func(s,ss,i+1,j+1,n);
  
 }
	
}

int main(){
	
	
	string s="ABCD";
	char ss[8]={' '};
	

	ss[0]=s.at(0);
    ss[6]=s.at(3);

	ss[7]='\0';
	
	
	//ss[0]=' ';
	
	
	
	//cout<<s.at(3)<<endl;
	func(s,ss,1,1,5);
	
	//for(int i=0;i<8;i++)
//	cout<<ss[i];
	
	
	return 0;
}

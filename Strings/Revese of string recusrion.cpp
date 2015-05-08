#include<iostream>

using namespace std;

void func(string s,int n){
	
	if(n<=0)
	return;
	else{
	
	cout<<s[n-1];
	func(s,n-1);
  }
	
}


int main(){
	
	string s ="ABCD";
	int n=s.length();
	func(s,n);
	
	return 0;
}

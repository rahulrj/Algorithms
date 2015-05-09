#include<iostream>

using namespace std;

void func(string s,int i,int n){
	
	if(i<=n-1){
	
	for(int j=1;j<=n-i;j++){
		
		string sub=s.substr(i,j);
		cout<<sub<<endl;
	}
	
	func(s,i+1,n);
	
  }
}

int main(){
	
	string s="ABCD";
	func(s,0,4);
	
	return 0;
}

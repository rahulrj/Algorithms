#include<iostream>

using namespace std;

void func(string s,char *ss,int n,int j){
	
	if(j<=2){
	
	for(int i=0;i<n;i++){
		
		ss[j]=s.at(i);
		if(j==2)
		cout<<ss<<endl;
		
		func(s,ss,n,j+1);
		
	}
	
  }
	
}

int main(){
	
	string s="ABC";
	char ss[4];
	ss[3]='\0';
	func(s,ss,3,0);
	
	return 0;
}

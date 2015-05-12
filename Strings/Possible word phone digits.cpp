#include<iostream>

using namespace std;

void func(string s[],int n,int start,string ss){
	
	
	if(ss.length()==3){
		cout<<ss<<endl;
		return;
	}
	
		
		for(int j=0;j<s[start].length();j++){
			
			string sub=ss+s[start].at(j);
			func(s,n,start+1,sub);
		}
	
	
}

int main(){
	
	
	string s[]={"abc","def","ghi"};
	int n=sizeof(s)/sizeof(s[0]);
	func(s,n,0,"");
	return 0;
	
}

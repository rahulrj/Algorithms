#include<iostream>

using namespace std;

void func(string s,string sub){
	
	for(int i=0;i<s.length();i++){
		
		string sub1=sub+s.at(i);
		//cout<<sub1<<endl;
		if(sub1.length()==3){
			cout<<sub1<<endl;
		}
		else{
		
		string sub2=s.substr(0,i)+s.substr(i+1);
		func(sub2,sub1);
	  }
	}
	
}

int main(){
	
	string s="acc";
	func(s,"");
	
	return 0;
}

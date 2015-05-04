#include<iostream>
#include<string>

#define CHAR_TO_INT(z) z-'0'

using namespace std;

void func(string s,int start,int end,int x){
	
	for(int i=s.length()-1;i>=3;i--){
		
		int x=CHAR_TO_INT(s.at(i));
		
		for(int j=i-1;j>=0;j--){
			
			int y=CHAR_TO_INT(s.at(j));
			if(x>y){
				
				string newstring=s.substr(0,j)+s.at(i)+s.substr(j+1,i-j+1)+s.at(j);
				if(std::stoi(newstring)<x)
				 func(s,)
				
			}
		}
	}
}

int main(){
	
	
	string s="1254";
	int x=std::stoi(s);
	func(s,0,s.length()-1,x);
	
	return 0;
}

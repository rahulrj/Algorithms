#include<iostream>
#include<algorithm>
#include<string>
#include<cstdlib>

#define CHAR_TO_INT(z) z-'0'

using namespace std;

int minn=50000;

int func(string s,int x,string sub,int min){
	
	
	    //cout<<s<<endl;
	    for(int i=0;i<s.length();i++){
	    	
	    	string newstring=sub+s.at(i);
	    	if(newstring.length()==4){
	    		
	    		//cout<<newstring<<endl;
	    		int xx=std::stoi(newstring);
	    		if(xx>x  && xx<min){
	    		  min=xx;
	    		  
	    		  cout<<min<<endl;
	    		  return min;
	    		  
	    		}
	    		
	    	}
	    
	    	else
			 

	    	  func(s.substr(0,i)+s.substr(i+1),x,newstring,min);
	    }
}


int main(){
	
	
	string s="1254";
	int x=std::stoi(s);
	int y=func(s,x,"",10000);
	cout<<y<<endl;
	
	return 0;
}

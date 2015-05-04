#include <iostream>
using namespace std;

void func(string a[],string prev,int start,string s){
	
	for(int i=start;i<9;i++){
		
	    string sum=s+a[i];
	    if(sum.length()==3){
	    cout<<sum<<endl;
	    
	    }
	    else
		func(a,a[i],i+1,sum);
	}
}

int main() {
	
	string a[]={"2","1","0","4","6","3","8","9","5"};
	func(a,"",0,"");
	
	return 0;
}


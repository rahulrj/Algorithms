#include<iostream>
#include<math.h>

using namespace std;

int lcs(string s1,string s2,int m,int n){
	

    if(m<=0 || n<=0)
	 return 0;	
	
	if(s1.at(m-1)==s2.at(n-1)){
		
		//cout<<s1.at(m-1)<<" "<<s2.at(n-1)<<endl;
		
		return (1+lcs(s1,s2,m-1,n-1));
	}
	
	
	
	return max(lcs(s1,s2,m,n-1),lcs(s1,s2,m-1,n));
	
 	
}

int main(){
	
	string s1="GOEKSFORGEEKS";
	string s2="GEKSQUIZ";
	
	int l=lcs(s1,s2,s1.length(),s2.length());
	cout<<l<<endl;
	
	return 0;
}

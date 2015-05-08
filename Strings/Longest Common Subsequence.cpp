#include<iostream>



using namespace std;

void func(string s1,string s2){
	
	
	int mat[s1.length()][s2.length()];
	for(int i=0;i<s1.length();i++){
		
		for(int j=0;j<s2.length();j++){
			
			if(i==0 || j==0)
			 mat[i][j]=0;
			 
			 else{
			 	
			 	 if(s1.at(i)==s2.at(j)){
			 	 	
			 	 	mat[i][j]=mat[i-1][j-1]+1;
			 	 }
			 	 else{
			 	 	mat[i][j]=0;
			 	 }
			 }
		}
	}
	
}

int main(){
	
	string s1="HELLORAHULHIHEY";
	string s2="HERHULHEY"
	
	func(s1,s2);
	
	return 0;
}

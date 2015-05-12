#include<iostream>

using namespace std;

void func(char *s,int i,int j,bool flag,int n){
	
	//cout<<i<<" "<<j<<endl;
	
	if(i==n-1){
		
		s[j]='\0';
		cout<<s<<endl;
		return;
	}
	
	if(s[i]==s[j]){
	
	flag=true;
	func(s,i+1,j,flag,n);
   }
	else{
		
		if(flag){
		
		s[j]=s[i];
		//flag=false;
     	}
		func(s,i+1,j+1,flag,n);
	}
	
	
	
	
}

int main(){
	
	char s[]="aazxxxzy";
	int n=sizeof(s)/sizeof(s[0]);
	cout<<n<<endl;
	func(s,1,0,false,n);
	
	return 0;
}

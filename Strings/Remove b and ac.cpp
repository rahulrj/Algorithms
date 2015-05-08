#include<iostream>

using namespace std;

void func(char *s,int n){
	
	//cout<<n<<endl;
	int i=0,j=0;
	while(i<n-1){
		
		if(s[i]=='B'){
			
			i+=1;
		}
		
		else if(s[i]=='A' && s[i+1]=='C'){
			
			i+=2;
		}
		else{
		
		s[j]=s[i];
			 cout<<s[j]<<i<<j<<" ";
		j++;
		i++;
		
	
   	 }
   	 
   	
			
			
		
	}
	
	//cout<<i<<endl;
	s[j]='\0';
	cout<<endl;
	cout<<s<<endl;
}

int main(){
	
   char s[]="ACDSGFAACCBAC";
   int n=sizeof(s)/sizeof(s[0]);
   //cout<<n;
   func(s,n);
   
   
	
	return 0;
}

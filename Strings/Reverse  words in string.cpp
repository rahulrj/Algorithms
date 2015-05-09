#include<iostream>

using namespace std;


void swap(char *a,char *b){
	
	
	char temp=*a;
	*a=*b;
	*b=temp;
}

void reverse(int i,int j, char *s){
	
	int n=j-i+1;
	int k=n%2==0?(n/2)-1:(n/2);
	
	int kk=k+i;
	
	//cout<<"I"<<i<<" "<<j<<" "<<k<<" "<<n<<endl;
	
	while(i<=kk){
		
		swap(&s[i],&s[j]);
		
		//cout<<"S[I]"<<s[i]<<" "<<s[j]<<endl;
		i++;
		j--;
		
	}
	
//	for(int i=0;i<29;i++)
//	 cout<<s[i];
//	 cout<<endl;
	
}

void func(char s[],int n){
	
	//cout<<n<<endl;
	
	int i=0;
	int j=n-1;
	int k=n%2==0?(n/2)-1:(n/2);
	
	while(i<=k){
		
		
		
		swap(&s[i],&s[j]);
		
		//cout<<s[i]<<" "<<s[j]<<endl;
		
		i++;
		j--;
	}
	
	s[n]='/0';
	
	//for(int i=0;i<n;i++)
//	 cout<<s[i];
//	 cout<<endl;
	 
	 int m,l;
	 
	 for(int i=0;i<n;i++){
	 	
	 	
	 	if(i==0){
	 		
	 		m=i;
	 	}
	 	
	 	if(s[i]==' '){
	 		
	 		
	 		l=i;
	 		//cout<<l<<" "<<m<<endl;
	 		reverse(m,l-1,s);
	 		m=i+1;
	 	}
	 	
	 }
	
	
		
	for(int i=0;i<n;i++)
	 cout<<s[i];
	 cout<<endl;
	
	
}

int main(){
	
	char s[]="i like this program very much";
	int n=sizeof(s)/sizeof(s[0]);
	func(s,n-1);
}

#include<iostream>
#include<limits.h>

using namespace std;

int main(){
	
	char s[]="this is a test string";
	char t[]="tist";
	
	int need_to_find[256]={0};
	int has_found[256]={0};
	
	int len1=sizeof(s)/sizeof(s[0]);
	int len2=sizeof(t)/sizeof(t[0]);
	
	for(int i=0;i<4;i++){
		
		need_to_find[t[i]]++;
	}
	
	//for(int i=0;i<256;i++)
//	cout<<has_found[i]<<endl;
	
	int end=0,begin=0,count=0,win_length=0;
	
	//cout<<len2<<endl;
	
	while(end<len1){
		
		if(s[end]==' ' || need_to_find[s[end]]==0){
		
		end++;
		continue;
	}
	
	//cout<<"end"<<end<<endl;
	
	//cout<<count<<" "<<end<<endl;
	
	has_found[s[end]]++;
	if(has_found[s[end]]<=need_to_find[s[end]])
	count++;
	
	//cout<<"count"<<count<<" "<<has_found[s[end]]<<endl;
	
	
	
	if(count==len2-1){
		
		win_length=end-begin+1;
		cout<<win_length<<" "<<begin<<" "<<end<<endl;
		
		has_found[s[begin]]--;
		count--;
		begin++;
		
		while(need_to_find[s[begin]]==0 || has_found[s[begin]]>need_to_find[s[begin]]){
			
					
			if(has_found[s[begin]]>need_to_find[s[begin]]){
				
				has_found[s[begin]]--;
			}
			begin++;
		}

       cout<<"begin"<<begin<<" "<<end<<" "<<count<<endl;
	}
	
	
	//cout<<win_length<<endl;
	
	
	end++;
		
	}
	
	//cout<<begin<<" "<<end<<endl;
	
	return 0;
}

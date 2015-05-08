#include<iostream>

using namespace std;

bool test(string s1,string s2){
	
	int i=0,j=0,k=0;
	bool flag=false;
	std::size_t found;
	
	while(i<s1.length()-1){
		
	//	if(s1.at(i)!='*' && s1.at(i)==s2.at(j)){
//			
//			i++;
//			j++;
//		}
//		
//		if(s1.at(i)=='?'){
//				
//		if(j<=s2.length()-1){
//			i++;
//			j++;
//		}
//		
//		else return false;
//		
//		
//	}
	
     if(s1.at(i)!='*' && s1.at(i)!='?'){
		
		
		if(j<=s2.length()-1){
		
		if(s1.at(i)==s2.at(j)){
			
			i++;
			j++;
		}
		
		else
		 return false;
		
	  }
	  else
	   return false;
		
	
	}
	
	//else if(s1.at(i)=='*' && i==s1.length()-1){
//		
//		return true;
//	}
	
	else if(s1.at(i)=='*'){
		
		cout<<"I"<<" "<<i<<endl;
		
		k=i;
		while(i+1<=s1.length()-1 && (s1.at(i+1)!= '*' && s1.at(i+1)!='?')){
					
			i++;
		}
		
	string sub1=s1.substr(k+1,k-i+1);
	string sub2=s2.substr(j);
	
	cout<<"S1"<<sub1<<" "<<sub2<<" "<<i<<" "<<j<<endl;
	
	found=sub2.find(sub1);
	cout<<"fou"<<found<<endl;
	if(found==string::npos)
	  return false; 
	  
	  
    j=found+sub1.length()-1;
	
	
	cout<<i<<" "<<j<<endl;
	if(i==s1.length()-1 && j!=sub2.length()-1)
	return false;
	
	}
	

	

	
}
	
	return true;
    
}

int main(){
	
	
	//cout<<test("p*ks", "peeks"); --pass
    //cout<< test("pe?ks*", "peeksabcpeeks"); 
    //cout<<test("g*k", "gee");  --pass
      //cout<<test("*pqrs", "pqrst");-pass
     //cout<< test("abc*bcd", "abcdhghgbcd"); -pass
   cout<<test("abc*c?d", "abcd"); 
//    test("*c*d", "abcd"); 
//    test("*?c*d", "abcd"); 
	
	
	
	return 0;
}

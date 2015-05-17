#include<iostream>

using namespace std;


int findMax(int x,int y,int z){
	
	int max=x;
	
	if(y>max)
	 max=y;
	 
	if(z>max)
	max=z;
	 
	 return max;
	 
}


int getMin(int a[],int low,int high){
	
	int min=a[low],pos=0;
	
	for(int i=low+1;i<=high;i++){
		
		if(a[i]<min){
			min=a[i];
			pos=i;
		}
	}
	
	return pos;
	  
}


int func(int a[],int low,int high){

 if(low<=high){
 
  if(low==high)
   return a[low];
   
   int pos=getMin(a,low,high);	
   
   //cout<<low<<" "<<high<<endl;
   
   int x=func(a,low,pos-1);
  // cout<<"x"<<x<<" "<<low<<" "<<high<<" "<<pos<<endl;
   int y=func(a,pos+1,high);
   //cout<<"y"<<y<<" "<<low<<" "<<high<<" "<<pos<<endl;
   int z=(high-low+1)*a[pos];
   //cout<<"z"<<z<<" "<<low<<" "<<high<<" "<<pos<<endl;
   //cout<<x<<" "<<y<<" "<<z<<endl;
   

   
   return findMax(x,y,z);
   
}
   
   
	
}

int main(){
	
	
	int a[]={5,6,1,6,3,1,2};
	int x=func(a,0,6);
	cout<<x<<endl;
	
	return 0;
}

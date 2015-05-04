#include<iostream>

using namespace std;

void swap(int *a,int *b){
	
	int temp=*b;
	*b=*a;
	*a=temp;
}


int partition(int a[],int low,int high){
	
	//cout<<"high"<<high<<endl;
	int pivot=a[high];
	high--;
	
	while(low<high){
	
	while(low<high && a[low]<pivot)
	 low++;
	 
	// cout<<"low"<<low<<endl;
	 
    while(high>low && a[high]>pivot)
    high--;
    
    //cout<<"Gg"<<high<<endl;
    
    if(low<high)
    swap(&a[low],&a[high]);
    
    
}

    swap(&a[pivot],&a[high+1]);
    return high+1;
	 
	 
	
}

 void func(int a[],int low,int high,int k){
	
	int pos=partition(a,low,high);
	//cout<<pos<<endl;
	
	if(pos==k-1)
	 return pos;
	 
	if(pos>k-1){
		
		return func(a,low,pos-1,k);
	} 
	
	if(pos<k-1){
		
		return func(a,pos+1,high,k);
	}
	
}

int main(){
	
	int arr[] = {12, 3, 5, 7, 19};
    int n = sizeof(arr)/sizeof(arr[0]);
    int k=4;
	
	func(arr,0,n-1,k);
	
	return 0;
}

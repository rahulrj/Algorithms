#include <iostream>
using namespace std;

int temp3[9]={0};


void merge(int a[],int low1,int high1,int low2,int high2,int temp[]){
	
	// if(low1==0 && high2==8){
		
	// 	for(int i=0;i<9;i++)
	// 	cout<<temp[i]<<" ";
		
	// 	cout<<endl;
	// 	//cout<<low1<<" "<<high1<<" "<<low2<<" "<<high2<<endl;
	// }
	

	
	int i=low1;
	int j=low2;
	
	int k=low1;
	
	while(i<=high1 && j<=high2){
	
	if(a[i]<a[j]){
		
		temp[k]=a[i];
		k+=1;
		i+=1;
		
		
	
	}
	
	else if(a[i]>a[j]){
		
		temp[k]=a[j];
		j+=1;
		k+=1;
		
	
	}
	
	
	 
}



if(j<=high2){
	
	while(j<=high2){
		
		temp[k]=a[j];
		j+=1;
		k+=1;
	}
	   
	
}

if(i<=high1){
	
	
	while(i<=high1){
		
		temp[k]=a[i];
		i+=1;
		k+=1;
	}
	
}

	
	// if(low1==0 && high2==8){
		
	// 	for(int i=0;i<9;i++)
	// 	cout<<temp[i]<<" ";
		
	// 	cout<<endl;
	// }
	
	
}


void merge2(int a[],int low1,int high1,int low2,int high2,int temp[]){
	
	// if(low1==0 && high2==8){
		
	// 	for(int i=0;i<9;i++)
	// 	cout<<temp[i]<<" ";
		
	// 	cout<<endl;
	// 	//cout<<low1<<" "<<high1<<" "<<low2<<" "<<high2<<endl;
	// }
	

	
	int i=low1;
	int j=low2;
	
	int k=low1;
	
	while(i<=high1 && j<=high2){
	
	if(temp[i]<temp[j]){
		
		temp3[k]=temp[i];
		k+=1;
		i+=1;
		
		
	
	}
	
	else if(temp[i]>temp[j]){
		
		temp3[k]=temp[j];
		j+=1;
		k+=1;
		
	
	}
	
	
	 
}



if(j<=high2){
	
	while(j<=high2){
		
		temp3[k]=temp[j];
		j+=1;
		k+=1;
	}
	   
	
}

if(i<=high1){
	
	
	while(i<=high1){
		
		temp3[k]=temp[i];
		i+=1;
		k+=1;
	}
	
}

	
	// if(low1==0 && high2==8){
		
	// 	for(int i=0;i<9;i++)
	// 	cout<<temp[i]<<" ";
		
	// 	cout<<endl;
	// }
	
	
}


void swap(int a[],int low,int high){
	
	if(a[low]>a[high]){
		
		
		int temp=a[high];
		a[high]=a[low];
		a[low]=temp;
	}
	
}

void mergesort(int a[],int n,int low,int high,int temp[]){
	
	if(high==low)
	  return;
	
	if(high-low==1){
	 swap(a,low,high);
	 return;
	}
	
	int mid=(low+high)/2;
	
	
	mergesort(a,n,low,mid-1,temp);
	mergesort(a,n,mid,high,temp);
	

	 if(low==0 && high==8)
	  merge2(a,low,mid-1,mid,high,temp);
	  
	merge(a,low,mid-1,mid,high,temp);
	
}



int main() {
	
	
	int a[]={1,3,5,8,6,4,15,9,12};
	int temp[9]={0};
	mergesort(a,9,0,8,temp);
	
	
	for(int i=0;i<9;i++)
	  cout<<temp3[i]<<" ";
	
	return 0;
}
vvb

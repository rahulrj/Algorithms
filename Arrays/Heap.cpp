#include <iostream>
using namespace std;

#define n 4

struct MinHeapNode{
  
  int element;
  int i;
  int j;
	
};

class MinHeap{
	
   MinHeapNode *harr;
   int heap_size;
   
   public:
   
   MinHeap(MinHeapNode a[],int size){
   	
   	heap_size=size;
	harr=a;
	
	int i=(heap_size-1)/2;
	while(i>=0){
		
		MinHeapify(i);
		i--;
	}
   	
   }
   void MinHeapify(int);
   int left(int i){return (2*i+1);}
   int right(int i){return (2*i+2);}
   MinHeapNode getMin(){return harr[0]}
   void replaceMin(MinHeapNode x){harr[0]=x;MinHeapify(0);}
	
};


MinHeap::MinHeapify(int index){
	
	int left=left(i);
	int right=right(i);
	int smallest=i;
	
	if(left<heap_size && harr[left].element<harr[i].element)
	  smallest=left;
	  
	if(right<heap_size && harr[right].element<harr[smallest].element)
	  smallest=right;
	  
	if(smallest!=i)
	{
		swap(&harr[i],&harr[smallest]);
		MinHeapify(smallest);
	}
	
}

void swap(int *a,int *b){
	
	int *temp=*b;
	*b=*a;
	*a=*temp;
}


int *mergeArrays(int a[][n],int k){
	
	int *output=new int[n*k];
	
	MinHeapNode *harr=new MinHeapNode[k];
	for(int i=0;i<k;i++){
		
		harr[i].element=a[i][0];
		harr[i].i=i;
		harr[i].j=1;
	}
	
	MinHeap hp(harr,k);
	
	for(int count=0;count<n*k;count++){
		
		MinHeapNode root=hp.getMin();
		output[count]=root.element;
		
		if(root.j<n){
			
			root.element=arr[root.i][root.j];
			root.j+=1;
		}
		else
		  root.element=INT_MAX;
		  
		  hp.replace()
		
	}
	
}

int main() {
	
	int arr[][n]={{2,6,12,34},
				  {1,9,20,1000},
				  {23,34,90,2000}};
				  
	int k=sizeof(arr)/sizeof(arr[0]);
	
	int *output=mergeArrays(arr,k);
	                  
	
	return 0;
}

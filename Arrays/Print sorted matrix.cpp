#include<iostream>
#include<climits>

using namespace std;

#define N 4


struct heap_node{
	
	int data;
	int row;
	int col;
	
};

void swap(heap_node *a,heap_node *b){
	
	heap_node temp= *b;
	*b=*a;
	*a=temp;
}

void heapifyit(heap_node b[],int i){
	
	int left=2*i+1;
	int right=2*i+2;
	int smallest=i;
	
	if(left>=0 && left<N && (b[left].data)<(b[i].data)){
		
		smallest=left;
	}
	
	if(right>=0 && right<N && b[right].data<b[smallest].data){
		
		smallest=right;
	}
	
	if(smallest!=i){
		
		swap(&b[i],&b[smallest]);
		heapifyit(b,smallest);
	}
}

void heapify(heap_node b[]){
	
	for(int i=N/2-1;i>=0;i--){
		
		heapifyit(b,i);
	}
}

void func(int a[][N]){
	
	heap_node b[N];
	for(int i=0;i<N;i++){
		
		b[i].data=a[0][i];
		b[i].row=0;
		b[i].col=i;
	}
	
	heapify(b);
	
	heap_node x=b[0];
	cout<<x.data<<endl;
	
	for(int i=1;i<16;i++){
		
		
		
		if(x.row<N-1){
			
			b[0].data=a[x.row+1][x.col];
			b[0].row=x.row+1;
			b[0].col=x.col;
			
			
		}
		else{
			
			b[0].data=INT_MAX;
		}
		//b[0].data = (x.row < (N-1))? a[x.row + 1][x.col]: INT_MAX;
		
        //cout<<b[0].data<<" "<<b[0].row<<" "<<b[0].col<<endl;
		
		heapifyit(b,0);
		
	
		
		x=b[0];
		cout<<x.data<<endl;
	
		
	}
	
}

int main(){
	
	int a[][4]={ {10, 20, 30, 40}, 
                 {15, 25, 35, 45},
                 {27, 29, 37, 48},
                 {32, 33, 39, 50}};
                 
    func(a);             
	
	return 0;
}

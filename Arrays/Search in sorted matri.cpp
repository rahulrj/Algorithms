#include<iostream>

using namespace std;

string func(int a[][4],int rowstart,int rowend,int colstart,int colend,int key,int n){
	
		 //cout<<rowstart<<" "<<rowend<<" "<<colstart<<" "<<colend<<" "<<endl;
	
	if(rowstart>=0 && rowstart<n && rowend>=0 && rowend<n && colstart>=0 && colstart<n && colend>=0 && colend<n){
	
	cout<<rowstart<<" "<<rowend<<" "<<colstart<<" "<<colend<<" "<<"yes"<<endl;
	
	int midx=(rowstart+rowend)/2;
	int midy=(colstart+colend)/2;
	
	if(a[midx][midy]==key){
		cout<<"got"<<midx<<" "<<midy<<endl;
		return "z";
	}
	
	
	
	//cout<<midx<<" "<<midy<<endl;
	
	if(a[midx][midy]<key){
		//cout<<"coming"<<endl;
		 string x=func(a,midx+1,rowend,colstart,colend,key,n);
		 if(x!="x")
		  return x;
		 string y=func(a,rowstart,rowend,midy+1,colend,key,n);
		 if(y!="x")
		 return y;
		 
	
	}
//	
//	if(a[midx][midy]>key){
//		
//		return func(a,rowstart,rowend,colstart,midy-1,key,n);
//		return func(a,rowstart,midx,midy,colend,key,n);
//	}
 }
 
 return "x";
	
}

int main(){
	
	int mat[4][4] =                { {10, 20, 30, 40}, 
                                    {15, 25, 35, 45},
                                    {27, 29, 37, 48},
                                    {32, 33, 39, 50}};
                                    
    string x=func(mat,0,3,0,3,50,4);
    cout<<"got herer"<<x<<endl;
	
	return 0;
}

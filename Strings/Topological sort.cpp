#include<iostream>
#include<list>
#include<stack>

using namespace std;

class graph{
	
	
	int v;
	list<int> *adj;
	
	public:
		graph(int V){
			
			this.v=V;
			this.adj=new list<int>[v];
			
		}
		
		void addEdge(int u,int v){
			
			//TO BE DONE LATER
		}
		
		void topologicalSort(){
			
			//TO BE DONE LATER
		}
	
};

int main(){
	
	
	
	return 0;
}

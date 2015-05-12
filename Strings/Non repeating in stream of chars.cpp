#include<iostream>

using namespace std;

struct dll{
	
	char data;
	struct dll *prev;
	struct dll *next;
};

void append(dll** head,dll** tail,char c){
	
	if(*head==NULL){
		
		 *head=new dll();
		//(*head)->next=new dll();
		(*head)->data=c;
		(*head)->prev=NULL;
		(*head)->next=NULL;
		
		*tail=*head;
	}
	
	else{
		
		(*tail)->next=new dll();
		(*tail)->next->data=c;
		(*tail)->next->next=NULL;
		(*tail)->next->prev=*tail;
		
		*tail=(*tail)->next;

		
	}
	
}

void removeNode(dll** head,dll** tail,dll* pointer){
	
	
	if(*head==pointer)
		
	   *head=(*head)->next;
	
	if (*tail == pointer)
        *tail = (*tail)->prev;
    if (pointer->next != NULL)
        pointer->next->prev = pointer->prev;
    if (pointer->prev != NULL)
        pointer->prev->next = pointer->next;
}

void getNonRepeat(){
	
	bool visited[256];
	dll* pointers[256];
	
	for(int i=0;i<256;i++){
		
		visited[i]=false;
		pointers[i]=NULL;
	}
	
	dll* head=NULL;
	dll* tail=NULL;
	
	char stream[] = "geeksforgeeksandgeeksquizfor";	
	int n=sizeof(stream)/sizeof(stream[0]);
	//cout<<n<<endl;
	for(int i=0;i<n-1;i++){
		
		
		if(!visited[stream[i]]){
			
			
			if(pointers[stream[i]]==NULL){
			
			append(&head,&tail,stream[i]);
			//cout<<head->data<<endl;
			pointers[stream[i]]=tail;
		   }
		   
		   else{
		   	
		   	  visited[stream[i]]=true;
		   	  removeNode(&head,&tail,pointers[stream[i]]);
		   	  pointers[stream[i]]=NULL;
		   	
		   }
		}
	//	cout<<"a"<<endl;
		cout<<(head->data)<<endl;
		
		
	}
	
	
	
}

int main(){
	
	getNonRepeat();
	
	return 0;
}

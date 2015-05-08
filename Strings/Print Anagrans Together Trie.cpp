#include<iostream>
#include<algorithm>
#include<string.h>
#include<cstdlib>

#define CHAR_TO_INT(c) c-'a'

using namespace std;

struct trie_node{
	
	char c;
	trie_node *next[26];
};


int compare(const void *a,const void *b){
	
	
	 char *aa= (char *)a;
	 char *bb=(char*)b;
	 
	 return *aa-*bb;

     //return 0;
}

trie_node *getNode(char c){
	
	trie_node *head=new trie_node();
	head->c='a';
	
	for(int i=0;i<26;i++){
		
		head->next[i]=NULL;
	}
	
	return head;
}

void insert(trie_node **head,char *buffer){
	
	for(int i=0;i<strlen(buffer);i++){
		
		int x=CHAR_TO_INT(buffer[i]);
		**head->next[x]=NULL;
	}
	
}

int main(){
	
	
  char *arr[]={"cat", "dog", "tac", "god", "act", "gdo"};
  
   trie_node *head=getNode('a');
      
	
	for(int i=0;i<1;i++){

        int len=strlen(arr[i]);
        char *buffer=new char[len+1];
        strcpy(buffer, arr[i]);
        
        
		qsort((void*)buffer,strlen(arr[i]),sizeof(char),compare);
		
		insert(&head,buffer);
	
		
	}
	
	return 0;
}

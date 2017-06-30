#include<stdio.h> 
#include<stdlib.h>
#include<string.h> //strcpy()


typedef struct node{
	
	char * first_name[25] ;
	char * last_name[25]; 
	char * phone[10] ;
	char * email[50];
	char * title[25]; 	
	struct ContactNode *pNext ; //self referential to get to the next node in the linked list. 
	
}ContactNode

//allocates dynamic memory 
ContactNode *makeNode (char * first, char *last, char *number, char *address, char *job);

//use some of Andy's code. in order to get it to work 

void insertFront(contactNode **pHead, char * first, char * las, char * number, char * address, char *job); // we link nodes

void printList (contact Node *pHead); // single star 

 

int deleteNode(ContactNode **phead, char *first, char *last); 








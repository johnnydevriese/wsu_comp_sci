#define _CRT_SECURE_NO_WARNINGS

//array of chars
//char * arrayptr[]

#ifndef LINKED_LIST_H
#define LINKED_LIST_H

#include <stdio.h>
#include <stdlib.h> //malloc ()

typedef struct node
{
	int data; 
	struct node *pNext; //"p" indicates pointer *** this makes it a self referential structure. 
	
}Node;


//want the return type to be a pointer. 
//the return will be "node *"
//the function dynamically allocates a node and initializes node.
Node *makeNode(int newData);

void makeNodeDriver(void);









#endif

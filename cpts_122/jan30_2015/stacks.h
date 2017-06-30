#define _CRT_SECURE_NO_WARNINGS


#ifdef STACKS_H
#define STACKS_H


#include<stdio.h> 
#include<stdlib.h>
#include<string.h> //strlen()

typedef enum boolean
{
	//use these if possible to allocate memory. 
	FALSE, TRUE 
	
} Boolean; 


typedef struct stackNode
{
	
	char *pString; //char pString[]; 
	struct stackNode *pNext; 
} StackNode; 

//we're going to dynamically allocate memory for the strings because otherwise
//you only get four bytes for an address. 

StackNode *makeNode ( char * pNewString); 

//how we insert things into the stack same as insert at front in linkedList. 
Boolean push (StackNode ** pTop, char * pNewString); 

void printStack(StackNode *pTop); 

//pStringData is what well actually be copy/printing. 
void pop (StackNode *pTop, char * pStringData); 












#endif

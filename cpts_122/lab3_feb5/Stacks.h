
#include<stdio.h> 
#include<stdlib.h> 
#include<string.h> 


typedef enum boolean
{
	FALSE, TRUE 
} Boolean; 

typedef struct stackNode
{
	int pString; // char pString[100]; 
	struct stackNode *pNext; 
}StackNode; 


void pop (StackNode ** pTop); 


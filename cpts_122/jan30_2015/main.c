#include "stacks.h"



int main(void)
{
	StackNode *pTop = NULL; // empty stack 
	
	
	push(&pTop, "cpts"); 
	
	printStack(pTop); 
	
	push (&pTop, "42"); 
	
	printStack(pTop); 
	
	push (&pTop, "EE"); 
	
	printStack(pTop); 
	
	push( &pTop, "Seahawks"); 
	printStack(pTop); 
	
	
	
	
	
	
	
	return 0; 
} 

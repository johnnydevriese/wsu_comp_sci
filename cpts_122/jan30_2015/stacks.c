#include"stacks.h" 

StackNode *makeNode ( char * pNewString)
{ 
	StackNode * pMem = NULL; 
	
	//allocating memory for it. 
	pMem = (StackNode *) malloc (sizeof(StackNode); 
	
	//initialize the node. 
	//pMem -> pString = pNewString; this can lead to a dangling pointer. 
	
	//allocate dynamic memory for the string --> pNewString. 
	
	//allocated memory but the string is not done yet. 
	pMem -> pString = (char *) malloc(sizeof(char) * (strlen(pNewString) + 1 ) );  //needs to be enough memory for a string. 
	//don't use sizeof() when the strlen() is more appropriate. 
	
	//strdup will allocate and copy your string for you. 
	strcpy (pMem -> pString, pNewString); 
	
	
		
	pMem -> pNext = NULL; 
	
	
	
	return pMem; 
}


//linked list insert at front is a "push" 

Boolean push (StackNode ** pTop, char * pNewString)
{
	
	StackNode *pMem = NULL; 
	
	//allocate local variable. 
	Boolean success = FALSE; 
	
	pMem = makeNode (pNewString); 
	
	
	//if memory was allocated 
	if( pMem != NULL)
	{ 
		success = TRUE; 
		
		pMem -> pNext = *pTop; 
		*pTop = pMem; 
		
		
	} 
	
	
	
	return success; 
}


void printStack(StackNode *pTop)
{
	while(pTop != NULL)
	{
		printf("Str: %s \n", pTop -> pString); 
		pTop = pTop -> pNext; 
		
		
		
		
	}
	
	putchar('\n'); 
	
	
	
	
	
	
	return; 
} 

//precondition: stack is not empty
//is like a delete front. 

void pop (StackNode *pTop, char * pStringData)
{
	StackNode * pTemp = NULL; 
	
	pTemp = *pTop; 
	
	*pTop = (*pTop -> pNext); 
	
	//set pTop to the new top node. 
	strcpy(pStringData ,pTemp -> pString); 
	
	//this should be a concern. 
	//free (pTemp); 
	
	//In general, we applied two malloc()  
	//so we need to two free () calls
	
	free (pTemp -> pString); 
	free (pTemp); 
	
		
	
}

//function call stacks are the most important thing to know. 








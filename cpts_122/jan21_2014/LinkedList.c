#include "LinkedList.h"

Node *makeNode(int newData)
{
	Node *pMem = NULL; 
	
	//1.dynamically allocate memory i.e. malloc()
	//take void * and make it Node * instead. 
	pMem = (Node *)malloc(sizeof(Node));
	
	//2. Initialize memory.
	pMem->data = newData;
	pMem-> pNext = NULL; 
	
	
	//dynamic memory does not go out of scope until you free() it. 
	//memory comes from the "heap"
	return pMem;
}

void makeNodeDriver(void)
{
	Node *pTest = makeNode (42);
	
	printf("data: %d pNext: %d \n", pTest->, pTest->pNext); 
		
	return ;
}

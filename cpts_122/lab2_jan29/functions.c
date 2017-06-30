#include"functions.h"

//assuming that the data coming in has been sanatized. 

ContactNode *makeNode (char *first, char * last, char *number, char *address, char * job)
{
	
	// we want to copy the data into it. 
	
	ContactNode *pMem = NULL; 
	
	//q. dynamically allocate memory - malloc()
	pMem = (contactNode *) malloc ( sizeof( ContactNode)); // getting memory from the heap. 
	
	//2. intialize memory 
	pMem -> first_name = first; 
	strcpy(pMem-> first_name, first); 
	strcpy(pMem-> last_name, last); 
	strcpy(pMem-> phone, number); 
	strcpy(pMem-> email, address); 
	strcpy(pMem-> title, job); 
	
	
	pMem -> pNext = NULL; 
	
	return pMem; 
} 


void insertFront(ContactNode **pHead, char * first, char * las, char * number, char * address, char *job)
{
	
	
	ContactNode *pMem = makeNode(first, last, number address, job); 
	
	//list empty!? this is important to check! 
	if(*pHead == NULL)
	{
		*pHead = pMem; 
	} 
	else // if list is not empty we know there is some data.
	{
		pMem -> pNext - *pHead; 
		*pHead = pMem; 
	} 
	
	//not finished with insert front()? 



}

void printList(node *pHead)
{
	
	
	//commented out because we will print recursively
	
}


void printListRec( ContactNode * pHead)
{
	
	//print("->"); 
	
	if (phead != NULL)
	{
		
		//remove spaces after commas becuase we will be reading in from a csv file. 
		printf("%s,", phead -> last_name);
		printf("%s,", phead -> first_name);
		printf("%s,", phead -> title);
		printf("%s,", phead -> phone);
		printf("%s,\n", phead -> email);
		 
		printListRec( pHead -> pNext); 
		
		//this print statem;ent will print in reverse order
		//printf("%d", pHead -> data); 
		
	}
	/*
	else
	{
		putchar('\n'); 
	} 
	*/ 
	
	
}



//precondition - cooperative design - list can not be empty 

int deleteNode(contactNode **pHead, char * first, char *last)
{
	
	ContactNode *pPrev = NULL;
	ContactNode *pCur = NULL; 
	int success = 0; 
	
	pCur = *pHead; //set to beginning of list. 
	
	
	//comparisons before deleting the node: 1. not empty. 2. first name the same 3. last name is the same. 
	while((pCur != NULL) && (strcmp(first,pCur->first_name) != 0) &&
	(strcmp(last, pCur->last_name) != 0) )
	
	{
		
		pPrev = pCur; 
		pCur = pcur -> pNext; 
	} 
	
	//in the correct location of list to delete node 
	if( pCur != NULL) 
	{ 	
		//not the first item (pHead)
		if (pPrev != NULL) 
		{
			pPrev -> pNext = pCur -> pnext; 
		} 
		
	 
	else // deleting front node 
	{ 
		*pHead = pCur -> pNext; 
	}
	
	free(pCur); 
	//we did find it and delete it. 
	success = 1;
	}
 
}		

	return success; 
}


void  insertOrder(ContactNode **pHead, char *first, char *last, char * number, char * address, char *job)
{
	
	ContactNode *pMem = NULL; 
	ContactNode *pPrev = NULL; 
	ContactNode *pCur = NULL; 
	
	if(*pHead == NULL) // list is empty
	{
		*pHead = pMem; //reassignments are fast but copying is slow we just have to change the address.  and not copy all the data 
	}
	
	
	else // list is not empty 
	{
		
		/pPrev = NULL 
		pCur = *pHead; // set to front of list 
		
		//ascending order 
		//rely on short circuit evalutation 
		while( (pcur != NULL) && (strcmp(last, pCur->last_name) > 0 ) )
		{
			pPrev = pCur; 
			pCur = pCur -> pNext; 
		} 
		
		if (pPrev != NULL) 
		{ 
			pMem -> pNext = pCur; 
			pPrev -> pNext = pMem; // maybe... 
			
		}
		
	
	
	
		
		
	return; 
}
	










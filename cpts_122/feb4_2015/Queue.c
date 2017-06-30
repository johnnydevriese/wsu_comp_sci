#include"Queue.h"

QueueNode * makeNode (char *pNewString)
{
	QueueNode * pMem = NULL; 
	
	//allocate memory for the pointers(to a string) in the struct 
	//allocates a node. 
	pMem = (QueueNode *) malloc(sizeof(QueueNode); 
	
	//allocate memory for the string!! 
	//malloc() returns an address for a block of memory.
	//strlen only returns NUMBER of Characters & NOT the NULL character  
	//cast it to char * because it's a string and not the address! 
	pMem -> pData = (char *) malloc(sizeof(char) * (strlen(pNewString) + 1) ) ; 
	
	strcpy(pMem -> pData, pNewstring); 
	
	pMem -> pNext = NULL; 
	
	return pMem; 
	
}


int enqueue ( Queue * pQ, char * pNewString)
{
	int success = 0; // equal to zero meaning it is unsuccessful 
	
	QueueNode *pMem = NULL; 
	
	//only have to update pHead if it is an empty Queue. 
	//otherwise you only have to edit pTail and update it. 
	
	
	//now we have a node with a new string but it hasn't been connected to the Queue. 
	pMem = makeNode ( pNewString); 
	
	if(pMem != NULL) 
	{
		//we were able to allocate memory. 
		
		//is the list empty?
		if( pQ->pHead == NULL)
		{
			//queue is empty. 
			pQ->pHead = pMem; 
			pQ->pTail = pMem; 

			//this is equivalent. 
			pQ->pHead = pQ->pTail = pMem; 
			
		}
		else //queue is not empty. 
		{
			pQ->pTail->pNext = pMem; 
			
			//don't have to update pHead because this is a queue and you only have to update the tail. 
			pQ->pTail = pMem; 
			
		}
		
		success = 1; 
		
	}
	
	
	
	
	return success; 
}


//delete from the front of the queue
int dequeue ( Queue * pQ, char * pNewString )
{
	//return 1 if were able to delete node. 
	QueueNode * pTemp = NULL; 
	int success = 0; 
	
	
	if(pQ->pHead != NULL) //then we should be able to delete the node because it's NOT empty. 
	{
		
		success = 1; 
		strcpy(pNewstring, pQ->pHead->pData); 
		
		
		//need a temporary pointer otherwise we will lose the memory. 
		pTemp = pQ->pHead;
		
		pQ->pHead = pQ->pHead->pNext; //reassigned pHead to next node. 
		
		
		//need to check if just one node in queue
		//another possibility if pNext == NULL 
		if( (pQ->pTail == (pTemp) ) 
		{
			pQ->pTail = NULL; //now we have an empty list. 
		}
			
		//now we have to free the memory. 
		//free allocated string and free the node. 
		free(pTemp->pData); 
		free(ptemp); 
	}	
	
	
	return success; 
}


//****** working in lab ****** 

int enqueue( Queue *pQ, char *pNewString)
{
	queueNode * pMem = NULL; 
	int success = 0; //function returns 1 if true and 0 if false. 
	
	//need to make a new node. 
	pMem = makeNode( pNewString); 
	
	//want to check if pMem came back as NULL? 
	if( pMem != NULL)
	{
		success = 1; 
		
		//checking if it's an empty list. 
		if(pQ->pHead != NULL)
		{
		
		
		//want to have pTail point to the pMem. 
		pQ->pTail->pNext = pMem; 
		
		//tail is used so we can tack things on quickly without having to iterate through the entire list. 
		
		pQ->pTail = pMem; 
		
		}
		
		//if we do have an empty list. 
		else
		{
			//just assign both Head and Tail to pMem
			pQ->pHead = pMem; 
			pQ->pTail = pMem; 
		}
		
		
		
	}
		
		return success; 
	}	
	
	
	
}


int dequeue( Queue *pQ, char *pNewString)
{
	
	QueueNode *pTemp = NULL; 
	int success = 0; 
	
	if( pQ->pHead != NULL) // it's not empty --> defensive design
	{
		success = 1; 
		strcpy(pNewString, pQ->pHead->pData;
	
	
		//we need to keep track of the old head otherwise we will lose it and not be able to free it later on. 
		pTemp = pQ->pHead; 
	
		//reassign head of our list. 
		pQ->pHead = pQ->pHead->pNext; 
	
		//free memory of previous head. 		
		free(pTemp->pData); 
		free(pTemp); 
		
		
	}
	
	else
	{
	//want to change the pNewString so that way we know that we weren't successful in dequeueing
	pNewString = NULL; 
	
	*pNewString = '\0';
	}

	//you always want to check if the queue is empty... 

	return success; 
}



void printQueueRec ( QueueNode  * pQ)
{
	
	//print first will put the queue in order and then call recursively. 
	//if you did it the other way around then it would print the queue backwards
	//you might need to do one or the other for different application(s). 
	
	
	//needs to be pQ != NULL and NOT pQ->pNext != NULL otherwise it will not print the last node in the shit. 
	if(pQ != NULL )
	{
	
	printf("%s", pQ->pData);
	printqueue (pQ->pNext); 
	
	}
	


}

















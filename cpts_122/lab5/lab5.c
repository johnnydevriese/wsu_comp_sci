#include "lab5.h" 


//ascending = 1 
//ascending = -1 

void insertOrder(Node **pHead, int newData, int order) //order will define if ascending or descending. 
{
	Node *pmem = NULL, *pCur = NULL, *pPrev = NULL; 
	
	pmem = makeNode(newData); 
	
	pmem = *pHead; 
	
	if(pmem != NULL) //not equal to NULL so we know that it's a decent value. 
	{
		
		
		if(*pHead == NULL)
		{
			*pHead = pmem; 
		} 
		
		else //list is not empty 
		{
			//need to iterate through to find where to insert. 
			if(order > 0 ) //ascending order 
			{
				while( (pCur != NULL) && pCur->data < newData)  
				{
					pPrev = pCur; 
					pCur = pCur->pNext; 
					
				}
				
				
				
				
				
			}
			else if(order < 0) //descending order
			{
				while( (pCur != NULL) && pCur->data > newData)  
				{
					pPrev = pCur; 
					pCur = pCur->pNext; 
					
				}
				
				if(pPrev != NULL) // beginning or middle/end of list? 
				{
				//at the right position so now we just need to reassign the pointers. 
				pmem->pNext = pCur; 
				pPrev->pNext = pmem; 
				}
				else //pprev = NULL is the front of our list. 
				{
					pmem->pNext = *pHead; 
					*pHead = pmem; 
					
				}
				
			}
			
		}
		
		
	}
		
	
	
	
}



void mergelist(Node **dest, Node **source1, Node **source2, int order) 
{
	Node * ptemp = NULL; 
	
		
	ptemp = *source1; 
		
	//iterate through each list and insert in order. 
	//insert all of source1 into destination. 
	while(ptemp != NULL)
	{
		insertOrder(dest, ptemp->data, order); 
		//iterate ptemp; 
		ptemp = ptemp->pNext; 
	}
		
	ptemp = *source2; 
	while(ptmep != NULL)
	{
		insertOrder(dest, ptemp->data, order);
		//iterate ptemp 
		ptemp = ptemp->pNext; 
		
	} 
		
		
		
	
	
}













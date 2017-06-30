#include"groceryStore.h" 


//this function will take two values which define a range that the random number generator will create. 

int random(int min_number, int max_number)
{
	
	int result=0,low_num=0,hi_num=0;
	if(min_num<max_num)
	{
		low_num = min_number;
		hi_num = max_number + 1; // this is done to include max_num in output.
	}
	else
	{
		low_num = max_number + 1;// this is done to include max_num in output.
		hi_num = min_number ;
	}
	srand(time(NULL));
	
	result = (rand()%(hi_num-low_num))+low_num;
	
	return result;
}


QueueNode *makeNode (char *pNewString)
{
	QueueNode *pMem = NULL;

	// allocates a node
	pMem = (QueueNode *) malloc (sizeof (QueueNode));

	// allocates space for an entire string
	//pMem -> pData = (char *) malloc (sizeof (char) * (strlen (pNewString) + 1));

	pMem->customerNumber = (int *) malloc(sizeof( int) ); 
	
	pMem->serviceTime = (int * )malloc(sizeof(int) ); 
	
	pMem totalTime = (int *) malloc(sizeof(int) ); 
	
	

	pMem -> pNext = NULL;

	return pMem;
}

int enqueue (Queue *pQ, int custNum, int serveTime, int totTime)
{
	QueueNode *pMem = NULL;
	int success = 0;
	
	//so you would need to determine the values of customer number, service time, total time here 
	//or do it after the node is created. 

	pMem = makeNode (custNum, servetime, totTime);

	if (pMem != NULL) 
	{
		// we were able to allocate memory

		// list empty?
		if ((pQ->pHead) == NULL)
		{
			// queue is empty
			pQ->pHead = pMem;
			pQ->pTail = pMem;

			//pQ->pHead = pQ->pTail = pMem;
		}
		else // queue is not empty
		{
			pQ->pTail->pNext = pMem;
			pQ->pTail = pMem;
		}

		success = 1;
	}

	return success;
}


// we have not completed dequeue!!!
int dequeue (Queue *pQ, int customer_Number)
{
	QueueNode *pTemp = NULL;
	int success = 0;

	if (pQ->pHead != NULL) // it's not empty --> defensive design
	{
		success = 1;
		//strcpy (pNewString, pQ->pHead->pData);
		
		customer_Number = pQ->pHead->customerNumber;
		
		pTemp = pQ->pHead;

		pQ->pHead = pQ->pHead->pNext; // reassigned pHead to next node

		// need to check if just one node in queue
		if ((pQ->pTail) == (pTemp))
		{
			pQ->pTail = NULL;
		}

		free (pTemp -> pData); // free alllocated string
		free (pTemp); // free node
	}

	return success;
}



























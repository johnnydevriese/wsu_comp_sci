#include"groceryStore.h" 


//this function will take two values which define a range that the random number generator will create. 

int random(int min_number, int max_number)
{
	
	int result=0,low_num=0,hi_num=0;
	if(min_number < max_number)
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


QueueNode *makeNode (int cust_number, int service_time, int total_time)
{
	QueueNode *pMem = NULL;

	// allocates a node
	pMem = (QueueNode *) malloc (sizeof (QueueNode));

	if(pMem != NULL)
	{

		pMem->customerNumber = cust_number ;

		pMem->serviceTime = service_time; 

		pMem->totalTime = total_time ;

		pMem -> pNext = NULL;
	}

	

	return pMem;
}

int enqueue (Queue *pQ, int custNum, int serveTime, int totTime)
{
	QueueNode *pMem = NULL;
	int success = 0;
	
	//so you would need to determine the values of customer number, service time, total time here 
	//or do it after the node is created. 

	pMem = makeNode (custNum, serveTime, totTime);

	//not an empty list! 
	//if (pMem != NULL) 
	//{
		// we were able to allocate memory

		// list empty?
		if (pQ->pHead == NULL)
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
	//}

	return success;
}


// we have not completed dequeue!!!
int dequeue (Queue *pQ)
{
	QueueNode *pTemp = NULL;
	int success = 0;

	if (pQ->pHead != NULL) // it's not empty --> defensive design
	{
		success = 1;
		
		//customer_Number = pQ->pHead->customerNumber;
		
		printf("Dequeued customer number: %d \n", pQ->pHead->customerNumber); 

		printf("Dequeued service time: %d \n", pQ->pHead->serviceTime); 

		printf("Dequeued total time: %d \n", pQ->pHead->totalTime); 


		pTemp = pQ->pHead;

		pQ->pHead = pQ->pHead->pNext; // reassigned pHead to next node

		// need to check if just one node in queue
		if ((pQ->pTail) == (pTemp))
		{
			pQ->pTail = NULL;

		}


		free (pTemp); // free node
	}

	return success;
}



void printQueue(Queue pQ)
{

	while(&pQ != NULL)
	{
		printf("customer number: %d \n", pQ.pHead->customerNumber); 

		printf("service time: %d \n", pQ.pHead->serviceTime); 

		printf("Total time: %d \n", pQ.pHead->totalTime); 

		pQ.pHead = pQ.pHead->pNext;

	}




	return; 
}























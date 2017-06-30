#include "Queue.h"

QueueNode *makeNode (char *pNewString)
{
	QueueNode *pMem = NULL;

	// allocates a node
	pMem = (QueueNode *) malloc (sizeof (QueueNode));

	// allocates space for an entire string
	pMem -> pData = (char *) malloc (sizeof (char) * (strlen (pNewString) + 1));

	strcpy (pMem -> pData, pNewString);

	pMem -> pNext = NULL;

	return pMem;
}

int enqueue (Queue *pQ, char *pNewString)
{
	QueueNode *pMem = NULL;
	int success = 0;

	pMem = makeNode (pNewString);

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
int dequeue (Queue *pQ, char *pNewString)
{
	QueueNode *pTemp = NULL;
	int success = 0;

	if (pQ->pHead != NULL) // it's not empty --> defensive design
	{
		success = 1;
		strcpy (pNewString, pQ->pHead->pData);
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

\
+#include "LinkedList.h"

Node *makeNode (int newData)
{
	Node *pMem = NULL;

	
	// 1. dynamically allocate memory - malloc ()
	pMem = (Node *) malloc (sizeof (Node)); // heap

	// 2. initialize memory
	pMem -> data = newData;
	pMem -> pNext = NULL;

	return pMem;
}

void insertFront (Node **pHead, int newData)
{
	//will use makeNode ()
	Node *pMem = makeNode (newData);

	// list empty?
	if (*pHead == NULL) // list is empty
	{
		*pHead = pMem;
	}
	else // list is NOT empty
	{
		pMem -> pNext = *pHead;
		*pHead = pMem;
	}

	// not finished with insertFront ()!

}

void printList (Node *pHead)
{
	printf ("-> ");
	while (pHead != NULL)
	{
		printf ("%d -> ", pHead -> data);
		pHead = pHead -> pNext;
	}
	putchar ('\n');
}


void printListRec (Node *pHead)
{
	printf ("-> ");

	if (pHead != NULL)
	{
		printf ("%d ", pHead -> data);
		printListRec (pHead -> pNext);
	}
	else
	{
		putchar ('\n');
	}
}

void makeNodeDriver (void)
{
	Node *pTest = makeNode (42);

	printf ("data: %d pNext: %d\n", pTest->data,
		pTest->pNext);
}

void insertOrder (Node **pHead, int newData)
{
	Node *pMem = NULL, *pPrev = NULL, *pCur = NULL;

	pMem = makeNode (newData);

	if (*pHead == NULL) // list is empty
	{
		*pHead = pMem;
	}
	else // list is NOT empty
	{
		// pPrev = NULL
		pCur = *pHead; // set to front of list

		// ascending order
		// rely on short-circuit evaluation
		while ((pCur != NULL) && ((pCur -> data) < (pMem -> data))) // allows us to walk through list
		{			
			pPrev = pCur;
			pCur = pCur -> pNext;
		}

		if (pPrev != NULL) // handles insert at end or middle some where
		{
			pMem -> pNext = pCur;
			pPrev -> pNext = pMem;
		}
		else // pPrev == NULL ==> inserting at front
		{
			pMem -> pNext = pCur;
			*pHead = pMem;
		}
	}
}

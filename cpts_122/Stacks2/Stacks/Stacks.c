#include "Stacks.h"

StackNode *makeNode (char *pNewString)
{
	StackNode *pMem = NULL;

	pMem = (StackNode *) malloc (sizeof (StackNode));

	// initialize the node
	//pMem -> pString = pNewString; // lead to dangling pointer
	// allocate dynamic memory for the string --> pNewString
	pMem -> pString = (char *) malloc (sizeof (char) * (strlen (pNewString) + 1));
	strcpy (pMem -> pString, pNewString);

	pMem -> pNext = NULL;

	return pMem;
}

// same as insertFront () in linked list
Boolean push (StackNode **pTop, char *pNewString)
{
	StackNode *pMem = NULL;
	Boolean success = FALSE;

	pMem = makeNode (pNewString);

	// if memory was allocated
	if (pMem != NULL)
	{
		success = TRUE;

		pMem -> pNext = *pTop;
		*pTop = pMem;
	}

	return success;
}

void printStack (StackNode *pTop)
{
	while (pTop != NULL)
	{
		printf ("str: %s\n", pTop -> pString);
		pTop = pTop -> pNext;
	}

	putchar ('\n');
}

// precond: stack is not empty!
void pop (StackNode **pTop, char *pStringData)
{
	StackNode *pTemp = NULL;

	pTemp = *pTop; // needed to free the top node

	*pTop = (*pTop)->pNext; // set pTop to the new top node

	strcpy (pStringData, pTemp->pString);

	// In general, we applied two malloc () calls, so
	// need two free () calls
	free (pTemp->pString); // free the portion allocated for the string
	free (pTemp); // free the node
}
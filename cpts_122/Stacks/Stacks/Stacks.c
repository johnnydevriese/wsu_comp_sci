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
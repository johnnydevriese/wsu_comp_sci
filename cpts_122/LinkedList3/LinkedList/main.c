// This program will implement and test a dynamic
// singly linked list. 

// History: 1/26 - Completed insertFront (), printList (),
//                 printListRec (), and insertOrder ()
//          1/23 - Starting implementing insertFront ()
//          1/21 - implemented makeNode (),
//                 makeNodeDriver ()

#include "LinkedList.h"

int main (void)
{
	//Node *pQuiz1 = NULL;
	//makeNodeDriver ();
	Node *pHead = NULL; // list is empty
	// insertFront () is not completed!
	//insertFront (&pHead, -42); 
	//insertFront (&pHead, 10);
	//insertFront (&pHead, 45);
	insertOrder (&pHead, -42);
	insertOrder (&pHead, 45);
	insertOrder (&pHead, 10);
	
	//printf ("Data: %d\n", pHead->data);
	//printList (pHead);
	printListRec (pHead);


	return 0;
}
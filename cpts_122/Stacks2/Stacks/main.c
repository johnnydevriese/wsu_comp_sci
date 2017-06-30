// This illustrates how to implement dynamic stacks.

// History: 2/2 - Implemented push (), pop (), printStack ()
//          1/30 - Implemented makeNode ().

#include "Stacks.h"

int main (void)
{
	StackNode *pTop = NULL; // empty stack
	char str[100];

	push (&pTop, "cpts");
	printStack (pTop);

	push (&pTop, "42");
	printStack (pTop);

	push (&pTop, "EE");
	printStack (pTop);

	push (&pTop, "Seahawks");
	printStack (pTop);

	pop (&pTop, str);
	printf ("Popped data: %s\n", str);
	printStack (pTop);

	return 0;
}
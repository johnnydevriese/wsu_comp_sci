// This example illustrates how to create a dynamic queue.

// History: 2/11 - Completed dequeue (). Did not implement
//                 driver code.
//          2/9 - Implemented enqueue (). Started dequeue ().
//          2/6 - Defined Queue and QueueNode types. Implemented
//                makeNode ().

#include "Queue.h"

int main (void)
{
	char str[10] = "test";
	//QueueNode *q = makeNode (str);
	Queue q = {NULL, NULL}; // empty queue

	enqueue (&q, "test");

	return 0;
}
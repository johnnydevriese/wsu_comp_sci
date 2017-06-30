#define _CRT_SECURE_NO_WARNINGS

#ifndef QUEUE_H
#define QUEUE_H 

#include<stdio.h> 
#include<stdlib.h> //malloc()
#include<string.h> // strlen() 

typedef struct queueNode 
{
	
	char *pData; 
	struct queueNode *pNext; 
}QueueNode; 


typedef struct queueNode
{
	QueueNode *pHead; 
	QueueNode *pTail; 
}Queue; 

QueueNode * makeNode (char *pNewString);

//return int of success whether it was able to add or not. 
//can just give the Queue struct because that's all you would need. 
//Queue needs to be a pointer because you want to edit that information. 
int enqueue ( Queue * pQ, char * pNewString);

//cooperative vs defensive design. 
int dequeue ( Queue * pQ, char * pNewString ); 

//printing the queue recursively. 
void printQueueRec ( Queue pQ); 


#endif

//5 minutes for insertInOrder()

//30% conceptual and 70% programming. 

//reverse a linked list. (common invterview question) 

//make node function would be inside of insertInOrder

//check out dyjkstras shunting yard algorithm. 

//could have used <ctype.h>

// three differences between stacks and queues. 

//at least try the extra credit. 















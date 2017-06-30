#define _CRT_SECURE_NO_WARNINGS

#ifndef QUEUE_H
#define QUEUE_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct queueNode
{
	char *pData;
	struct queueNode *pNext;
} QueueNode;

typedef struct queue
{
	QueueNode *pHead;
	QueueNode *pTail;
} Queue;

QueueNode *makeNode (char *pNewString);
int enqueue (Queue *pQ, char *pNewString);
int dequeue (Queue *pQ, char *pNewString);

#endif
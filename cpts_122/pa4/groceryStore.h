//#deifne CRT_SECURE_NO_WARNINGS 
 

#include<stdio.h> 
#include<stdlib.h> 
#include<time.h> 



typedef struct queueNode
{
     int customerNumber; // Unique identifier; starts at 1; after 24 hours should be reset to 1
     int serviceTime;   // Random time; varies between express and normal lanes; units in minutes
     int totalTime;     // totalTime = serviceTime + sum of serviceTimes of customers in line before this customer; units in minutes
 
     struct queueNode *pNext;
} QueueNode;


typedef struct queue
{
	QueueNode *pHead;
	QueueNode *pTail;
} Queue;



int random(int min_number, int max_number); 

QueueNode *makeNode (char *pNewString);

int enqueue (Queue *pQ, char *pNewString);

int dequeue (Queue *pQ, char *pNewString);


















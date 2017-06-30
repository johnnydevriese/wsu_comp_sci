#define _CRT_SECURE_NO_WARNINGS

#ifndef LINKED_LIST_H
#define LINKED_LIST_H

#include <stdio.h>
#include <stdlib.h> // malloc ()

typedef struct node
{
	int data;
	struct node *pNext; // self-referential
} Node;

// allocates a node dynamically, initializes node
Node *makeNode (int newData);

void insertFront (Node **pHead, int newData); // we link nodes
void printList (Node *pHead); // single start, not modifying list
void printListRec (Node *pHead);
void insertOrder (Node **pHead, int newData);

// tests makeNode () function
void makeNodeDriver (void);

#endif
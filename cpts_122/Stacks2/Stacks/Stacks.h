#define _CRT_SECURE_NO_WARNINGS

#ifndef STACKS_H
#define STACKS_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef enum boolean
{
	FALSE, TRUE
} Boolean;

typedef struct stackNode
{
	char *pString; // char pString[100];
	struct stackNode *pNext;
} StackNode;

StackNode *makeNode (char *pNewString);
Boolean push (StackNode **pTop, char *pNewString);
void printStack (StackNode *pTop);
void pop (StackNode **pTop, char *pStringData);

#endif
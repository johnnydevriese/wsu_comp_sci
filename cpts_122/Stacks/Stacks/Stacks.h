#define _CRT_SECURE_NO_WARNINGS

#ifndef STACKS_H
#define STACKS_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct stackNode
{
	char *pString; // char pString[];
	struct stackNode *pNext;
} StackNode;

StackNode *makeNode (char *pNewString);

#endif
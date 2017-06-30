#include<stdio.h> 
#include<stdlib.h>

#pragma once 
// or it essentially means to only link this header file once. 

#ifndef STACKS_H
#define STACKS_H 

int other(int source, int dest)
{ 
	int other = -1; 
	
	if (source == 0 && dest == 1) 
	{
		other = 2; 
	} 
	
	
	else if(source == 0 && dest == 2)
	{
		
		other = 1;
	} 
	
	else if (source ==1 && dest == 2)
	{ 
		other = 0; 
	} 
	
	else if (source == 1 && source == 0) 
	{ 
		other = 2; 
	}
	else if (source == 2 && source == 0) 
	{ 
		other = 1; 
	}
	else if (source == 2 && source == 1)
	{
		other = 0; 
	} 
	
	
	
	
	return other; 
} 


Boolean move(StackNode **source, StackNode **dest); 



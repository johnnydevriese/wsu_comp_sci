#ifndef TEMPLATES_H
#define TEMPLATES_H


#include<iostream> 

int multiplyInts(int number1, int number2); 

double multiplyDoubles (double n1, double n2); 

template  <class T> 

T multiply (T n1, T n2); 
{
	T result;
	
	result = n1 * n2; 
	
	return result;  
	
}

#endif

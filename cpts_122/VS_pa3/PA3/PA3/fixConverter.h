/*******************************************************************************************
* Programmer: Johnny Minor                                                                     *
* Class: CptS 122, Spring 2015; Lab Section 04                                             *
* Programming Assignment: Programming Assignment 3                                                    *
* Date: February 11th, 2015                                                                          *
* Description: This program implements a stack to go from infix notation to postfix notation. 
* This is an implimentation of Exercise 12.12 and 12.13 in Deitel, Deitel "C How to Code" 7th edition  
* I've used the books exact function prototypes to conform to the rules of this project... 
*   
* 
* NOTE: I'm not sure what is wrong with this program right now. When I try to run it in VS it enters debugging 
* and I can't figure out what it's complaining about. Alas, I found it has a seg fault but I'm not sure why/where/how... 
*  
*   *
*******************************************************************************************/


#define _CRT_SECURE_NO_WARNINGS


#include<stdio.h> 
#include<stdlib.h>
#include<string.h>  
//#include<conio.h> // isdigit() (there is no isdigit() in GNU/Linux so I had to alter the code. 
#include<ctype.h>	
#include<math.h> //pow()


//as described in the book the struct is supposd to be define as:

typedef struct stackNode {
	char data; 
	struct stackNode *nextPtr; 
};

//*******NOTE: D&D typdefs these which is a different style than what we use in-class. ******
typedef struct stackNode StackNode; 
typedef StackNode *StackNodePtr; 



//also should consist of these functions. 

//convert the infix expression to postfix notation. 
void convertToPostfix( char infix[], char postfix[]); 


//determine whether c is an operator
int isOperator(char c);

//Determine whether the precedence of operator1 is less than, equal to, or greater than the precedence of operator2. 
//The function will return -1 if less, 0 if equal, and 1 if greater than. 
int precedence( char operator1, char operator2 );
 
 
 //Push a value on the stack 
void push( StackNodePtr * topPtr, char value);

//Pop a value off of the stack 
char pop (StackNodePtr * topPtr);

//Return the top value fo the stack without popping the stack. 
char stackTop( StackNodePtr topPtr); 

//determine whether the stack is empty.
int isEmpty(StackNodePtr topPtr); 
 
// Print the stack 
void printStack(StackNodePtr topPtr);

//*********** from problem 12.13 it should also have these six functions. **********

int evaluatePostfixExpression( char * expr); 

//Evaluate the expression op1 operator op2. 
int calculate(int op1, int op2, char op_char); 

//***there are others but they are redundant with functions found in 12.12
// they are: push(), pop(), isEmpty() and printstack(). 



/*
//exponentiation by squaring

int ipow(int base, int exp)
{
	int result = 1; 
	while(exp)
	{
		if( exp & 1)
			result *= base; 
		exp >>= 1; 
		base *= base; 
	}

	return result; 
}

*/








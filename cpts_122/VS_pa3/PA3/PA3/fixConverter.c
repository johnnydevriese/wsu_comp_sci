#include"fixConverter.h"




void convertToPostfix(char infix[],char postfix[])
{
    StackNodePtr s;
    char x,token;
    int i,j;    //i-index of infix,j-index of postfix
    //init(&s);
    j=0;

	//while the infix array is not at the null character
    for(i=0; infix[i] != '\0'; i++)
    {
		//set the token to the current char for easier comparisons 
        token = infix[i];
        
        //check it token is a number
        if(isalnum(token))
        
			//increment postfix and place the token in that position
            postfix[j++]=token;
         
        //check if token is a (    
        else if( token == '(' )
        {		//if it is push it to the stack
               push(&s,'(');
         }

		//check if token is )
        else if( token==')' )
        {
            
				//pop the stack and compare make sure it is NOT ( 
                while( (x = pop(&s) ) !='(' )
                {
					//increment postfix and set it equal to the popped value. 
                      postfix[j++] = x;
                 }     

		}

              else
                {
					//while( precedence(token) <= precedence(stackTop(&s)) && ! isEmpty(&s) )

					//while token has less precedence than stackTop(s) is will return -1. 
					//Making the condition evaluate as true. 
					while(precedence(token,stackTop(s) ) == -1 && ! isEmpty(s)  )  
                    {
                        x = pop(&s);
                        
                        postfix[j++] = x;
                    }
                    
                    push(&s,token);
                }
	}
    


}


//this code has been taken from the book D&D-C How to Program. 

void push( StackNodePtr * topPtr, char value)
{
	StackNodePtr newPtr; // pointer to new node 
	
	//allocating dynamic memory 
	newPtr = (StackNode *) malloc( sizeof( StackNode) ); 
	
	//insert the node at the stack top
	if ( newPtr != NULL)
	{
		newPtr->data = value; 
		newPtr->nextPtr = *topPtr; 
		*topPtr = newPtr; 
	}//end if 
	
	else
	{
		printf( "%s not inserted. No memory available. \n", value); 
	}//end else 
	
} //end of push function. 


//this code has been taken from the book D&D-C How to Program. 
char pop (StackNodePtr * topPtr)
{
	StackNodePtr tempPtr; //temporary node pointer 
	char popValue; //node char 
	
	tempPtr = *topPtr; 
	//popValue = ( *topPtr ) -> data; 
	popValue =  (*topPtr )-> data; 
	
	*topPtr = ( *topPtr)->nextPtr;
	free( tempPtr); 
	return popValue; 
}


//this was also taken directly from D&D- C How to Program. 

void printStack(StackNodePtr topPtr)
{
	
	//if the stack is empty 
	if( topPtr == NULL)
	{
		puts( "The stack is empty. \n"); 
	}//end if 
	else
	{
		puts( "The stack is: "); 
		
		//while not the end of the stack 
		while( topPtr != NULL)
		{
			printf( "%s --> ", topPtr->data); 
			topPtr = topPtr->nextPtr; 
		}//end while.. 
		
		
	puts( "NULL \n"); 
	}//end else
}//end function isEmpty 



//will return 1 if the stack is empty, 0 otherwise. 
int isEmpty(StackNodePtr topPtr)
{
	return topPtr == NULL; 
	
}


//Determine whether the precedence of operator1 is less than, equal to, or greater than the precedence of operator2. 
//The function will return -1 if less, 0 if equal, and 1 if greater than. 		
int precedence( char operator1, char operator2 )
{
	//Operator == ASCII 
	// % == 37
	// + == 43
	//- ==  45
	//* == 42
	// / == 47
	// ^ == 94
	// ( == 40
	// ) == 41
	
	//the order of operations is: 
	//Parenthesis, exponent, multiply, divide, add, subtract. 
	// 40/41 -> 94 -> 42 -> 47 -> 43 -> 45
	
	
	//just cast the char's as int's and then compare the ASCII values. 
	//otherwise I think you would have to use strcmp() everytime
	int op_value1 = 0; 
	int op_value2 = 0; 
	int operations = 10000; //want to intialize to a value outside the range that it would return. 
	
	op_value1 = operator1; 
	op_value2 = operator2; 
	
	
	if(op_value1 == op_value2)
	{
		operations = 0; 
	}
	//if op_value1 is either ( or ) then it takes precedence as long as op_value2 is not also ( or ) 
	else if(op_value1 == 40 || op_value1 == 41 && op_value2 != 40 || op_value2 != 41)
	{
		operations = 1;
	}
	//can't say op_value1 < op_value2 because there are other cases when this would be wrong. 
	else if(op_value1 == 94 && op_value2 < op_value1) 
	{
		operations = 1; 
	}
	else if( op_value1 == 42 && op_value2 > op_value1) //all other values are greater than 42. 
	{
		operations = 1; 
	}
	else if( op_value1 == 47 && op_value2 <  op_value1) //both 43 & 45 are less than 47
	{
		operations = 1; 
	}
	else if( op_value1 == 43 && op_value2 > op_value1) // 45 > 43 and is lower in OOP
	{
			operations = 1; 
	}
	else{
		operations = -1; //if you get here you know that they're not equal AND that op_value1 == 45. 
		//So you know that op_value2 must be higher in order. 
	}
		
	
	return operations; 
}


//this function will take in a postfix expression and evaluate it. 
//precondition: it MUST be in postfix notation form otherwise it will be horribly wrong-er.
int evaluatePostfixExpression( char * expr)
{
	StackNodePtr  s = NULL; 
	int i = 0; 
	int x = 0; 
	int y = 0; 
	int value = 0; 


	while( expr != '\0')
	{
		// isdigit(int c) checks if the passed char is a decimal digit character"
		// function returns nonzero value if c is a digit, else 0) 
		//So this means if expr[i] is not equal to zero then the digit IS good and should enter the if statement. 
		if( isOperator( expr[i] ) != 0) 
		{
			push(&s, expr[i]);
		}

		//use the isOperator function to check if the char is an operator 
		//if it is you pop the two digits afterwards and then store then in x & y 
		//so that way you can compute the operation. 
		else if( isOperator( expr[i] )  ==  1 ) 
		{
			//pop two elements of the stack into variables x & y 
			x = pop(&s); 
			y = pop(&s); 
			
			value = calculate(x, y, expr[i]);
			
		}
	
	}
	
	
	value = pop(&s);
	 
	
	return value ; 
}



int calculate(int op1, int op2, char op_char)
{
	double op1_dub = 0; 
	double op2_dub = 0; 


	int value = 0; 
	
	if(op_char == '+')
	{
		value = op1 + op2; 
	}
	else if(op_char == '-')
	{
		value = op1 - op2;
	}
	else if(op_char == '*')
	{
		value = op1 * op2; 
	}
	else if(op_char == '/')
	{
		value = op1 / op2; 
	}
	else if(op_char == '%')
	{
		value = op1 % op2; 
	}
	else if(op_char == '^')
	{
		//casting op1 and op2 because otherwise pow() complains
		//oh and it's easier than exponentiating by squaring... 
		op1_dub = op1 ;
		op2_dub = op2 ;
		
		value = pow(op1_dub, op2_dub);
	
	}

	
	
	return value; 
}


//this function checks if the character is one of the mathematical operators that we're looking for. 
//seems pretty inefficient but it's the only solution I've got... 
int isOperator(char c)
{
	int flag = 0; 

	if(c == '+' || c ==  '-' || c == '*' || c == '/' || c == '^' || c == '%')
	{
		flag = 1; 
	}

	return flag; 

}


char stackTop( StackNodePtr topPtr)
{

	return topPtr->data;

}










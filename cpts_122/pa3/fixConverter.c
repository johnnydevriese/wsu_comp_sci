#include"fixConverter.h"




void convertToPostfix(char infix[],char postfix[])
{
    StackNode s;
    char x,token;
    int i,j;    //i-index of infix,j-index of postfix
    //init(&s);
    j=0;

    for(i=0;infix[i]!='\0';i++)
    {
		
        token = infix[i];
        
        if(isalnum(token))
        
            postfix[j++]=token;
            
        else if( token=='(' )
        {
               push(&s,'(');
         }      
        else if( token==')' )
        {
            
                while( (x=pop(&s)) !='(' )
                {
                      postfix[j++]=x;
                 }     
                else
                {
                    while( precedence(token) <= precedence(stackTop(&s)) && ! isEmpty(&s) )
                    {
                        x=pop(&s);
                        postfix[j++]=x;
                    }
                    
                    push(&s,token);
                }
		}
    }


}







void push( StackNodePtr * topPtr, char value)
{
	StackNodePtr newPtr; // pointer to new node 
	
	newPtr = malloc( sizeof( StackNode) ); 
	
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


char pop (StackNodePtr * topPtr)
{
	StackNodePtr tempPtr; //temporary node pointer 
	char popValue; //node char 
	
	tempPtr = *topPtr; 
	popValue = ( *topPtr) -> data; 
	
	*topPtr = ( *topPtr)->nextPtr;
	free( tempPtr); 
	return popValue; 
}


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



int evaluatePostfixExpression( char * expr)
{
	while( expr != '\0')
	{
		if( expr == digit)
		{
			push(&s, expr[]);
		}
		else if( //check if an operator ) 
		{
			//pop two elements of the stack into variables x & y 
			x = pop(&s); 
			y = pop(&s); 
			
			value = calculate(x, y, opertator);
			
		}
	
	}
	
	
	value = pop(&s);
	 
	
	return value ; 
}



int calculate(int op1, int op2, char operator)
{
	int value = 0; 
	
	if(operator == '+')
	{
		value = op1 + op2; 
	}
	else if(operator == '-')
	{
		value = op1 - op2;
	}
	else if(operator == '*')
	{
		value = op1 * op2; 
	}
	else if(operator == '/')
	{
		value = op1 / op2; 
	}
	else if(operator == '%')
	{
		value = op1 % op2; 
	}
	
	
	
	return value; 
}






















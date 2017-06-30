#include"fixConverter.h" 


int main(void)
{
	
	StackNodePtr stackPtr = NULL; //point to stack top 
	
	char * infix = NULL; 
	char * postfix = NULL; 
	char * expr = NULL; 	
	
	
	//examples of implimentation as used in the book. 
	push(&stackPtr, "hello"); 
	
	printf("The popped value is %s", pop(&stackPtr); 
	
	printStack( stackPtr); 
	
	//**end book examples. 
	
	printf("Please enter a mathematical expression( i.e. 9 * 5 + 2 ): \n");
	scanf("%s", infix);  
	
	
	
	convertToPostfix(infix, postfix); 
	
	printf("Please enter a postfix mathematical expression( i.e. 3 7 + 4 5 - / ): \n");
	scanf("%s", expr); 
	
	
	evaluatePostfixExpression(expr);
	
	
	
	
	
	
	
	
	
	
	
	return 0; 
}
	
	
	

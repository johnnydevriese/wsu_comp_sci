//lecture notes on NOvember 12 2014. Topic is recursion. 



#include<stdio.h>

int main(void) 
{

	unsigned int num1 = 5, num2 = 6, add = 0; 



	int ii = 0 ; 

	for(ii = 0 ; ii< num2; ii++){

		add += num1; 

	}


	printf("This is the sum %d \n", add); 


	//multiply recursive function. 
	/* 
	unisgned int multiply_rec(unsigned int num2, unisigned int num2) 
	{

	int sum = 0 ; 

	//bases case(s) 
	if(num2 == 0) 
	{
	sum = 0; 
	}
	else if(num2 == 1) {
	sum = num1; 
	}
	else{
	sum = num1 + multiply_rec(num1, num2-1) ; 
	}

	return sum ; 
	}
	*/

	return 0 ; 
}
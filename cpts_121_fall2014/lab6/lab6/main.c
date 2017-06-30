#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<time.h>



int main (void) {

	FILE *input_file = NULL; 
	FILE *output_file = NULL; 

	int guess = 0, random_num = 0 ;

	int ii = 0, num1 = 0, isprime = 0, result = 1, fib1 = 0, fib2 = 1, fib_count = 3, 
		sum = 0;
	double num = 0 , temp = 0 ;

	


	input_file = fopen("numbers.dat", "r"); 
	output_file = fopen("output.dat", "w"); 

	//attempt at prime number check. 
	/*
	while( ! feof)
	{
		fscanf(input_file, "%d", &num); 
	
		for(ii = 2 ; ii < ceil(sqrt(num)); ii++) {

			num1 = num ; 

			temp = num1 % ii; 

			if(temp == 0) 
			{isprime = 0 ;}



		}

	}
	*/


	//factorial function 
	/*printf("how many terms would you like in factorial: \n"); 
	scanf("%d", &num1) ; 

	for(ii=0;ii<num1;ii++)
	{
		result *= (num1 - 1) ; // *= is multiply by and then reassign C *= A => C = C * A 
	}

	printf("This is the result: %d \n", result);  
	*/


	//Fibonacci Sequence. 
	/*
	for(ii = 0; ii<fib_count ; ii++)
	{
		

		fib1 = fib1 + 1  ;
		printf("This is fib1: %d \n", fib1); 
		fib2 = fib2 + 1  ;
		printf("This is fib2: %d \n", fib2); 

		sum += fib1 + fib2 ;

		printf("This is the sum: %d \n", sum); 
	}


	printf("This is the sum: %d \n", sum) ; 
	*/


	//Guessing game. 

	srand((unsigned int) time(NULL));

	random_num = rand() %100 + 1;

	printf("This is the random num: %d \n", random_num); 

	//printf("Guess what the number is: \n");
	//scanf("%d", &guess); 

	while(guess != random_num )
	{
		printf("Guess what the number is: \n");
		scanf("%d", &guess); 

		if( random_num < guess)
		{
			printf("Your guess is high.");
		}

		else if( random_num > guess)
		{
			printf("your guess is low."); 
		}

	}

	printf("You guess correctly! \n"); 
	printf("The random number was: %d \n", random_num); 

		

	return 0; 
}
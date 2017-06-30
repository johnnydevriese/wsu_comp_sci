#include<stdio.h>
#include"arrays.h"

int main (void){

	int ii = 0 ; 
	double sum = 0, average = 0 ; 

	//Recall: C is zero based indexing. 
	int numbers[10] = {0} ;


	//parallel arrays. 
	int ids[100] = {0} ; 
	double gpas[100] = {0.0} ; 

	/*

	for(ii = 0; ii<10; ii++)
	{

	}


	//creating for loop to add all of the values in numbers[] together. 
	while( ii < 10)
	{

		sum += numbers[ii++] ;
		//ii++; 
	}

	printf("sum: %d \n", sum ) ; 

	*/

	for( ii = 0; ii < 3; ii++)
	{
		printf("Enter id and gpa: "); 
		scanf("%d%f", &ids[ii], &gpas[ii] ); 
	}

	for(ii = 0; ii < 3; ii++)
	{

		sum += gpas[ii] ; 

	}

	average = sum / ii  ; //because ii has been incremented within the for loop! 


	return 0 ; 
}
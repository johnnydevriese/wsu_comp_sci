#include<stdio.h>
#include"charges.h"

int main (void){

	int hours = 0 ; 
	double average = 0 ; 
	double cost = 0 ; 
	

	printf("Enter the number of hours which you used: "); 
	scanf("%d", &hours) ; 

	charges( hours, &average, &cost) ; 

	printf("This is the cost: %lf \n" , cost) ; 


	return 0 ; 
}
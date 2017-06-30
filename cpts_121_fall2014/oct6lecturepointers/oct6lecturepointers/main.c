#include<stdio.h>
#include"pointers.h"




int main (void){


	int num = 53, den = 3, rem = 0, result = 0; 

	printf("before divide: rem %d res %d \n", rem, result ) ; 

	divide(num, den, &result, &rem) ;

	printf("before divide: rem %d res %d \n", rem, result ) ; 

	return 0 ; 
}
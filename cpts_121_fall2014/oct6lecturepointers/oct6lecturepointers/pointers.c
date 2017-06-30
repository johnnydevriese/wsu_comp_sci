#include<stdio.h>
#include"pointers.h"



void divide(int numerator, int denominator, int *result_ptr, int *remainder_ptr ) {
	//stub 

	//"*result_ptr" will DEREFERENCE the pointer. 

	*result_ptr = numerator / denominator ;
	*remainder_ptr = numerator % denominator ; 


	return ; 
}

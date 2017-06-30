#include<stdio.h> 
#include<math.h>



void charges(int hours, double *average, double *cost){

	//in the function you must dereferene the pointer to access the value it contains. 
	//so after you find the cost 
	int ii = 0; 

	hours = hours - (int)10 ;
	
	for( ii = 0 ; ii <= hours ; ii++)
	{
		*cost = 1.99 * ii ;
	}

	*cost = *cost + (double)7.99 ;
	
	//printf("This is the cost: %lf \n", *cost);  


	return ;
}

void round_money(double *roundedcost) {


	//have to dereference the pointer to change the value oit points to after you adjust the number. 
	//*foundedcost = foundcost ; 

	return ;
}


void revenue(double *R, int t){

	//R = 203.625 * pow(1.071, t) ; 
}

void predict(){

	//This would be solved the easiest with an iterative solution. 
	int ii = 0 ; 
	double R = 0 ; 

	if ( R < 10000000) 
	{

		R = 203.625 * pow(1.071, t) ; 

		ii++ ;
	}




	return ; 
}

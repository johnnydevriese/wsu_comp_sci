#include<stdio.h>
#include"taxbracket.h"
#include<math.h>

double read_double(FILE *infile){

	double d1 = 0; 

	fscanf(infile, "%lf", &d1); 

	return d1 ; 
}

char tax_bracket(double sum){

	char tax_char = '\0' ;

	if(sum < 150000){ tax_char = 'l'; }

	else if(sum >= 15000 && sum <= 200000 ){ tax_char = 'm'; }

	else if(sum > 200000){ tax_char = 'h' ;}
	

	return tax_char ; 
}
#include<stdio.h>
#include<math.h>
#include"taxbracket.h"

int main (void){

	FILE *input_file = NULL; 
	FILE *output_file = NULL; 

	int ii = 0; 

	double sum = 0 , quarter = 0; 
	char bracket = '/0' ;

	input_file = fopen("salaries.txt", "r"); 


	while(!feof(input_file)){

		fscanf(input_file, "%lf", &sum); 
		sum += sum ;
 
	}


	bracket = tax_bracket(sum);

	printf("This is your tax bracket %c \n", bracket); 

	return 0 ; 
}
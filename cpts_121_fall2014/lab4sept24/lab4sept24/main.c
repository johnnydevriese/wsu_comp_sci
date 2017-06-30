#include<stdio.h>
#include<math.h>
#include"calories.h"


int main (void){
	//defining the input and output files and setting them to null  
	FILE *input_file = NULL; 
	FILE *output_file = NULL; 

	//decleration of variables. 
	int age_m = 0, age_f = 0 ; 

	char sexm = '/0' , sexf = '/0' ; 

	double weight_m = 0, weight_f = 0 ; 

	double height_m = 0, height_f = 0 ; 

	double BMR_m = 0, BMR_f = 0; 

	int activity_m = 0;
	int activity_f = 0; 

	//opening the input and output files, and setting them to "r"ead and "w"rite. 
	input_file = fopen("input.dat", "r"); 
	output_file = fopen("output.dat", "w"); 

	//reading the data in from the file and assigning them proper variables. 
	age_m = read_integer(input_file); 
	sexm = read_letter(input_file);
	weight_m = read_double(input_file); 
	height_m = read_double(input_file); 

	age_f = read_integer(input_file); 
	sexf = read_letter(input_file);
	weight_f = read_double(input_file); 
	height_f = read_double(input_file); 

	//calling function to compute the BMR 

	BMR_m = metabolic_rate(age_m, sexm, weight_m, height_m); 

	BMR_f = metabolic_rate(age_f, sexf, weight_f, height_f); 

	BMR_m = activity(1, BMR_m); 

	BMR_f = activity(1, BMR_f); 



	fclose(input_file); 
	fclose(output_file);

	return (0); 
}
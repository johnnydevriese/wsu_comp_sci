/*******************************************************************************************
* Programmer: Johnny Minor                                                                      *
* Class: CptS 121, Fall 2014; Lab Section 08 (TA: Keegan Caruso)                                                 *
* Programming Assignment: PA3                                                  *
* Date: September 24, 2014                                                                       *
* Description: This program will calculate the sum of GPA's, the sum of class standings,
and the sum of ages as defined in the input.dat file.*
*******************************************************************************************/



#include<stdio.h>
#include<math.h>
#include"gpa.h"


int main (void){

	//definting the input_file address and setting it to NULL 
	FILE *input_file = NULL; 
	FILE *output_file = NULL; 

	//declaration of variables here.  

	int student_id1 = 0, student_id2 = 0, student_id3 = 0, student_id4 = 0, student_id5 =0 ; 

	double gpa1 = 0, gpa2 = 0, gpa3 = 0, gpa4 = 0, gpa5 = 0; 

	int cstanding1 = 0, cstanding2 = 0, cstanding3 = 0, cstanding4 = 0, cstanding5 = 0; 

	double age1 = 0, age2 = 0, age3 = 0, age4 = 0, age5 = 0;

	double gpa_sum = 0, cstanding_sum = 0,	age_sum = 0; 

	double gpa_mean = 0, cstanding_mean = 0, age_mean = 0; 

	double gpa_dev1 = 0, gpa_dev2 = 0, gpa_dev3 = 0, gpa_dev4 = 0, gpa_dev5 = 0; 
	
	double gpa_variance = 0, gpa_std_dev = 0, min_gpa = 0, max_gpa = 0; 

	double system_num = 5; 

	//opening the input_file for "r"ead and the output_file to "w"rite. 
	input_file = fopen("input.dat","r"); 
	output_file = fopen("output.dat","w"); 

	//writing student_1's information to the variables associated with it. 
	student_id1 = read_integer(input_file); 
	
	gpa1 = read_double(input_file); 
	
	cstanding1 = read_integer(input_file); 

	age1 = read_double(input_file);

	///writing student_3's information to the variables associated with it. 
	student_id2 = read_integer(input_file); 

	gpa2 = read_double(input_file); 

	cstanding2 = read_integer(input_file); 

	age2 = read_double(input_file);


	///writing student_3's information to the variables associated with it. 
	student_id3 = read_integer(input_file); 

	gpa3 = read_double(input_file); 

	cstanding3 = read_integer(input_file); 

	age3 = read_double(input_file);

	///writing student_4's information to the variables associated with it. 
	student_id4 = read_integer(input_file); 

	gpa4 = read_double(input_file); 

	cstanding4 = read_integer(input_file); 

	age4 = read_double(input_file);

	///writing student_5's information to the variables associated with it. 
	student_id5 = read_integer(input_file); 

	gpa5 = read_double(input_file); 

	cstanding5 = read_integer(input_file); 

	age5 = read_double(input_file);

	//calculate sum of gpa, sum and ages

	gpa_sum = calculate_sum(gpa1, gpa2, gpa3, gpa4, gpa5); 

	cstanding_sum = calculate_sum(cstanding1, cstanding2, cstanding3, cstanding4, cstanding5); 

	age_sum = calculate_sum(age1, age2, age3, age4, age5); 

	//calculating the mean of gpa, class standing, and age. 
	//and writing results to output_file.dat

	gpa_mean = calculate_mean(gpa_sum, system_num) ; 
	print_double(output_file, gpa_mean); 

	cstanding_mean = calculate_mean(cstanding_sum, system_num); 
	print_double(output_file, cstanding_mean); 

	age_mean = calculate_mean(age_sum, system_num); 
	print_double(output_file, age_mean); 

	//calculating deviation of gpa, variance of gpa, and standard deviation of gpa. 
	gpa_dev1 = calculate_deviation(gpa1, gpa_mean); 

	gpa_dev2 = calculate_deviation(gpa2, gpa_mean); 

	gpa_dev3 = calculate_deviation(gpa3, gpa_mean); 

	gpa_dev4 = calculate_deviation(gpa4, gpa_mean); 

	gpa_dev5 = calculate_deviation(gpa5, gpa_mean); 

	printf("this is the deviation in gpa: %lf \n", gpa_dev5); 

	//calculating the variance of the gpa. 
	gpa_variance = calculate_variance(gpa_dev1, gpa_dev2, gpa_dev3, gpa_dev4, gpa_dev5, system_num); 

	//calculating the standard deviation of the gpa. 
	gpa_std_dev = calculate_standard_deviation(gpa_variance);
	print_double(output_file, gpa_std_dev); 

	//determining the MIN GPA of the set. 
	min_gpa = find_min(gpa1, gpa2, gpa3, gpa4, gpa5); 
	print_double(output_file, min_gpa); 

	//determining the MAX GPA of the set. 
	max_gpa = find_max(gpa1, gpa2, gpa3, gpa4, gpa5); 
	print_double(output_file, max_gpa); 


	

	fclose(input_file); 
	fclose(output_file); 

	return(0); 
}
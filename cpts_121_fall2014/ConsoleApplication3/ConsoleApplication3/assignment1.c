/*******************************************************************************************
* Programmer: Johnny Minor                                                                        *
* Class: CptS 121, Fall 2014; Lab Section 08                                               *
* Programming Assignment: Assignment #1 Equation Evaluator                                                     *
* Date: September 5, 2014                                                                       *
* Description: This program will take user input for numerous (seven) functions and output the answer       *
*******************************************************************************************/

#include<stdio.h>
#include<math.h> 
#define PI 3.14159265358979323846

int calculate_series_resistance (int r1, int r2, int r3) ; 

double calculate_total_sales_tax (double sales_tax_rate, double item_cost);

double calculate_volume_pyramid (double l, double w, double h);

double calculate_parallel_resistance (int r1, int r2, int r3);

char perform_character_encoding (char plaintext_character, int shift_key);

double calculate_distance_between_2pts (double x1, double x2, double y1, double y2);

double calculate_general_equation (int a, double x, double y, double z);


int main(void){

	
	//total series resistance variables 
	int R1 = 0;
	int R2 = 0; 
	int R3 = 0; 
	float series_resistance = 0 ;

	//sales tax variables 

	double sales_tax_rate = 1.06; 
	double item_cost = 0; 
	double total_sales_tax = 0;

	//variables for right rectangular pyramid 

	double l = 0; 
	double w = 0; 
	double h = 0; 
	double volume_pyramid = 0;

	//total parallel resistance variables

	//int R1 = 0; 
	//int R2 = 0; 
	//int R3 = 0; 
	float parallel_resistance = 0; 
	
	//character encoding variables 

	char letter = '\0'; 
	int number = 0;
	char encoded_character2 = '\0'; 
	int letter_num = 0; 
	int encoded_character1 = '\0' ;

	//distance between two points 

	double x1 = 0;
	double x2 = 0;
	double y1 = 0;
	double y2 = 0;
	double distance = 0; 

	//general equation variables 

	double y = 0; 
	double x = 0; 
	double z = 0; 
	int a = 0; 


	//******** begin section of functions ******** 

	//series resistance 

	printf("Please enter the value of 3 resistors <all integers> connected in series:"); 
	scanf("%d %d %d", &R1, &R2, &R3);

	calculate_series_resistance(R1, R2, R3); 

	//sales tax calculator 
	
	printf("How much was your item?"); 
	scanf("%lf", &item_cost);

	calculate_total_sales_tax(sales_tax_rate, item_cost); 
		
	
	//volume of a right rectangular pyramid 


	printf("define the length, width and height of this right rectangular pyramid:");
	scanf("%lf %lf %lf", &l, &w, &h);

	calculate_volume_pyramid(l, w, h); 


	//total parallel resistance

	printf("Enter the values of this parallel restance (three):");
	scanf("%d %d %d", &R1, &R2, &R3); 

	calculate_parallel_resistance(R1, R2, R3); 


	//character encoding 


	printf ("Enter number: ");
	scanf ("%d", &number); // the enter character will carry
	                       // down to the next scanf ()!


	printf ("Enter character: ");
	scanf (" %c", &letter); // space between " and %,
	                        // allows whitespace characters
	                        // to be ignored.

	perform_character_encoding(letter, number); 


	//Distance between two points

	printf("Please input two points as an order pair e.g. x1  y1 x2 y2: ");
	scanf("%f %f %f %f", &x1, &y1, &x2, &y2);


	//General equation
	

	printf("Please enter the values for y, z, x and a(integer) in the equation y = y / (3/17) - z + x / (a % 2) + PI:" );
	scanf("%f %f %f %d", &x, &y, &z, &a); 


	return(0); 
}


int calculate_series_resistance (int R1, int R2, int R3){

	int series_resistance = 0; 

	series_resistance = R1 + R2 + R3; 

	printf("Total series resistance: series_resistance = R1 + R2 + R3 = %f \n ", series_resistance); 

	return(0); 

}

double calculate_total_sales_tax (double sales_tax_rate, double item_cost){

	double total_sales_tax = 0; 

	total_sales_tax = (sales_tax_rate) * (item_cost); 

	printf("The total sale price of the item is: %lf \n" , total_sales_tax );

	return(0); 
}

double calculate_volume_pyramid (double l, double w, double h){

	double volume_pyramid = 0; 

	volume_pyramid = (l * w * h) / (double)3 ; 

	printf("The volume of this pyramid is: %lf \n" , volume_pyramid );

	return (0); 
}

double calculate_parallel_resistance (int r1, int r2, int r3){

	double parallel_resistance = 0;

	parallel_resistance = (double)1 / ( ((double)1 / (r1)) +((double)1 / (r2)) + ((double)1 / r3)) ; 

	printf("This is the value of your parallel resistance: %lf \n", parallel_resistance); 

	return(0); 
}

char perform_character_encoding (char plaintext_character, int shift_key){



	char encoded_character2 = '\0'; 
	int letter_num = 0; 
	int encoded_character1 = '\0' ;



	letter_num = plaintext_character ;

	encoded_character1 = (letter_num - 97) + 65 - shift_key ;  

	encoded_character2 = encoded_character1 ; 

	printf("This is the encoded character: %c \n", encoded_character2); 

	return(0); 
}

double calculate_distance_between_2pts (double x1, double x2, double y1, double y2){\

	double distance = 0 ; 

	distance = pow((x1 - x2),2) + pow((y1 - y2),2); 

	distance = sqrt(distance); 

	printf("this is the distance between the two points which you have chosen: %lf \n", distance);

	return(0); 
}

double calculate_general_equation (int a, double x, double y, double z){

	double f = 0 ; 

	f = y / ((float)3 / (float)17) - z + x / (a % 2) + PI ;

	printf("This is the result of the function with specified numbers: %.2lf \n", f);

	return(0); 
}
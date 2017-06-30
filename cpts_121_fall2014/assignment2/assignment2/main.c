/*******************************************************************************************
* Programmer: Johnny Minor                                                                        *
* Class: CptS 121, Fall 2014; Lab Section 08                                               *
* Programming Assignment: Assignment #1 Equation Evaluator                                                     *
* Date: September 5, 2014                                                                       *
* Description: This program will take user input for numerous (seven) functions and output the answer       *
*******************************************************************************************/

#include<stdio.h>
#include<math.h> 
#include"equations.h"
#define PI 3.14159265358979323846




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
	//double distance = 0; 

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
	scanf("%lf %lf %lf %lf", &x1, &y1, &x2, &y2);

	calculate_distance_between_2pts (x1, x2, y1, y2);

	//General equation

	printf("Please enter the values for y, z, x and a(integer) in the equation y = y / (3/17) - z + x / (a % 2) + PI:" );
	scanf("%lf %lf %lf %d", &x, &y, &z, &a); 

	calculate_general_equation(a, x, y, z);

	return(0); 
}


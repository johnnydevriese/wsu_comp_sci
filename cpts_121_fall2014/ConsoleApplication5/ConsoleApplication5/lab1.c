/*******************************************************************************************
* Programmer: Johnny Minor                                                                      *
* Class: CptS 121, Fall 2014; Lab Section 08                                                *
* Programming Assignment: Lab1Task1                                                     *
* Date: September 1, 2014                                                                       *
* Description: This program prints out a simple "hello world" message.      *
*******************************************************************************************/


#include <stdio.h>
#include <math.h>
#define PI 3.14159

int main(void){

	//printf("Hello World! \n"); 
	
	int number1_int = 0;
	int number2_int = 0;
	int number1_float = 0; 
	int number2_float = 0; 

	
	int add = 0; 
	float subtract = 0; 
	int multiply = 0; 
	int divide_int = 0;
	float divide_float = 0; 


	printf("Please define two integers and two floating point numbers:"); 
	scanf( "%d %d %f %f", &number1_int, &number2_int, &number1_float, &number2_float); 
	
	/*
	add = number1_int + number2_int ; 

	printf("this is the number1_int + number2_int: %d \n", add);  



	//*****subtract 
	/*
	subtract = number1_float - number2_float ; 

	printf(" this is number1_float - number2_float: %f \n ", subtract); 

	//*****multiply 

	multiply = number1_int * number1_float ; 

	printf( "This is number1_int X(times) number2_float: %d", multiply); 

	//******integer division 

	divide_int = number1_int / number2_int ; 

	divide_float = number1_int / number2_int ; 

	printf("This is the number1_int divided by number2_int: %d \n", divide_int); 

	printf("This is the number1_int divided by number2_int: %f \n", divide_float); 

	//integer and float division 
	
	divide_int = number1_int / number2_float ; 

	divide_float = number1_int / number2_float ; 

	printf("This is the number1_int divided by number2_int: %d \n", divide_int); 

	printf("This is the number1_int divided by number2_int: %f \n", divide_float); 
	*/
	//***** how to mod stuff?? 

	//number1_float % number2_float == 0 ; 

	//double x = 0;
	
	//x = fmod(4, 5); 

	//float fmod(number1_float , number2_float); 

	//determine if even or odd? 

	//float fmod(number1_int,2) == 0 ; 

	//float fmod(number2_int,2) == 0 ; 
	
	/*
	///***** explicit cast division 

	divide_float = (float) number1_int / number2_int ; 

	printf("This is number1_int divided by number2_int: %f \n", divide_float); 

	//*****part B (Ohm's Law) 
	/*
	int voltage = 0 ; 
	int current = 0 ; 
	int resistance = 0; 

	printf("Please enter integers for current and resistance:") ;
	
	scanf("%d %d", &current, &resistance);

	voltage = current * resistance ;

	printf("this is the voltage of the system: %d \n", voltage); 
	
	//part C (Joules law) 
	
	int power = 0 ; 
	int voltage = 0 ; 
	int resistance_new = 0; 

	printf("Please enter integers for voltage and resistance: ") ; 

	scanf("%d%d", &voltage, &resistance_new); 

	power = (voltage * voltage) / resistance_new ; 

	printf("This is the power of the system: %d \n", power); 
	
	//Part D ( third order polynomial) 
	
	int x = 0 ; 
	int y = 0 ; 
	int a = 0 ; 
	int b = 0 ; 
	int c = 0 ; 
	int d = 0 ; 

	printf("Please input integers for  x, a, b, c, d in equation: y = 3 * ax3 + (1/4) * bx2 + 10 * cx + (-5) * d : "); 
	scanf("%d %d %d %d", &x, &a, &a, &b, &c, &d) ; 

	y =  (double)3 * a * x * (double)3 + ((double)1/(double)4) * b * x * (double)2 + (double)10 * c * x + (double)-5 * d ;

	printf("This the value of y for the function: %d \n", y); 
	
	//circumference of a circle 
	
	float radius = 0; 
	float circumference = 0 ; 

	printf("define a radius of a circle to compute the circumference:"); 

	scanf("%f", &radius); 

	circumference = (double)2 * PI * radius ; 

	printf("This is the circumference of the circle: %f \n", circumference); 

	*/

	return(0); 
}
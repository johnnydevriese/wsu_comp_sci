/*******************************************************************************************
* Programmer: Johnny Minor                                                                      *
* Class: CptS 121, Fall 2014; Lab Section 08 (TA: Keegan Caruso)                                                 *
* Programming Assignment: PA3                                                  *
* Date: September 24, 2014                                                                       *
* Description: This is the header file with the function prototypes
that will calculate the sum of GPA's, the sum of class standings,
and the sum of ages as defined in the input.dat file.*
*******************************************************************************************/


#include<stdio.h>
#include<math.h>

double read_double(FILE *input_file);

int read_integer (FILE *infile);

double calculate_sum(double number1, double number2, double number3, double number4, double number5);

double calculate_mean (double sum, int number);

double calculate_deviation (double number, double mean); 

double calculate_variance (double deviation1, double deviation2, double deviation3, 
double deviation4, double deviation5, int number);

double calculate_standard_deviation (double variance);

double find_max (double number1, double number2, double number3, double number4, double number5);

double find_min (double number1, double number2, double number3, double number4, double number5);

void print_double (FILE *outfile, double number);


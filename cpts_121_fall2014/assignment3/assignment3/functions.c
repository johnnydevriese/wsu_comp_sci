/*******************************************************************************************
* Programmer: Johnny Minor                                                                      *
* Class: CptS 121, Fall 2014; Lab Section 08 (TA: Keegan Caruso)                                                 *
* Programming Assignment: PA3                                                  *
* Date: September 24, 2014                                                                       *
* Description: This program has all of the functions needed to read in, calculate and write out
the GPA's the sum of class standings 
*******************************************************************************************/


#include"gpa.h"
#include<stdio.h>
#include<math.h>

//This function will read in a double value from the input_file.dat
double read_double(FILE *infile){

	double d1 = 0; 

	fscanf(infile, "%lf", &d1 );

	//printf("this is the value of d1:%.2lf \n",d1); 

	return d1 ;
}

//this function will read in an integer from the input file. 
int read_integer (FILE *infile) {

	int number = 0 ;

	fscanf(infile, "%d", &number); 

	//printf("This is the value from the file: %d \n", number); 

	 return number; 
 }

//this function will calculate the sum of FIVE double precision numbers. 
double calculate_sum(double number1, double number2, double number3, double number4, double number5){

	double sum = 0 ;

	sum = number1 + number2 + number3 + number4 + number5 ; 

	//printf("This is the sum: %lf \n", sum); 
	
	return sum ;
}


//this function relies on the **SUM** function. It will take the sum and divide it by the number
//(in this case five) and will return the mean. The number of values must be > 0. 
//Otherwise it will return -1.0
double calculate_mean (double sum, int number){

		double mean = 0 ; 

		if( number > 0) {
		mean = sum / number ; 
		}
		else{ 
			return -1.0 ; 
		} 

	return mean ; 
}


//This function relies on both the mean function, and thus the sum function.
//This will take the number of values and subtract the mean from it. This yields the deviation. 
double calculate_deviation (double number, double mean){

	double deviation = 0; 

	deviation = number - mean ;

	return deviation ; 

}

//This function will take the five different deviations, square them and divide them by the number of values
//This value will yield the variance of the data set. 
double calculate_variance (double deviation1, double deviation2, double deviation3, 
double deviation4, double deviation5, int number){

	double variance = 0 ; 

	variance = pow(deviation1,2) + pow(deviation2,2) + pow(deviation3,2) + pow(deviation4,2) + pow(deviation5,2) / number ; 

	return variance ; 
}

//This function will take the variance calculated before and square root it. 
//This yields the deviation. 
double calculate_standard_deviation (double variance){

	double deviation = 0 ; 

	deviation = sqrt(variance); 

	return deviation ; 
}

//This function will find the maximum of five double precision values. 
double find_max (double number1, double number2, double number3, double number4, double number5){

	double x = 0;

	if(number1>=number2 && number1>=number3 && number1 >= number4 && number1 >= number5){
		printf("Largest number = %lf \n", number1);
			x = number1;
	}

	else if(number2>=number1 && number2>=number3 && number2 >= number4 && number2 >= number5){
         printf("Largest number = %lf \n", number2);
			x = number2;
	}

    else if(number3>=number1 && number3>=number2 && number3>=number4 && number3>=number5){
         printf("Largest number = %lf \n", number3);
			x = number3;
	}

	else if(number4>=number1 && number4>=number2 && number4>=number3 && number4>=number5){
		printf("Largest number is: %lf \n", number4); 
			x = number4;
	}

	else if(number5>=number1 && number5>=number2 && number5>=number3 && number5>=4){
		printf("largest number is: %lf \n", number5); 
			x = number5;
	}

	return x; 
}


//This function will find the lowest of five differnt fucntion values. 
double find_min (double number1, double number2, double number3, double number4, double number5){

	double x = 0; 

	if(number1<=number2 && number1<=number3 && number1<=number4 && number1<=number5){
		printf("The smallest number = %lf \n", number1);
			x = number1 ;
	}

	else if(number2<=number1 && number2<=number3 && number2<=number4 && number2<=number5){
         printf("The smallest number = %lf \n", number2);
			x = number2;
	}
    else if(number3<=number1 && number3<=number2 && number3<=number4 && number3<=number5){
         printf("The smallest number = %lf \n", number3);
			x = number3 ; 
	}

	else if(number4<=number1 && number4<=number2 && number4<=number3 && number4<=number5){
		printf("The smallest number is: %lf \n", number4); 
			x = number4;
	}
	else if(number5<=number1 && number5<=number2 && number5<=number3 && number5<=4){
		printf("The smallest number is: %lf \n", number5); 
			x = number5 ; 
	}

	return x ;
}


//This function will print the double number input to the output_file. 
 void print_double (FILE *outfile, double number){

	 fprintf(outfile, " %.2lf ", number);

	 return; 
 }
 



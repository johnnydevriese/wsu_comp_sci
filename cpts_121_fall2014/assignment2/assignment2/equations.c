#include<stdio.h>
#include"equations.h"
#include<math.h>
#define PI 3.14159265358979323846




int calculate_series_resistance (int r1, int r2, int r3){

	int series_resistance = 0; 

	series_resistance = r1 + r2 + r3; 

	printf("Total series resistance: series_resistance = r1 + r2 + r3 = %d \n ", series_resistance); 

	return(0); 

}

double calculate_total_sales_tax (double sales_tax_rate, double item_cost){

	double total_sales_tax = 0; 

	total_sales_tax = (sales_tax_rate) * (item_cost); 

	printf("The total sale price of the item is: %.2lf \n" , total_sales_tax );

	return(0); 
}

double calculate_volume_pyramid (double l, double w, double h){

	double volume_pyramid = 0; 

	volume_pyramid = (l * w * h) / (double)3 ; 

	printf("The volume of this pyramid is: %.2lf \n" , volume_pyramid );

	return (0); 
}

double calculate_parallel_resistance (int r1, int r2, int r3){

	double parallel_resistance = 0;

	parallel_resistance = (double)1 / ( ((double)1 / (r1)) +((double)1 / (r2)) + ((double)1 / r3)) ; 

	printf("This is the value of your parallel resistance: %.2lf \n", parallel_resistance); 

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

	distance = sqrt (((x1 - x2) * (x1 - x2)) + ((y1 - y2) * (y1 - y2))); 

	printf("this is the distance between the two points which you have chosen: %.2lf \n", distance);

	return distance; 
}

double calculate_general_equation (int a, double x, double y, double z){

	double f = 0 ; 

	f = y / ((double) 3 / 17) - z + x / (a % 2) + PI;

	printf("This is the result of the function with specified numbers: %.2lf \n", f);

	return(0); 
}
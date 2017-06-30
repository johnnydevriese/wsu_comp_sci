#include<stdio.h>
#include<math.h>

double get_height(void); 

double get_weight(void); 

double convert_height(double height); 

double calc_bmi(double weight, double inches);

int main(void){

	double height = 0, weight = 0, inches = 0, BMI = 0 ;

	height = get_height(); 

	weight = get_weight(); 

	inches = convert_height(height); 

	BMI = calc_bmi(weight, inches); 

	printf("This is your BMI: %lf \n", BMI); 

	return(0); 
}


double get_height(void){
	
	double height = 0; 

	printf("Please enter your height(in feet): \n"); 
	scanf("%lf", &height); 
	
	return height; 
}

double get_weight(void){
	
	double weight = 0; 

	printf("Please enter your weight(in lbs.): \n"); 
	scanf("%lf", &weight); 
	
	return weight; 
}

double convert_height(double height){

	double inches = 0 ; 

	inches = height * (double)12; 

	return inches; 

}

double calc_bmi(double weight, double inches){

	double bmi = 0 ; 

	bmi = ( weight / pow(inches,2) ) * (double)703 ;

	return bmi; 

}
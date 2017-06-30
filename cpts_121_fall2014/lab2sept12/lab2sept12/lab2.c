/*******************************************************************************************
* Programmer: Johnny Minor                                                                      *
* Class: CptS 121, Fall 2014; Lab Section 08                                             *
* Programming Assignment: Lab1Task2                                                    *
* Date: September 12, 2014                                                                       *
* Description: modular approach to the equation evaluator.      *
*******************************************************************************************/


#include<stdio.h>
#include<math.h> 

double get_point(void); 

double get_slope( double x1, double y1, double x2, double y2); 

double get_perp_bisector(double slope); 

double get_y_intercept(double x1, double x2, double y1, double y2, double perp_bisector);

int printing(double x1, double y1, double x2, double y2, double perp_bisector, double y_intercept);


int main (void){

	double x1 = 0, x2 = 0, y1 = 0, y2 = 0, slope = 0, midpoint_x = 0,  midpoint_y = 0, perp_bisector = 0;
	double  y_intercept = 0; 

	x1 = get_point();

	y1 = get_point();

	x2 = get_point();

	y2 = get_point(); 

	slope = get_slope(x1, y1, x2, y2); 

	perp_bisector = get_perp_bisector(slope); 

	y_intercept = get_y_intercept(x1, y1, x2, y2, perp_bisector); 

	printing(x1, y1, x2, y2, perp_bisector, y_intercept); 


	return (0); 
}

double get_point(void){

	double x1 = 0 ; 

	printf("Enter the values for a value in an ordered pair e.g. (x1 , 0):"); 
	scanf("%lf", &x1) ; 

	return x1;

}

double get_slope( double x1, double x2, double y1, double y2){

	double slope = 0; 

	slope = (y2 - y1) / (x2 - x1) ; 

	return slope; 

}

double get_perp_bisector(double slope){

	double perp_bisector = 0; 

	perp_bisector = - (double)1 / slope ; 

	return perp_bisector;

}

double get_y_intercept(double x1, double y1, double x2, double y2, double perp_bisector){

	double midpoint_x = 0, midpoint_y = 0, y_intercept = 0 ; 

	midpoint_x = (x1 + x2) / (double)2 ; 

	midpoint_y = (y1 + y2) / (double)2 ; 

	y_intercept = midpoint_y - (perp_bisector * midpoint_x) ; 

	return y_intercept; 
}




int printing(double x1, double y1, double x2, double y2, double perp_bisector, double y_intercept){

	printf("These are the two original points: (%lf, %lf) and (%lf, %lf) \n", x1, y1, x2, y2 ) ; 

	printf("This is the perpendicular bisector line equation is: y = %lf*x + %lf:", perp_bisector, y_intercept); 

	return(0); 
}
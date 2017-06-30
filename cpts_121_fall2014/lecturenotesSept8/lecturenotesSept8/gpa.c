#include<stdio.h>
#include"gpa.h"



int get_credit(void){ 

	int credits = 0;

	printf("Enter credits for course:"); 
	scanf("%d", &credits); 

	return credits; 

}

double get_gpa(void){//referred to as the "function header".

	double gpa = 0; 

	printf("Enter the gpa in the course:"); 
	scanf("%lf", &gpa); 

	return gpa; 
}
#ifdef PA_4H
#define PA4_H

#define _CRT_SECURE_NO_WARNINGS 

#include<stdio.h>
#include<stdlib.h> // rand() and srand()
#include<time.h>

int roll_die(void); 


int roll_die(void){

	int die_value = 0 ; 

	die_value = (rand()%6)+1; 

	srand((unsigned int) time(NULL)); 


	return die_value; 
}






#endif
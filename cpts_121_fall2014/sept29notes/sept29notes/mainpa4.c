#include<stdio.h>
#include<stdlib.h>
#include"craps.h"

int main(void){
	int die1 = 0, die2 = 0, sum = 0, option = 0;

	FILE *input = NULL, *output = NULL; 

	srand((unsigned int) time(NULL)); 

	output = fopen("dice_rolls.dat", "w" ); 


	die1 = roll_die(); 
	die2 = roll_die(); 

	fprintf(output, "%d \n %d ", die1, die2); 

	fclose(output); 

	input = fopen("dice_rolls.dat", "r");

	//file-end-of-file = "feof" (if not at the the end of the file scan in. 
	//GOAL: Sum the values in the file. (Using the "+=" operator). 
	while(!feof(input)){
	fscanf(input, "%d", &die1); 
	sum += die1; 
	}
	//fscanf(input, "%d", &die1); 



	return 0 ; 
}
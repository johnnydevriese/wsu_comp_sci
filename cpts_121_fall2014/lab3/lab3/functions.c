#include"lab3.h"
#include<math.h>
#include<stdio.h>


char read_character(FILE *inputfile){

	char character = ' \0' ;
	
	fscanf(inputfile, "%c", &character); 

	return character; 
}

int determine_ascii(char character){

	return (int) character; 
}


void printint(FILE *outputfile, int num){

	fprintf(outputfile, "%d", num); 
}
FILE *openinputfile(void){
	FILE *infile = fopen("input.dat","r"); 
	return infile; 
}

//where "r" is read and "w" is write. 

int is_upper(char character){
	if character >= && character >=) 
	{
	return upper; 
	} 
	else
		return not_upper; 
}

int numer_uppers(char character, in num_uppers){ //call like this for each character current num uppers = number uppers 
	if (is upper character) ! = 0);
	{
		return num_uppers + 1, 
	else
		{
			return numer_uppers; 
	}
	}














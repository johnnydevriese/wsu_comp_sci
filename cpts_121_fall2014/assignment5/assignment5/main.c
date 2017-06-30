/*******************************************************************************************
* Programmer: Johnny Minor (11368647)                                                                   *
* Class: CptS 121, Fall 2014; Lab Section 08                                                 *
* Programming Assignment: Programming assingment #5                                                     *
* Date: October 24, 2014                                                                       *
* Description: This program finds the mutations between a pair of test and normal sequences. 
To do this the algorithm first compares the two rows and compares the characters. 
If the characters don't match a 1 is written into a new corresponding array. 
Once the pairs have been compared the associated array of 1's and 0's is compared. 
This yields whether or not they are a flipped pair, or a mismatched pair and writes to mutation.txt*
*******************************************************************************************/


#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include"mutation.h"


int main (void){

	FILE *input = NULL ; 
	FILE *output = NULL ; 

	//declaration of variables
	char s[100][15] = {'\0'}; 
	int mutation[15] = {0}, mutation2[15] = {0}, mutation3[15] = {0}, mutation4[15] = {0}; 
	
	int num_rows= 0, num_cols = 0 ;

	int row_index = 0, col_index = 0 ;
	int pair = 0 ; 
	int ii = 15 ; 


	//opening the files for "r"ead and "w"rite
	input = fopen("sequence.txt", "r"); 
	output = fopen("mutation.txt", "w"); 


	
	//reading in the sequences from the file. 
	while( !feof (input) ) // " %c" ignores the whitespace  
	{//f get c always assumes a character 
		fscanf(input, "%c", &s[row_index][col_index]);

		if(s[row_index][col_index] ==  '\n')
		{
			row_index++; 
			col_index = 0 ; 
		}
		else
		{
		col_index++;
		}
	}
	//comparing the rows in the 2d array of sequences. 

	compare_dna(s, 1, 8, mutation); 

	compare_dna(s, 2, 9, mutation2); 

	compare_dna(s, 4, 11, mutation3); 

	compare_dna(s, 5, 12, mutation4); 

	//writing the mutations to the output file.

	fprintf(output, "Mutation(s) found in sequence 1 \n") ; 
	mutation_assign(mutation, mutation2, 15, output); 

	

	fprintf(output, "Mutation(s) found in sequence 2 \n") ; 
	mutation_assign(mutation3, mutation4, 15, output); 





	//closing the opened files
	fclose(input); 
	fclose(output); 



	return 0 ; 
}
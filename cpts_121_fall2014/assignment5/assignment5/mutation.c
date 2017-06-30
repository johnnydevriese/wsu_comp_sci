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
#include"mutation.h"


//This function will compare two rows from the 2D array of characters. 
//If the characters are different it writes a 1 to the new array and a 0 if they are the same. 
//For this function you need to know what row(s) the data you want to compare is on. 
void compare_dna(char s[100][15], int row1, int row2, int mutation[15]) 
{

	int ii = 0 ;

	for(ii = 0; ii < 15; ii++)
	{

	if( s[row1][ii] != s[row2][ii])
	{
		mutation[ii] = 1 ; 
	}
	
	else
	{
		mutation[ii] = 0; 
	}
	}


	return ; 
}


//This function will take the two mutation arrays of 1's and 0's and compare them. 
//If there are two 1's at the same index that means the dna is a flipped pair. 
//if there is a single 1 at the index that means the dna is a mismatched pair. 
//This function relies on the "compare_dna()" function in order to work properly. 
void mutation_assign(int mutation[15], int mutation2[15], int size, FILE *output)
{

	int ii = 0, pair = 0 ;

	for(ii = 0; ii < size; ii++)
	{

	if( mutation[ii] == 1 && mutation2[ii] == 1)
	{

		pair = ii + 1 ;
		fprintf(output,"pair %d flipped pair \n", pair) ; 
	}

	else if( mutation[ii] != mutation2[ii] )
	{
		pair = ii + 1 ; 
		fprintf(output, " pair %d mismatched pair \n", pair); 
	}
	}

	return ; 
}
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


#ifndef MUTATION_H
#define MUTATION_H

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

void compare_dna(char s[100][15], int row1, int row2, int *mutation);

void mutation_assign(int mutation[15], int mutation2[15], int size, FILE *output); 





#endif
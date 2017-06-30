/*******************************************************************************************
* Programmer: Johnny Minor	                                                                       *
* Class: CptS 121, Fall 2014; Lab Section 08 (Caruso)                                                  *
* Programming Assignment: PA 7                                                      *
* Date: December 3, 2014                                                                       *
* Description: This program will ask the user for which level of math they would like to do
 the will then be asked a set of 10 questions that will get "harder" as they answer correctly. 
 the final score and initials will be output to the logfile once they're finished. *
*******************************************************************************************/


#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<string.h>



void begin_game();

void get_intials(char player[5]);

void get_difficulty(int *difficulty);

void random_values(int *d1, int *d2, int *d3,int *d4, int max , int min);

void level_1(int d1, int d2, int d3, int d4, int *user_points, int user_answer, int comp_answer);

void level_2(int d1, int d2, int d3, int d4, int *user_points, int user_answer, int comp_answer);

void level_3(int d1, int d2, int d3, int d4, int *user_points, int user_answer, int comp_answer);

void level_4(int d1, int d2, int d3, int d4, int *user_points, int user_answer, int comp_answer);

void level_5(int d1, int d2, int d3, int d4, int *user_points, int user_answer, int comp_answer) ;
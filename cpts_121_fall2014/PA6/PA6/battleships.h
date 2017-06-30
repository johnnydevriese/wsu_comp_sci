/*******************************************************************************************
* Programmer: Johnny Minor                                                                      *
* Class: CptS 121, Fall 2014; Lab Section 08 (TA: Keegan Caruso)                                                  *
* Programming Assignment: Programming Assignment #6                                                    *
* Date: November 10, 2014                                                                       *
* Description: This program attempts to play the classic game of Battleships     *
*******************************************************************************************/


#include<stdio.h>
#include<stdlib.h> 
#include<time.h> 

#define MAX_ROWS 10
#define MAX_COLS 10

typedef struct stats
{
	int total_hits;
	int total_misses;
	int total_shots;
	double hits_miss_ratio;
} Stats;

void rules();  

void ships_prompt( char player1_name[25], int *decision); 

void place_ships_manual(char player1[10][10]); 

void show_board(char player1[10][10]);

void init_board(char player1[10][10]);

void generate_start_pt (int direction, int length, int *row_ptr,
						int *col_ptr);

int generate_dir (void);

void rand_ships(char player1[][MAX_COLS], int row, int col);

void place_ship (char board[][MAX_COLS], int length, char symbol);

void check_if_sunk_ship(char player2[][MAX_COLS], int rows, int cols, int player1_ships[4]);


void check_winner(int player1_ships[4], int player1_check);

void check_shot(char player2[][MAX_COLS], int row, int col,
				int row_shot, int col_shot, struct stats Stats, FILE  *logfile );
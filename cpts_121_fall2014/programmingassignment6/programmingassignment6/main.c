#include<stdio.h>
#include<stdlib.h>
#include"battleships.h"


int main (void){

	FILE *logfile = NULL ; 

	//these arrays hold the values of whether the ships are sunk or not.
	//They're initialized to zero and once all ships have been sunk they will be all ones (1)
	int player1_ships[4] = {0}, player2_ships[4] = {0} ;


	char player1[10][10] = {'\0'}, player2[10][10] = {'\0'} ; 

	//intializing indices for loop(s) 
	int ii = 0, jj = 0; 

	//intializing int's for the random placement of ships. 
	int direction = 0, row_start = 0, col_start = 0; 

	int row_shot = 0, col_shot = 0 ; 

	int decision = 0;  

	int player1_check = 0, player2_check = 0 ; 

	//creating structs for the logging of data. 
	Stats player1_stats = {0, 0, 0, 0.0}, player2_stats = {0, 0, 0, 0.0};

	logfile = fopen("logfile.txt", "w"); 


	srand ((unsigned int) time (NULL));






	return 0 ; 
}
/*******************************************************************************************
* Programmer: Johnny Minor                                                                      *
* Class: CptS 121, Fall 2014; Lab Section 08 (TA: Keegan Caruso)                                                  *
* Programming Assignment: Programming Assignment #6                                                    *
* Date: November 10, 2014                                                                       *
* Description: This program attempts to play the classic game of Battleships     *
*******************************************************************************************
*/


#include<stdio.h>
#include<stdlib.h>
#include"battleships.h"


int main (void) 
{
	
	//intializing the logfile. 
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

	int foo = 0 ; 

	//This value gets altered if the player_ships array is all ones. 
	//sigfiying that a player has won the game. 
	int player1_check = 0, player2_check = 0 ; 

	//creating structs for the logging of data. 
	Stats player1_stats = {0, 0, 0, 0.0}, player2_stats = {0, 0, 0, 0.0};

	//opening the logfile for "w"riting to. 
	logfile = fopen("logfile.txt", "w"); 
	
	//random for the points chosen by the computer and also for random placement of ships. 
	srand ((unsigned int) time (NULL));


	//intializing the boards to '~'
	init_board(player1); 

	init_board(player2); 

	//printing the rules of the game. 
	rules(); 


	printf("Press enter to continue... \n" ); 

	//clear the screen // 
	//system("cls"); 

	
	//decide if player wants to place ships or have them placed randomly.
	printf("Enter 1 if you want to place the ships and 0 if you want them placed randomly.\n"); 
	scanf("%d", &decision); 


	if(decision == 1){

	place_ships_manual(player1); 

	}
	else( decision == 0);{
		//random place of ships for player1 . 
		place_ship(player1, 5, 'c' ); 

		place_ship(player1, 4, 'b' ); 

		place_ship(player1, 3, 'r' ); 

		place_ship(player1, 3, 's' );

		place_ship(player1, 2, 'd' ); 

	}

	

	//randomly placing ships for computer. 
	
	place_ship(player2, 5, 'c' ); 

	place_ship(player2, 4, 'b' ); 

	place_ship(player2, 3, 'r' ); 

	place_ship(player2, 3, 's' );

	place_ship(player2, 2, 'd' ); 


	//The game will proceed until the all the elements in either player1_ships array are all 1's 
	//or until player_ships array are all 1's 

	while(player1_check == 0 && player2_check == 0 ){


	//**** beginning of the choosing points ***** 

	//user enters point & determine if hit or miss. 
	//It's player 1's turn so player 2's board will be edited. 

	//this function checks if the shot is a hit or a miss and also will update the logfile. 

	check_shot(player2, MAX_ROWS, MAX_COLS, row_shot, col_shot, player1_stats, logfile ) ; 


	check_winner(player2_ships, player2_check); 

	//printf("please enter a value: \n"); 
	//scanf("%d", &foo) ; 


	//*** computers turn **** 

	//computer random point between 0 and 9 

	row_shot = rand() % 10 ; 
	col_shot = rand() % 10 ; 

	printf("This is the RANDOM row %d and column %d \n", row_shot, col_shot); 

	// determine hit or miss. 

	if(player1[row_shot][col_shot] == 'c' || player1[row_shot][col_shot] == 'b' || 
		player1[row_shot][col_shot] == 'r' || player1[row_shot][col_shot] == 's' || 
		player1[row_shot][col_shot] == 'd' )
	{
		printf("That was a hit! \n") ; 
		player1[row_shot][col_shot] = 'x' ;
		

		//this updates the players stats. 
		player2_stats.total_hits++ ; 
		player2_stats.total_shots++; 
		fscanf(logfile, "player2 total hits is %d \n", player2_stats.total_hits); 

	}

	else{
		printf(" That was a miss! \n"); 
		player1[row_shot][col_shot] = 'm' ;
		
		//this updates the players stats.
		player2_stats.total_misses++; 
		player2_stats.total_shots++; 
		fscanf(logfile, "player 2 total misses is %d \n", player2_stats.total_misses); 

	}

	player2_stats.hits_miss_ratio = player2_stats.total_hits / player2_stats.total_misses ; 

	fscanf(logfile, "Player2 hit miss ratio is: %lf \n", player2_stats.hits_miss_ratio) ; 

	fscanf(logfile, "Player 2 total number of shots taken: %d \n", player2_stats.total_shots); 



	//determine if ship has been sunk or not. 

	//This is PLAYER2 so it will be editing PLAYER1's information. 

	check_if_sunk_ship(player1,MAX_ROWS, MAX_COLS, player1_ships); 

	check_winner(player1_ships, player1_check); 
	

	} // end of the while loop 


	//once out of the while loop of the game it checks to see which person has won. 
	// if the value is true for that player then that means they don't have any ships left and 
	//have therefore lost the game! 


	if(player1_check == 1){

		printf("The computer has won! \n");
	}
	else if(player2_check == 1) 
	{
		printf("Great work, you beat the computer! \n"); 
	}





	return 0 ; 
}
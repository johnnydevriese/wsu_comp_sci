/*******************************************************************************************
* Programmer: Johnny Minor                                                                      *
* Class: CptS 121, Fall 2014; Lab Section 08 (TA: Keegan Caruso)                                                  *
* Programming Assignment: Programming Assignment #6                                                    *
* Date: November 10, 2014                                                                       *
* Description: This program attempts to play the classic game of Battleships     *
*******************************************************************************************/


#include<stdio.h>
#include<time.h>
#include"battleships.h"


//This function will print the rules of the game. 

void rules(){

	char player1[25] = {'\0'} ; 

	printf("*****Welcome to Battleships!***** \n"); 

	//printf("Please enter your name: "); 
	//scanf("%s", &player1 ); 

	//printf("hello %s! \n", player1) ;

	printf("The Rules Of Battleships: \n"); 
	printf("You set your your fleet of five ships in a 10 x 10 grid. \n") ; 
	printf("The five ships you can place are: \n");
	printf("carrier(5 cells), battleship(4 cells), cruiser(3 cells),submarine(3 cells), and a destroyer(2 cells) \n") ; 
	printf("You guess a position on the grid that you want to fire on your opponent. \n"); 
	printf("Whoever sinks all of their opponents ships wins the game! \n"); 

	printf("Have fun! \n", player1); 

}


//this function would get the user input whether they want to place the ships
//or have them generated. 

void ships_prompt( char player1_name[25], int *decision){

	//int decision = 0 ; 

	printf(" %s, would you like to: \n" ); 

	printf("1. Place the ships yourself.\n"); 

	printf("2. Have the ships randomally placed for you. \n") ; 

	scanf("%d", &decision); 

	return ; 
}

//this function gets the user input to place the ships. 

void place_ships_manual(char player1[10][10]){

	int ii = 0, index1 = 0, index2 = 0 ; 

	//setting the placement for the carrier. 
	for(ii = 0; ii < 5; ii++)
	{
	do{
	printf("please enter an ordered pair for the carrier: \n"); 
	scanf("%d%d", &index1, &index2); 
	}while( index1 < 0 || index1 > 10 || index2 < 0 || index2 > 10 
		|| player1[index1][index2] == 'c') ;

	player1[index1][index2] = 'c' ; 

	}


	//setting the placement for the battleship. 
	ii = 0; 

	for(ii = 0; ii < 4; ii++)
	{
	do{
	printf("please enter an ordered pair for the battleship: \n"); 
	scanf("%d%d", &index1, &index2); 
	}while( index1 < 0 || index1 > 10 || index2 < 0 || index2 > 10 
		|| player1[index1][index2] == 'c' || player1[index1][index2] == 'b') ;

	player1[index1][index2] = 'b' ; 

	}


	//setting the placement for the cruiser. 
	ii = 0; 

	for(ii = 0; ii < 3; ii++)
	{
	do{
	printf("please enter an ordered pair for the cruiser: \n"); 
	scanf("%d%d", &index1, &index2); 
	}while( index1 < 0 || index1 > 10 || index2 < 0 || index2 > 10 
		|| player1[index1][index2] == 'c' || player1[index1][index2] == 'b'
		|| player1[index1][index2] == 'r') ;

	player1[index1][index2] = 'r' ; 

	}


	//setting the placement of the submarine. 
	ii = 0 ; 

	for(ii = 0; ii < 3; ii++)
	{
	do{
	printf("please enter an ordered pair for the submarine: \n"); 
	scanf("%d%d", &index1, &index2); 
	}while( index1 < 0 || index1 > 10 || index2 < 0 || index2 > 10 
		|| player1[index1][index2] == 'c' || player1[index1][index2] == 'b'
		|| player1[index1][index2] == 'r'|| player1[index1][index2] == 's') ;

	player1[index1][index2] = 's' ; 

	}

	//setting the placement of the destroyer. 
	ii = 0 ; 

	for(ii = 0; ii < 2; ii++)
	{
	do{
	printf("please enter an ordered pair for the destroyer: \n"); 
	scanf("%d%d", &index1, &index2); 
	}while( index1 < 0 || index1 > 10 || index2 < 0 || index2 > 10 
		|| player1[index1][index2] == 'c' || player1[index1][index2] == 'b'
		|| player1[index1][index2] == 'r'|| player1[index1][index2] == 's'
		|| player1[index1][index2] == 'd') ;

	player1[index1][index2] = 'd' ; 

	}


	printf("Now you're ready to play battleships!");

	return ; 
}


//this function will initialize the board to all '~' 

void init_board(char player1[10][10])
{
	int ii = 0, jj = 0 ; 
	//initializing the board to all '~'
	for(ii=0; ii < 10; ii++)
	{
		for(jj = 0; jj < 10; jj++)
		{
			player1[ii][jj] = '~' ;
		}
	}

	return ; 
}

//This function will show the user the board 

void show_board(char player1[10][10]){

	int ii = 0, jj = 0; 

	printf ("  0 1 2 3 4 5 6 7 8 9\n");

	for(ii=0;ii<10;ii++)
	{ 
		printf ("%d ", ii);

		for(jj=0;jj<10;jj++)
		{
		printf(" %c",player1[ii][jj]);
		}
		printf("\n"); 
	}


	return ;
}


//Andy's functions for random placement of ships 

void generate_start_pt (int direction, int length, int *row_ptr,
						int *col_ptr)
{
	if (direction == 0) // horizontal - left to right
	{
		*row_ptr = rand () % MAX_ROWS;
		*col_ptr = rand () % (MAX_COLS - (length - 1));
	}
	else // vertical - top down
	{
		*row_ptr = rand () % (MAX_ROWS - (length - 1));
		*col_ptr = rand () % MAX_COLS;
	}
}

int generate_dir (void)
{
	int direction = 0;

	direction = rand () % 2; // 0 -horizontal, 1 - vertical

	return direction;
}


void place_ship (char board[][MAX_COLS], int length, 
				 char symbol)
{
	int direction = 0, row_start = 0, col_start = 0,
		counter = 0;

	direction = generate_dir ();
	generate_start_pt (direction, 5, &row_start, &col_start);
	
	if (direction == 0) // horizontal
	{
		while (counter < length)
		{
			board[row_start][col_start + counter] = symbol;
			counter++;
		}
	}
	else // vertical
	{
		while (counter < length)
		{
			board[row_start  + counter][col_start] = symbol;
			counter++;
		}
	}

}



//This function will get user input of an ordered pair. 
//It will then determine if it is a hit or miss and update the player stats struct 
//and finally write to the logfile. 

void check_shot(char player2[][MAX_COLS], int row, int col,
				int row_shot, int col_shot, struct stats Stats, FILE  *logfile ){


	do{
	printf("please enter an ordered pair: \n"); 
	scanf("%d%d", &row_shot, &col_shot); 
	}while( row_shot < 0 || row_shot > 10 || col_shot < 0 || col_shot > 10 ); 

	if(player2[row_shot][col_shot] == 'c' || player2[row_shot][col_shot] == 'b' || 
		player2[row_shot][col_shot] == 'r' || player2[row_shot][col_shot] == 's' || 
		player2[row_shot][col_shot] == 'd' )
	{
		printf("That was a hit! \n") ; 
		player2[row_shot][col_shot] = 'x' ;

		//updating the stats
		Stats.total_hits++; 
		fprintf(logfile, "Player1 has %d hits. \n", Stats.hits_miss_ratio); 

	}

	else{
		printf(" That was a miss! \n"); 
		player2[row_shot][col_shot] = 'm' ;
		//updating the stats. 
		Stats.total_misses++; 
		fprintf(logfile, "Player1 has %d misses. \n", Stats.total_misses);
	}

	Stats.hits_miss_ratio = Stats.total_hits / Stats.total_misses ;

	fprintf(logfile,"The hit-miss ratio is %lf \n", Stats.hits_miss_ratio); 

	
	Stats.total_shots++; 
	
	fprintf(logfile, "Player 1 total shots are %d \n", Stats.total_shots) ; 

	


	return ; 
}


//This function will scan the entire board for the character. 
//If it finds the character it will increment the value associated with that ship. 
//If if doesn't find the character then the ship must be sunk and will then change the 
//player()_ships[] array value associated with the ship


void check_if_sunk_ship(char player2[][MAX_COLS], int rows, int cols, int player1_ships[4]){
	int ii = 0, jj = 0;

	int carrier = 0, cruiser = 0, battleship = 0, submarine = 0, destroyer = 0   ; 

//checking for carrier.
for(ii = 0; ii < MAX_ROWS; ii++){

		for(jj = 0; jj < MAX_COLS; jj++){

			if( player2[ii][jj] == 'c'){
				carrier += 1; 
			}
			
			
	}
}

	//if there are no more 'c' on the board carrier will equal zero
	//and thus carrier will have been sunk. And will change the first position in the ships 
	//array to TRUE. (Meaning that the ship has been sunk.) 
	if(carrier == 0) {
		printf("You sunk the carrier! \n"); 
		player1_ships[0] = 1 ; 
	}




	//checking for battleship.
	for(ii = 0; ii < MAX_ROWS; ii++){

		for(jj = 0; jj < MAX_COLS; jj++){

			if( player2[ii][jj] == 'b'){
				battleship += 1 ; 
			}
		}
	}

	if(battleship == 0 ){

	printf("you sunk the battleship! \n" ); 

	player1_ships[1] = 1 ; 
	}


	//checking for cruiser
	for(ii = 0; ii < MAX_ROWS; ii++){

		for(jj = 0; jj < MAX_COLS; jj++){

			if( player2[ii][jj] == 'r'){
				cruiser += 1; 
			}
		}
	}

	if(cruiser == 0){

	printf("you sunk the cruiser! \n" ); 

	player1_ships[2] = 1; 
	}

	//checking for submarine
	for(ii = 0; ii < MAX_ROWS; ii++){

		for(jj = 0; jj < MAX_COLS; jj++){

			if( player2[ii][jj] == 's'){
				submarine += 1; 
			}
		}
	}

	if(submarine == 0 ){

	("you sunk the submarine! \n" ); 

	player1_ships[3] = 1; 
			
	}

	//check for the destroyer
	for(ii = 0; ii < MAX_ROWS; ii++){

		for(jj = 0; jj < MAX_COLS; jj++){

			if( player2[ii][jj] == 'd'){
				destroyer += 1 ; 
			}
			
		}
	}

	if(destroyer == 0) {
	printf("you sunk the destroyer! \n" ); 

	player1_ships[4] = 1; 
	}


	return ; 
}


//this function will check whether the array is all ones.
//This signifies that a player has won the game because there are no ships left. 

void check_winner(int player1_ships[4], int player1_check){

	if(player1_ships[0] == 1 && player1_ships[1] == 1 && player1_ships[2] == 1 && 
		player1_ships[3] == 1 && player1_ships[4] == 1 ){

		player1_check = 1; 
	}
	else{
	}



	return ; 
}

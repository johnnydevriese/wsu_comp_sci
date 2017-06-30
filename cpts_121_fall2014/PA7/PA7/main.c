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
#include<time.h>
#include<stdlib.h>
#include<string.h>
#include"game.h"


int main(void)
{
	//defining the logfile
	FILE *logfile = NULL; 


	char player[10] ;

	int difficulty = 0, d1 = 0, d2 = 0, d3 = 0, d4 = 0   ;

	int user_answer = 0, comp_answer = 0 ; 

	int user_points = 0 ; 

	int ii = 0 ;  

	//opening the logfile for writing
	logfile = fopen("player_stats.txt", "w");

	//defining the seed for the random function
	srand ((unsigned int) time (NULL));

	begin_game();

	get_intials(player); 

	get_difficulty(&difficulty); 


	//if /else if statements that will execute depending on what level the user has chosen. 


	if( difficulty == 1)
	{
		level_1(d1, d2, d3, d4, &user_points, user_answer, comp_answer); 
	}
	else if( difficulty == 2)
	{
		level_2(d1, d2, d3, d4, &user_points, user_answer, comp_answer);
	}
	else if( difficulty == 3)
	{
		level_3(d1, d2, d3, d4, &user_points, user_answer, comp_answer);
	}
	else if( difficulty == 4)
	{
		level_4(d1, d2, d3, d4, &user_points, user_answer, comp_answer); 
	}
	else if(difficulty == 5)
	{
		level_5(d1, d2, d3, d4, &user_points, user_answer, comp_answer); 
	}





	//printing the players intials to the outfile and then closing the logfile. 

	fprintf(logfile, "Player: %s Score: %d", player, user_points );

	fclose(logfile); 


	return 0 ; 
}




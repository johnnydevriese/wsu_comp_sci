/*******************************************************************************************
* Programmer: Johnny Minor                                                                       *
* Class: CptS 121, Fall 2014; Lab Section 08                                                *
* Programming Assignment: programming assignment 4                                                 *
* Date: October 8, 2014                                                                       *
* Description: This program you play a game of craps.     *
*******************************************************************************************/


#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>
#include"craps.h"



int main (void){

	//declaration of variables
	int die1 = 0, die2 = 0, sum_dice = 0 , point_value = 0 , num_rolls = 0,  wager_check = 0; 
	double bank = 0 , wager = 0, before_bank = 1  ; 


	srand ((unsigned int) time (NULL));


	//printing the rules of craps the game.
	print_game_rules() ;	

	//getting the user input for the bank balance that they'll play with. 
	bank = get_bank_balance() ; 



	//while statement to execute. 
	while(bank > 0 ) { 
	
	before_bank = bank ;

	//getting the wager amount from user. 
	wager = get_wager_amount(); 

	//checking if user has enough money to wager. 
	wager_check = check_wager_amount( wager, bank ) ; 

	//printf("This is the wager_check: %d \n ", wager_check); 

	while(wager_check == -1 ){
	wager = get_wager_amount();
	wager_check = check_wager_amount(wager, bank );
	//printf("This the wager wager_check %d \n", wager_check); 
	}

	//counting the number of rolls. Adding one each time while loop executes. 
	num_rolls = num_rolls + 1 ;

	//first dice roll.
	die1 = roll_die(); 
	printf("This is your first roll: %d \n", die1); 

	//second dice roll. 
	die2 = roll_die(); 
	printf("This is your second roll: %d \n", die2); 

	//addition of two die.
	sum_dice = calculate_sum_dice(die1, die2); 

	//assigning the sum a point value or 1(win), 0(loss) and -1(re roll) 
	point_value = is_win_loss_or_point (sum_dice);

	//successive roll to attempt to match sum_dice. 
	while (point_value == -1){
		point_value = is_point_loss_or_neither (sum_dice, point_value);}  

	//adjusting the bank balance to reflect the win/loss
	bank = adjust_bank_balance (bank, wager, point_value);

	//fun messages to tell user how they're doing. 
	chatter_messages (num_rolls, point_value, before_bank, bank);

	}

	printf("Bloody hell! You lost mate! \n"); 

	return 0;
}
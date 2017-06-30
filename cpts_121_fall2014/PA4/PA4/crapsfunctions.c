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


//This function will print the rules of the game craps. 
void print_game_rules (void){

	printf("THE RULES OF CRAPS: \n 1. place your bets \n "); 

	printf(" 2. you roll two six sided dice, and sum the two. \n"); 

	printf(" 3. If you rolled a 7 or 11 you win! If you roll a 2, 3, or 12 you lose! and if you roll a 4, 5, 6, 7, 8 9, or 10 then you have to re roll. \n"); 

	printf("4. On the successive rolls: If you roll a 7 you lose. If you match the sum of the dice from the first roll you win. Otherwise you roll again. \n "); 

	return; 
}

//This function takes in the balance that the player will use. 
double get_bank_balance (void){

	double bank = 0;

	printf("Please enter the bank balance: "); 
	scanf("%lf", &bank); 


	return bank ; 
}

//This function gets the amount the user is going to wager. 
double get_wager_amount (void){

	double wager = 0 ; 

	printf("How much would like to wager on this turn?"); 
	scanf("%lf", &wager); 

	return wager;
}

//This function checks that the wager the user entered is valid. 
int check_wager_amount (double wager, double balance){

	int x = 0; 

	if(balance >= wager) {
		x = 1 ;  
	}
	else if( wager > balance){
		printf("You do not have this much money to wager! \n"); 
		x = -1 ; 
	}
	return x ; 
}

//This function simulates a six sided dice roll. 
int roll_die (void){

	int dice = 0; 
	srand((unsigned int) time(NULL)); 

	dice = rand() %6 + 1; 

	//srand((unsigned int) time(NULL)); 

	return dice ; 
}

//This function takes two dice rolls and adds them together. 
int calculate_sum_dice (int die1_value, int die2_value){

	int sum_dice = 0 ; 

	sum_dice = die1_value + die2_value ; 
	printf("The sum of the two dice is: %d \n", sum_dice); 

	return sum_dice ; 
}

//This function tells the user whether they won, lost, or need to roll again to match the roll. 
int is_win_loss_or_point (int sum_dice){ 

	int win_loss = 0 ; 

	if(sum_dice == 7 || sum_dice == 11){
		printf("You WON!! \n"); 
		win_loss = 1 ; }
	else if(sum_dice == 2 || sum_dice == 3 || sum_dice == 12){
		printf("CRAPS!! you lost mate! \n"); 
		win_loss = 0 ; }
	else if(sum_dice == 4 || sum_dice == 5 || sum_dice == 6 || sum_dice == 8 || sum_dice == 9){
		printf("Roll again and try to match the sum: %d \n", sum_dice);
		win_loss = -1 ; }

	 return win_loss ; 
}

//This function will roll the dice again until the person either loses or matches the first value. 
int is_point_loss_or_neither (int sum_dice, int point_value){

	int die1 = 0, die2 = 0, sum_dice2; 

	if( point_value == 1) point_value = 1 ; 

	else if(point_value == 0) point_value = 0; 

	else if(point_value == -1){
	
	die1 = roll_die(); 
	printf("This is your first roll: %d \n", die1); 

	die2 = roll_die(); 
	printf("This is your second roll: %d \n", die2); 

	sum_dice2 = calculate_sum_dice(die1, die2);
	printf("This is the sum: %d \n", sum_dice2); 
	
	if( sum_dice2 == sum_dice){ 
	printf("You've matched your first roll! \n"); 	
	point_value = 1; }

	else if( sum_dice2 == 7){point_value = 0; }

	}

	return point_value ; 
}

//This function adjusts the bank balance whether or not they lost. 
double adjust_bank_balance (double bank_balance, double wager_amount, int add_or_subtract){

	if(add_or_subtract == 1) { bank_balance = bank_balance + wager_amount; }

	else if(add_or_subtract == 0) {bank_balance = bank_balance - wager_amount;}

	return bank_balance; 
}

//This function will print out various game statements. 
void chatter_messages (int number_rolls, int win_loss_neither,
double initial_bank_balance, double current_bank_balance){

	if(win_loss_neither == 1){
	printf("You won the last hand, nicely done. \n");}
		
	else if(win_loss_neither == 0){
	printf("You lost the last hand :-( \n"); }

	printf("You've had %d rolls. \n", number_rolls); 

	printf("This is your current bank balance after this turn: %lf \n", current_bank_balance); 



	return ;
}
/*******************************************************************************************
* Programmer: Johnny Minor	                                                                       *
* Class: CptS 121, Fall 2014; Lab Section 08 (Caruso)                                                  *
* Programming Assignment: PA 7                                                      *
* Date: December 3, 2014                                                                       *
* Description: This program will ask the user for which level of math they would like to do
 the will then be asked a set of 10 questions that will get "harder" as they answer correctly. 
 the final score and initials will be output to the logfile once they're finished. *
 

*******************************************************************************************/




#include"game.h"



//This will print the rules of the game onto the screen. 

void begin_game()
{

	//print the rules of the game

	printf("You will practice arithmetic by solving a set of 10 problems. \n"); 
	printf("There are five levels of difficulty you can choose from. \n"); 
	printf(" The levels correspond as follows: \n"); 
	printf("Level 1(Easy): Includes addition and subtraction problems \n"); 
	printf("Level 2(Fair): Includes multiplication problems. \n");
	printf("Level 3(Intermediate): Division problems. \n"); 
	printf("Level 4(Hard): A smorgasbord of addition, subtraction, multiplication, and division. \n") ; 
	printf("Level 5(Impossible): a smorgasbord of more challenging addition, subtraction, multiplication, and division. \n"); 
	printf("You will gain a point(s) for each question answered correctly and lose points for incorrect answers. \n"); 



	return; 
}

//This function gets the players intials and stores in a char array. 
//up to ten in case they add space or if a person has more than three initials. 
//and also so you don't get an overflow
void get_intials(char player[10])
{

	//get initials of player 
	printf("Please enter your initials(three) seperated by a space: \n"); 

	gets(player) ; 

	printf("these are the intials: %s \n", player);

	return ; 
}


//this function will ask the user for the level of difficult that they would like to play. 
//return difficulty as an int. 
void get_difficulty(int *difficulty)
{

	//select the difficult 
	printf("Please select a level 1(easiest) through 5(hardest) that you would like to play: \n"); 
	
	scanf("%d", difficulty); 

	printf("This is the difficulty %d \n", difficulty) ; 

	return ;

}




//This function will make the four "random" numbers on the specified domain. 
void random_values(int *d1, int *d2, int *d3,int *d4, int max , int min)
{
	srand ((unsigned int) time (NULL));	

	*d1 = rand() % max + (min); 

	*d2 = rand() % max + (min); 

	*d3 = rand() % max + (min); 

	*d4 = rand() % max + (min); 


}


//level 1 of the game which is simple addition and subtraction. 
//relies on the random values function. 
//This function will add 1 to the user_points for a correct value and subtract 1 if incorrect. 


//This function tracks the correct answer with the "num_correct" variable. This was needed because 
// if I tracked using the "user_points" variable would only account for points instead of the actual 
//number of problems that were correct.  (my first solution only relied on user_points variable). 
//this way each problem will in fact get harder everytime a player gets a correct answer.

void level_1(int d1, int d2, int d3, int d4, int *user_points, int user_answer, int comp_answer)
{
	int ii = 0 ;

	int num_correct = 0 ; 

	for(ii = 0; ii < 10; ii++)
	{


	if(num_correct == 0)
		{
			random_values(&d1, &d2, &d3, &d4, 2, 1) ; 

			printf("Evaluate: %d + %d = \n", d1, d2); 

			scanf("%d", &user_answer); 

			comp_answer = d1 + d2; 

			if(user_answer == comp_answer)
			{
				printf("That's correct!\n Nice Work! \n"); 

				*user_points += 1; 

				num_correct += 1 ; 
			}
			else {
				printf("Sorry that's incorrect \n");
				printf("The correct answer is: %d \n", comp_answer); 

				*user_points -= 1; 
			}

		}

	else if(num_correct == 1)
		{
			random_values(&d1, &d2, &d3, &d4, 2, 1) ; 

			printf("Evaluate: %d - %d = \n", d1, d2); 

			scanf("%d", &user_answer); 

			comp_answer = d1 - d2; 

			if(user_answer == comp_answer)
			{
				printf("That's correct!\n Nice Work! \n"); 

				*user_points += 1; 

				num_correct += 1 ; 
			}
			else {
				printf("Sorry that's incorrect \n");
				printf("The correct answer is: %d \n", comp_answer); 

				*user_points -= 1; 
			}

		}

	else if(num_correct == 2)
		{
			random_values(&d1, &d2, &d3, &d4, 4, 1) ; 

			printf("Evaluate: %d + %d = \n", d1, d2); 

			scanf("%d", &user_answer); 

			comp_answer = d1 + d2; 

			if(user_answer == comp_answer)
			{
				printf("That's correct!\n Nice Work! \n"); 

				*user_points += 1; 

				num_correct += 1 ; 
			}
			else {
				printf("Sorry that's incorrect \n");
				printf("The correct answer is: %d \n", comp_answer); 

				*user_points -= 1; 
			}

		}
		

	else if(num_correct == 3 )
		{
			random_values(&d1, &d2, &d3, &d4, 4, 1) ; 

			printf("Evaluate: %d - %d = \n", d1, d2); 

			scanf("%d", &user_answer); 

			comp_answer = d1 - d2; 

			if(user_answer == comp_answer)
			{
				printf("That's correct!\n Nice Work! \n"); 

				*user_points += 1; 
				num_correct += 1 ; 
			}
			else {
				printf("Sorry that's incorrect \n");
				printf("The correct answer is: %d \n", comp_answer); 

				*user_points -= 1; 
			}

		}


	else if(num_correct == 4)
		{
			random_values(&d1, &d2, &d3, &d4, 4, 1) ; 

			printf("Evaluate: %d - %d = \n", d1, d2); 

			scanf("%d", &user_answer); 

			comp_answer = d1 - d2; 

			if(user_answer == comp_answer)
			{
				printf("That's correct!\n Nice Work! \n"); 

				*user_points += 1; 

				num_correct += 1 ; 
			}
			else {
				printf("Sorry that's incorrect \n");
				printf("The correct answer is: %d \n", comp_answer); 

				*user_points -= 1; 
			}

		}	

		

	else if(num_correct == 5)
		{
			random_values(&d1, &d2, &d3, &d4, 7, 1) ; 

			printf("Evaluate: %d + %d = \n", d1, d2); 

			scanf("%d", &user_answer); 

			comp_answer = d1 + d2; 

			if(user_answer == comp_answer)
			{
				printf("That's correct!\n Nice Work! \n"); 

				*user_points += 1; 
				num_correct += 1 ; 
			}
			else {
				printf("Sorry that's incorrect \n");
				printf("The correct answer is: %d \n", comp_answer); 

				*user_points -= 1; 
			}

		}

	else if(num_correct == 6)
		{
			random_values(&d1, &d2, &d3, &d4, 4, 1) ; 

			printf("Evaluate: %d + %d + %d = \n", d1, d2, d3); 

			scanf("%d", &user_answer); 

			comp_answer = d1 + d2 + d3; 

			if(user_answer == comp_answer)
			{
				printf("That's correct!\n Nice Work! \n"); 

				*user_points += 1; 
				num_correct += 1 ; 
			}
			else {
				printf("Sorry that's incorrect \n");
				printf("The correct answer is: %d \n", comp_answer); 

				*user_points -= 1; 
			}

		}


	else if(num_correct == 7)
		{
			random_values(&d1, &d2, &d3, &d4, 4, 1) ; 

			printf("Evaluate: %d + %d - %d = \n", d1, d2, d3); 

			scanf("%d", &user_answer); 

			comp_answer = d1 + d2 - d3; 

			if(user_answer == comp_answer)
			{
				printf("That's correct!\n Nice Work! \n"); 

				*user_points += 1; 
				num_correct += 1 ; 
			}
			else {
				printf("Sorry that's incorrect \n");
				printf("The correct answer is: %d \n", comp_answer); 

				*user_points -= 1; 
			}

		}

	else if(num_correct == 8)
		{
			random_values(&d1, &d2, &d3, &d4, 7, 1) ; 

			printf("Evaluate: %d + %d + %d = \n", d1, d2, d3); 

			scanf("%d", &user_answer); 

			comp_answer = d1 + d2 + d3; 

			if(user_answer == comp_answer)
			{
				printf("That's correct!\n Nice Work! \n"); 

				*user_points += 1; 
				num_correct += 1 ; 
			}
			else {
				printf("Sorry that's incorrect \n");
				printf("The correct answer is: %d \n", comp_answer); 

				*user_points -= 1; 
			}

		}

	else if(num_correct == 9)
		{
			random_values(&d1, &d2, &d3, &d4, 7, 1) ; 

			printf("Evaluate: %d + %d - %d = \n", d1, d2, d3); 

			scanf("%d", &user_answer); 

			comp_answer = d1 + d2 - d3; 

			if(user_answer == comp_answer)
			{
				printf("That's correct!\n Nice Work! \n"); 

				*user_points += 1; 
				num_correct += 1 ; 
			}
			else {
				printf("Sorry that's incorrect \n");
				printf("The correct answer is: %d \n", comp_answer); 

				*user_points -= 1; 
			}

		}

	//not needed because zero based indexing. 
	/*else if(*user_points == 10)
		{
			random_values(&d1, &d2, &d3, &d4, 9, 1) ; 

			printf("Evaluate: %d - %d - %d = \n", d1, d2, d3); 

			scanf("%d", &user_answer); 

			comp_answer = d1 - d2 - d3; 

			if(user_answer == comp_answer)
			{
				printf("That's correct!\n Nice Work! \n"); 

				*user_points += 1; 
			}

		}
		*/
	
	}

	printf("This is how many points you earned: %d", *user_points); 

	return ; 

}


//level 2 of the game which is simple single digit positive multiplication. 
//this relies on the random values function. 
void level_2(int d1, int d2, int d3, int d4, int *user_points, int user_answer, int comp_answer)
{
	

	int ii = 0 ; 

	int num_correct = 0; 

	for(ii = 0; ii < 10; ii++)
	{


		if(num_correct == 0)
		{
			random_values(&d1, &d2, &d3, &d4, 2, 1) ; 

			d2 = 0; 

			printf("Evaluate: %d * %d = \n", d1, d2); 

			scanf("%d", &user_answer); 

			comp_answer = d1 * d2; 

			if(user_answer == comp_answer)
			{
				printf("That's correct!\n Nice Work! \n"); 

				*user_points += 2; 
				num_correct += 1; 
			}
			else{
				printf("Sorry that is not correct. \n"); 
				printf("The correct answer is: %d \n", comp_answer);

				*user_points -= 2; 
			}

		}


		else if( num_correct == 1 )
		{
			random_values(&d1, &d2, &d3, &d4, 2, 1) ; 

			d1 = 0; 

			printf("Evaluate: %d * %d = \n", d1, d2); 

			scanf("%d", &user_answer); 

			comp_answer = d1 * d2; 

			if(user_answer == comp_answer)
			{
				printf("That's correct!\n Nice Work! \n"); 

				*user_points += 2; 
				num_correct += 1; 
			}
			else{
				printf("Sorry that is not correct. \n"); 
				printf("The correct answer is: %d \n", comp_answer);

				*user_points -= 2; 
			}

		}



		else if(num_correct == 2)
		{
			random_values(&d1, &d2, &d3, &d4, 4, 1) ; 

			printf("Evaluate: %d * %d = \n", d1, d2); 

			scanf("%d", &user_answer); 

			comp_answer = d1 * d2; 

			if(user_answer == comp_answer)
			{
				printf("That's correct!\n Nice Work! \n"); 

				*user_points += 2; 
				num_correct += 1; 
			}
			else{
				printf("Sorry that is not correct. \n"); 
				printf("The correct answer is: %d \n", comp_answer);

				*user_points -= 2; 
			}

		}



		else if(num_correct == 3)
		{
			random_values(&d1, &d2, &d3, &d4, 4, 1) ; 

			printf("Evaluate: %d * %d = \n", d1, d2); 

			scanf("%d", &user_answer); 

			comp_answer = d1 * d2; 

			if(user_answer == comp_answer)
			{
				printf("That's correct!\n Nice Work! \n"); 

				*user_points += 2; 
				num_correct += 1; 
			}
			else{
				printf("Sorry that is not correct. \n"); 
				printf("The correct answer is: %d \n", comp_answer);

				*user_points -= 2; 
			}

		}


		else if(num_correct == 4)
		{
			random_values(&d1, &d2, &d3, &d4, 5, 1) ; 

			printf("Evaluate: %d * %d = \n", d1, d2); 

			scanf("%d", &user_answer); 

			comp_answer = d1 * d2; 

			if(user_answer == comp_answer)
			{
				printf("That's correct!\n Nice Work! \n"); 

				*user_points += 2; 
				num_correct += 1; 
			}
			else{
				printf("Sorry that is not correct. \n"); 
				printf("The correct answer is: %d \n", comp_answer);

				*user_points -= 2; 
			}

		}


		else if(num_correct == 5)
		{
			random_values(&d1, &d2, &d3, &d4, 6, 1) ; 

			printf("Evaluate: %d * %d = \n", d1, d2); 

			scanf("%d", &user_answer); 

			comp_answer = d1 * d2; 

			if(user_answer == comp_answer)
			{
				printf("That's correct!\n Nice Work! \n"); 

				*user_points += 2; 
				num_correct += 1; 
			}
			else{
				printf("Sorry that is not correct. \n"); 
				printf("The correct answer is: %d \n", comp_answer);

				*user_points -= 2; 
			}

		}


		else if(num_correct == 6)
		{
			random_values(&d1, &d2, &d3, &d4, 7, 1) ; 

			printf("Evaluate: %d * %d = \n", d1, d2); 

			scanf("%d", &user_answer); 

			comp_answer = d1 * d2; 

			if(user_answer == comp_answer)
			{
				printf("That's correct!\n Nice Work! \n"); 

				*user_points += 2; 
				num_correct += 1; 
			}
			else{
				printf("Sorry that is not correct. \n"); 
				printf("The correct answer is: %d \n", comp_answer);

				*user_points -= 2; 
			}

		}


		else if(num_correct == 7)
		{
			random_values(&d1, &d2, &d3, &d4, 8, 1) ; 

			printf("Evaluate: %d * %d = \n", d1, d2); 

			scanf("%d", &user_answer); 

			comp_answer = d1 * d2; 

			if(user_answer == comp_answer)
			{
				printf("That's correct!\n Nice Work! \n"); 

				*user_points += 2; 
				num_correct += 1; 
			}
			else{
				printf("Sorry that is not correct. \n"); 
				printf("The correct answer is: %d \n", comp_answer);

				*user_points -= 2; 
			}

		}


		else if(num_correct == 8)
		{
			random_values(&d1, &d2, &d3, &d4, 9, 1) ; 

			printf("Evaluate: %d * %d = \n", d1, d2); 

			scanf("%d", &user_answer); 

			comp_answer = d1 * d2; 

			if(user_answer == comp_answer)
			{
				printf("That's correct!\n Nice Work! \n"); 

				*user_points += 2; 
				num_correct += 1; 
			}
			else{
				printf("Sorry that is not correct. \n"); 
				printf("The correct answer is: %d \n", comp_answer);

				*user_points -= 2; 
			}

		}


		else if(num_correct == 9)
		{
			random_values(&d1, &d2, &d3, &d4, 9, 1) ; 

			d1 = 9 ; 
			d2 = 9 ; 

			printf("Evaluate: %d * %d = \n", d1, d2); 

			scanf("%d", &user_answer); 

			comp_answer = d1 * d2; 

			if(user_answer == comp_answer)
			{
				printf("That's correct!\n Nice Work! \n"); 

				*user_points += 2; 
				num_correct += 1; 
			}
			else{
				printf("Sorry that is not correct. \n"); 
				printf("The correct answer is: %d \n", comp_answer);

				*user_points -= 2; 
			}

		}

		printf("You earned %d points during this round \n", *user_points);
	}

	return ; 
}


//level 3 of the game which is the division with positive single digit numbers. 
//this relies on the random values function.
void level_3(int d1, int d2, int d3, int d4, int *user_points, int user_answer, int comp_answer)
{
	int user_remainder = 0, comp_remainder = 0 ; 

	int num_correct = 0 ; 

	int ii = 0 ; 

	for(ii = 0; ii < 10; ii++)
	{


		if(num_correct == 0)
		{
			random_values(&d1, &d2, &d3, &d4, 2, 1) ; 

			printf("Evaluate: %d / %d = value R value \n", d1, d2); 

			scanf("%d %d", &user_answer, &user_remainder); 

			comp_answer = d1 / d2; 

			comp_remainder = d1 % d2 ; 

			if(user_answer == comp_answer && user_remainder == comp_remainder)
			{
				printf("That's correct!\n Nice Work! \n"); 

				printf("The correct answer is: %d R %d \n", comp_answer, comp_remainder); 

				*user_points += 3; 
				num_correct += 1; 
			}

			else{
				printf("Sorry that's not the correct answer. \n"); 
				printf("The correct answer is: %d R %d \n", comp_answer, comp_remainder); 
				*user_points -= 3; 
			}

		
	}

		else if(num_correct == 1)
		{
			random_values(&d1, &d2, &d3, &d4, 3, 1) ; 

			printf("Evaluate: %d / %d = value R value \n", d1, d2); 

			scanf("%d %d", &user_answer, &user_remainder); 

			comp_answer = d1 / d2; 

			comp_remainder = d1 % d2 ; 

			if(user_answer == comp_answer && user_remainder == comp_remainder)
			{
				printf("That's correct!\n Nice Work! \n"); 

				printf("The correct answer is: %d R %d \n", comp_answer, comp_remainder); 

				*user_points += 3;
				num_correct += 1;
			}

			else{
				printf("Sorry that's not the correct answer. \n"); 
				printf("The correct answer is: %d R %d \n", comp_answer, comp_remainder); 
				
				*user_points -= 3; 
			}

		
	}


		else if(num_correct == 2)
		{
			random_values(&d1, &d2, &d3, &d4, 4, 1) ; 

			printf("Evaluate: %d / %d = value R value \n", d1, d2); 

			scanf("%d %d", &user_answer, &user_remainder); 

			comp_answer = d1 / d2; 

			comp_remainder = d1 % d2 ; 

			if(user_answer == comp_answer && user_remainder == comp_remainder)
			{
				printf("That's correct!\n Nice Work! \n"); 

				printf("The correct answer is: %d R %d \n", comp_answer, comp_remainder); 

				*user_points += 3;

				num_correct += 1;
			}

			else{
				printf("Sorry that's not the correct answer. \n"); 
				printf("The correct answer is: %d R %d \n", comp_answer, comp_remainder); 

				*user_points -= 3 ; 
			}

		
	}

		else if(num_correct == 3)
		{
			random_values(&d1, &d2, &d3, &d4, 5, 1) ; 

			printf("Evaluate: %d / %d = value R value \n", d1, d2); 

			scanf("%d %d", &user_answer, &user_remainder); 

			comp_answer = d1 / d2; 

			comp_remainder = d1 % d2 ; 

			if(user_answer == comp_answer && user_remainder == comp_remainder)
			{
				printf("That's correct!\n Nice Work! \n"); 

				printf("The correct answer is: %d R %d \n", comp_answer, comp_remainder); 

				*user_points += 3; 

				num_correct += 1;
			}

			else{
				printf("Sorry that's not the correct answer. \n"); 
				printf("The correct answer is: %d R %d \n", comp_answer, comp_remainder); 

				*user_points -= 3; 
			}

		
	}

		else if(num_correct == 4)
		{
			random_values(&d1, &d2, &d3, &d4, 6, 1) ; 

			printf("Evaluate: %d / %d = value R value \n", d1, d2); 

			scanf("%d %d", &user_answer, &user_remainder); 

			comp_answer = d1 / d2; 

			comp_remainder = d1 % d2 ; 

			if(user_answer == comp_answer && user_remainder == comp_remainder)
			{
				printf("That's correct!\n Nice Work! \n"); 

				printf("The correct answer is: %d R %d \n", comp_answer, comp_remainder); 

				*user_points += 3; 

				num_correct += 1; 
			}

			else{
				printf("Sorry that's not the correct answer. \n"); 
				printf("The correct answer is: %d R %d \n", comp_answer, comp_remainder); 

				*user_points -= 3; 

			}

		
	}

		else if(num_correct == 5)
		{
			random_values(&d1, &d2, &d3, &d4, 7, 1) ; 

			printf("Evaluate: %d / %d = value R value \n", d1, d2); 

			scanf("%d %d", &user_answer, &user_remainder); 

			comp_answer = d1 / d2; 

			comp_remainder = d1 % d2 ; 

			if(user_answer == comp_answer && user_remainder == comp_remainder)
			{
				printf("That's correct!\n Nice Work! \n"); 

				printf("The correct answer is: %d R %d \n", comp_answer, comp_remainder); 

				*user_points += 3;

				num_correct += 1;
			}

			else{
				printf("Sorry that's not the correct answer. \n"); 
				printf("The correct answer is: %d R %d \n", comp_answer, comp_remainder); 

				*user_points -= 3; 

			}

		
	}

		else if(num_correct == 6)
		{
			random_values(&d1, &d2, &d3, &d4, 8, 1) ; 

			printf("Evaluate: %d / %d = value R value \n", d1, d2); 

			scanf("%d %d", &user_answer, &user_remainder); 

			comp_answer = d1 / d2; 

			comp_remainder = d1 % d2 ; 

			if(user_answer == comp_answer && user_remainder == comp_remainder)
			{
				printf("That's correct!\n Nice Work! \n"); 

				printf("The correct answer is: %d R %d \n", comp_answer, comp_remainder); 

				*user_points += 3; 

				num_correct += 1;
			}

			else{
				printf("Sorry that's not the correct answer. \n"); 
				printf("The correct answer is: %d R %d \n", comp_answer, comp_remainder); 

				*user_points -= 3; 
			}

		
	}


		else if(num_correct == 7)
		{
			random_values(&d1, &d2, &d3, &d4, 3, 1) ; 

			printf("Evaluate: %d / %d = value R value \n", d1, d2); 

			scanf("%d %d", &user_answer, &user_remainder); 

			comp_answer = d1 / d2; 

			comp_remainder = d1 % d2 ; 

			if(user_answer == comp_answer && user_remainder == comp_remainder)
			{
				printf("That's correct!\n Nice Work! \n"); 

				printf("The correct answer is: %d R %d \n", comp_answer, comp_remainder); 

				*user_points += 3; 

				num_correct += 1;
			}

			else{
				printf("Sorry that's not the correct answer. \n"); 
				printf("The correct answer is: %d R %d \n", comp_answer, comp_remainder); 

				*user_points -= 3; 
			}

		
	}

		else if(num_correct == 8)
		{
			random_values(&d1, &d2, &d3, &d4, 9, 1) ; 

			printf("Evaluate: %d / %d = value R value \n", d1, d2); 

			scanf("%d %d", &user_answer, &user_remainder); 

			comp_answer = d1 / d2; 

			comp_remainder = d1 % d2 ; 

			if(user_answer == comp_answer && user_remainder == comp_remainder)
			{
				printf("That's correct!\n Nice Work! \n"); 

				printf("The correct answer is: %d R %d \n", comp_answer, comp_remainder); 

				*user_points += 3; 

				num_correct += 1;
			}

			else{
				printf("Sorry that's not the correct answer. \n"); 
				printf("The correct answer is: %d R %d \n", comp_answer, comp_remainder); 

				*user_points -= 3; 
			}

		
	}


		else if(num_correct == 9)
		{
			random_values(&d1, &d2, &d3, &d4, 9, 1) ; 

			printf("Evaluate: %d / %d = value R value \n", d1, d2); 

			scanf("%d %d", &user_answer, &user_remainder); 

			comp_answer = d1 / d2; 

			comp_remainder = d1 % d2 ; 

			if(user_answer == comp_answer && user_remainder == comp_remainder)
			{
				printf("That's correct!\n Nice Work! \n"); 

				printf("The correct answer is: %d R %d \n", comp_answer, comp_remainder); 

				*user_points += 3; 

				num_correct += 1;
			}

			else{
				printf("Sorry that's not the correct answer. \n"); 
				printf("The correct answer is: %d R %d \n", comp_answer, comp_remainder); 

				*user_points -= 3; 
			}

		
	}

	printf("Great work you earned %d points! \n", *user_points); 

	}

			return ; 
}


//level 4 of the game which has addition, subtraction, division and multiplication problems. 
//this relies on the random values function. 
void level_4(int d1, int d2, int d3, int d4, int *user_points, int user_answer, int comp_answer)
{
	int ii = 0 ; 

	int num_correct = 0 ; 

	int user_remainder = 0 , comp_remainder = 0 ; 

	for(ii=0; ii<10; ii++)
	{


		if(num_correct == 0)
		{
			random_values(&d1, &d2, &d3, &d4, 5, 1) ; 

			printf("Evaluate: %d + %d / %d = integer R integer \n", d1, d2, d3); 

			scanf("%d %d", &user_answer, &user_remainder); 

			comp_answer = (d1 + d2) / d3; 

			comp_remainder = (d1 + d2) % d3 ; 

			if(user_answer == comp_answer && user_remainder == comp_remainder)
			{
				printf("That's correct!\n Nice Work! \n"); 

				printf("The correct answer is: %d R %d \n", comp_answer, comp_remainder); 

				*user_points += 4; 

				num_correct += 1; 
			}

			else{
				printf("Sorry that's not the correct answer. \n"); 
				printf("The correct answer is: %d R %d \n", comp_answer, comp_remainder); 

				*user_points -= 4 ; 
			}

		
	}

		else if(num_correct == 1)
		{
			random_values(&d1, &d2, &d3, &d4, 10, 1) ; 

			printf("Evaluate: %d + %d / %d = integer R integer \n", d1, d2, d3); 

			scanf("%d %d", &user_answer, &user_remainder); 

			comp_answer = (d1 + d2) / d3; 

			comp_remainder = (d1 + d2) % d3 ; 

			if(user_answer == comp_answer && user_remainder == comp_remainder)
			{
				printf("That's correct!\n Nice Work! \n"); 

				printf("The correct answer is: %d R %d \n", comp_answer, comp_remainder); 

				*user_points += 4;

				num_correct += 1; 
			}

			else{
				printf("Sorry that's not the correct answer. \n"); 
				printf("The correct answer is: %d R %d \n", comp_answer, comp_remainder); 

				*user_points -= 4; 
			}

		
	}


		else if(num_correct == 2)
		{
			random_values(&d1, &d2, &d3, &d4, 18, -9) ; 

			printf("Evaluate: %d + %d / %d = integer R integer \n", d1, d2, d3); 

			scanf("%d %d", &user_answer, &user_remainder); 

			comp_answer = (d1 + d2) / d3; 

			comp_remainder = (d1 + d2) % d3 ; 

			if(user_answer == comp_answer && user_remainder == comp_remainder)
			{
				printf("That's correct!\n Nice Work! \n"); 

				printf("The correct answer is: %d R %d \n", comp_answer, comp_remainder); 

				*user_points += 4; 

				num_correct += 1 ; 
			}

			else{
				printf("Sorry that's not the correct answer. \n"); 
				printf("The correct answer is: %d R %d \n", comp_answer, comp_remainder); 

				*user_points -= 4;

			}

		
	}

		else if(num_correct == 3)
		{
			random_values(&d1, &d2, &d3, &d4, 18, -9) ; 

			printf("Evaluate: %d / %d + %d = integer R integer \n", d1, d2, d3); 

			scanf("%d %d", &user_answer, &user_remainder); 

			comp_answer = d1 /(d2 + d3); 

			comp_remainder = d1 % (d2 + d3) ; 

			if(user_answer == comp_answer && user_remainder == comp_remainder)
			{
				printf("That's correct!\n Nice Work! \n"); 

				printf("The correct answer is: %d R %d \n", comp_answer, comp_remainder); 

				*user_points += 4; 

				num_correct += 1; 
			}

			else{
				printf("Sorry that's not the correct answer. \n"); 
				printf("The correct answer is: %d R %d \n", comp_answer, comp_remainder); 

				*user_points -= 4;
			}

		
	}

		else if(num_correct == 4)
		{
			random_values(&d1, &d2, &d3, &d4, 18, -9) ; 

			printf("Evaluate: %d - %d / %d = integer R integer \n", d1, d2, d3); 

			scanf("%d %d", &user_answer, &user_remainder); 

			comp_answer = (d1 - d2) / d3; 

			comp_remainder = (d1 - d2) % d3 ; 

			if(user_answer == comp_answer && user_remainder == comp_remainder)
			{
				printf("That's correct!\n Nice Work! \n"); 

				printf("The correct answer is: %d R %d \n", comp_answer, comp_remainder); 

				*user_points += 4; 

				num_correct += 1 ; 
			}

			else{
				printf("Sorry that's not the correct answer. \n"); 
				printf("The correct answer is: %d R %d \n", comp_answer, comp_remainder); 

				*user_points -= 4;
			}

		
	}


		else if(num_correct == 5)
		{
			random_values(&d1, &d2, &d3, &d4, 18, -9) ; 

			printf("Evaluate: (%d / %d) / %d = integer R integer \n", d1, d2, d3); 

			scanf("%d %d", &user_answer, &user_remainder); 

			comp_answer = (d1 / d2) / d3; 

			comp_remainder = (d1 / d2) % d3 ; 

			if(user_answer == comp_answer && user_remainder == comp_remainder)
			{
				printf("That's correct!\n Nice Work! \n"); 

				printf("The correct answer is: %d R %d \n", comp_answer, comp_remainder); 

				*user_points += 4; 

				num_correct += 1 ;
			}

			else{
				printf("Sorry that's not the correct answer. \n"); 
				printf("The correct answer is: %d R %d \n", comp_answer, comp_remainder); 

				*user_points -= 4;
			}

		
	}

		else if(num_correct == 6)
		{
			random_values(&d1, &d2, &d3, &d4, 18, -9) ; 

			printf("Evaluate: %d +( %d / %d ) = integer R integer \n", d1, d2, d3); 

			scanf("%d %d", &user_answer, &user_remainder); 

			comp_answer = d1 + (d2 / d3); 

			comp_remainder = d1 + ( d2 % d3) ; 

			if(user_answer == comp_answer && user_remainder == comp_remainder)
			{
				printf("That's correct!\n Nice Work! \n"); 

				printf("The correct answer is: %d R %d \n", comp_answer, comp_remainder); 

				*user_points += 4;

				num_correct += 1; 
			}

			else{
				printf("Sorry that's not the correct answer. \n"); 
				printf("The correct answer is: %d R %d \n", comp_answer, comp_remainder); 

				*user_points -= 4;
			}


		
	}


		else if(num_correct == 7)
		{
			random_values(&d1, &d2, &d3, &d4, 18, -9) ; 

			printf("Evaluate: %d +( %d / %d) ) = integer R integer \n", d1, d2, d3); 

			scanf("%d %d", &user_answer, &user_remainder); 

			comp_answer = d1 + (d2 / d3); 

			comp_remainder = d1 + ( d2 % d3) ; 

			if(user_answer == comp_answer && user_remainder == comp_remainder)
			{
				printf("That's correct!\n Nice Work! \n"); 

				printf("The correct answer is: %d R %d \n", comp_answer, comp_remainder); 

				*user_points += 4; 

				num_correct += 1; 
			}

			else{
				printf("Sorry that's not the correct answer. \n"); 
				printf("The correct answer is: %d R %d \n", comp_answer, comp_remainder); 

				*user_points -= 4;
			}

	}


		else if(num_correct == 8 )
		{
			random_values(&d1, &d2, &d3, &d4, 18, -9) ; 

			printf("Evaluate: %d +( %d / %d ) = integer R integer \n", d1, d2, d3); 

			scanf("%d %d", &user_answer, &user_remainder); 

			comp_answer = (d1 * d2) / d3; 

			comp_remainder = ( d1 *  d2 ) % d3 ; 

			if(user_answer == comp_answer && user_remainder == comp_remainder)
			{
				printf("That's correct!\n Nice Work! \n"); 

				printf("The correct answer is: %d R %d \n", comp_answer, comp_remainder); 

				*user_points += 4; 

				num_correct += 1; 
			}

			else{
				printf("Sorry that's not the correct answer. \n"); 
				printf("The correct answer is: %d R %d \n", comp_answer, comp_remainder); 

				*user_points -= 4;
			}

	}

		else if(num_correct == 9 )
		{
			random_values(&d1, &d2, &d3, &d4, 18, -9) ; 

			printf("Evaluate: %d +( %d / %d ) = integer R integer \n", d1, d2, d3); 

			scanf("%d %d", &user_answer, &user_remainder); 

			comp_answer = (d1 * d2) / d3; 

			comp_remainder = (d1 * d2) % d3 ; 

			if(user_answer == comp_answer && user_remainder == comp_remainder)
			{
				printf("That's correct!\n Nice Work! \n"); 

				printf("The correct answer is: %d R %d \n", comp_answer, comp_remainder); 

				*user_points += 4; 

				num_correct += 1; 
			}

			else{
				printf("Sorry that's not the correct answer. \n"); 
				printf("The correct answer is: %d R %d \n", comp_answer, comp_remainder); 

				*user_points -= 4;
			}

		}

		printf("You earned %d points this round \n", *user_points); 

		}
	return ; 

}


//level 5 of the game which has addition, subtraction, division and multiplication problems. 
//this relies on the random values function. 
void level_5(int d1, int d2, int d3, int d4, int *user_points, int user_answer, int comp_answer)
{

	int ii = 0 ; 

	int num_correct = 0 ; 
	
	int user_remainder = 0 , comp_remainder = 0 ; 

	for(ii=0; ii<10; ii++)
	{


		if(num_correct == 0)
		{
			random_values(&d1, &d2, &d3, &d4, 201, -100) ; 

			printf("Evaluate: %d + %d / %d = integer R integer \n", d1, d2, d3); 

			scanf("%d %d", &user_answer, &user_remainder); 

			comp_answer = (d1 + d2) / d3; 

			comp_remainder = (d1 + d2) % d3 ; 

			if(user_answer == comp_answer && user_remainder == comp_remainder)
			{
				printf("That's correct!\n Nice Work! \n"); 

				printf("The correct answer is: %d R %d \n", comp_answer, comp_remainder); 

				*user_points += 5; 

				num_correct += 1 ; 
			}

			else{
				printf("Sorry that's not the correct answer. \n"); 
				printf("The correct answer is: %d R %d \n", comp_answer, comp_remainder); 

				*user_points -= 5; 

			}

		
	}


		else if(num_correct == 1)
		{
			random_values(&d1, &d2, &d3, &d4, 201, -100) ; 

			printf("Evaluate: %d - %d / %d + %d = integer R integer \n", d1, d2, d3, d4); 

			scanf("%d %d", &user_answer, &user_remainder); 

			comp_answer = (d1 + d2) / (d3 + d4); 

			comp_remainder = (d1 + d2) % ( d3 + d4) ; 

			if(user_answer == comp_answer && user_remainder == comp_remainder)
			{
				printf("That's correct!\n Nice Work! \n"); 

				printf("The correct answer is: %d R %d \n", comp_answer, comp_remainder); 

				*user_points += 5; 

				num_correct += 1; 
			}

			else{
				printf("Sorry that's not the correct answer. \n"); 
				printf("The correct answer is: %d R %d \n", comp_answer, comp_remainder); 

				*user_points -= 5; 
			}

		
	}


		else if(num_correct == 2)
		{
			random_values(&d1, &d2, &d3, &d4, 201, -100) ; 

			printf("Evaluate: ( %d / %d ) / ( %d / %d ) = integer R integer \n", d1, d2, d3, d4); 

			scanf("%d %d", &user_answer, &user_remainder); 

			comp_answer = (d1 / d2) / (d3 / d4); 

			comp_remainder = (d1 / d2) % ( d3 / d4) ; 

			if(user_answer == comp_answer && user_remainder == comp_remainder)
			{
				printf("That's correct!\n Nice Work! \n"); 

				printf("The correct answer is: %d R %d \n", comp_answer, comp_remainder); 

				*user_points += 5;

				num_correct += 1; 
			}

			else{
				printf("Sorry that's not the correct answer. \n"); 
				printf("The correct answer is: %d R %d \n", comp_answer, comp_remainder); 

				*user_points -= 5; 
			}

		
	}


		else if(num_correct == 3)
		{
			random_values(&d1, &d2, &d3, &d4, 401, -200) ; 

			printf("Evaluate: ( %d / %d ) + ( %d * %d ) = integer R integer \n", d1, d2, d3, d4); 

			scanf("%d %d", &user_answer, &user_remainder); 

			comp_answer = (d1 / d2) + (d3 * d4); 

			comp_remainder = (d1 % d2)  ; 

			if(user_answer == comp_answer && user_remainder == comp_remainder)
			{
				printf("That's correct!\n Nice Work! \n"); 

				printf("The correct answer is: %d R %d \n", comp_answer, comp_remainder); 

				*user_points += 5;

				num_correct += 1; 
			}

			else{
				printf("Sorry that's not the correct answer. \n"); 
				printf("The correct answer is: %d R %d \n", comp_answer, comp_remainder); 

				*user_points -= 5; 
			}

		
	}


		else if(num_correct == 4)
		{
			random_values(&d1, &d2, &d3, &d4, 401, -200) ; 

			printf("Evaluate: ( %d * %d ) / ( %d * %d ) = integer R integer \n", d1, d2, d3, d4); 

			scanf("%d %d", &user_answer, &user_remainder); 

			comp_answer = (d1 * d2) / (d3 * d4); 

			comp_remainder = (d1 * d2) % ( d3 * d4) ; 

			if(user_answer == comp_answer && user_remainder == comp_remainder)
			{
				printf("That's correct!\n Nice Work! \n"); 

				printf("The correct answer is: %d R %d \n", comp_answer, comp_remainder); 

				*user_points += 5;

				num_correct += 1; 
			}

			else{
				printf("Sorry that's not the correct answer. \n"); 
				printf("The correct answer is: %d R %d \n", comp_answer, comp_remainder); 

				*user_points -= 5; 
			}

		
	}


		else if(num_correct == 5)
		{
			random_values(&d1, &d2, &d3, &d4, 401, -200) ; 

			printf("Evaluate: ( %d * %d * %d ) / %d  = integer R integer \n", d1, d2, d3, d4); 

			scanf("%d %d", &user_answer, &user_remainder); 

			comp_answer = (d1 * d2 * d3 ) / d4; 

			comp_remainder = (d1 * d2 * d3 ) % d4; 

			if(user_answer == comp_answer && user_remainder == comp_remainder)
			{
				printf("That's correct!\n Nice Work! \n"); 

				printf("The correct answer is: %d R %d \n", comp_answer, comp_remainder); 

				*user_points += 5;

				num_correct += 1; 
			}

			else{
				printf("Sorry that's not the correct answer. \n"); 
				printf("The correct answer is: %d R %d \n", comp_answer, comp_remainder); 

				*user_points -= 5; 
			}

		
	}


		else if(num_correct == 6)
		{
			random_values(&d1, &d2, &d3, &d4, 401, -200) ; 

			printf("Evaluate:  %d / ( %d * %d * %d ) = integer R integer \n", d1, d2, d3, d4); 

			scanf("%d %d", &user_answer, &user_remainder); 

			comp_answer = d1 / ( d2 * d3 * d4 ); 

			comp_remainder = (d1 * d2 * d3 ) % d4; 

			if(user_answer == comp_answer && user_remainder == comp_remainder)
			{
				printf("That's correct!\n Nice Work! \n"); 

				printf("The correct answer is: %d R %d \n", comp_answer, comp_remainder); 

				*user_points += 5;

				num_correct += 1; 
			}

			else{
				printf("Sorry that's not the correct answer. \n"); 
				printf("The correct answer is: %d R %d \n", comp_answer, comp_remainder); 

				*user_points -= 5; 
			}

		
	}


		else if(num_correct == 7)
		{
			random_values(&d1, &d2, &d3, &d4, 2001, -1000) ; 

			printf("Evaluate:  (%d * %d ) / (%d - %d ) = integer R integer \n", d1, d2, d3, d4); 

			scanf("%d %d", &user_answer, &user_remainder); 

			comp_answer = ( d1 *  d2) / ( d3 - d4 ); 

			comp_remainder = (d1 * d2 )% (d3 - d4); 

			if(user_answer == comp_answer && user_remainder == comp_remainder)
			{
				printf("That's correct!\n Nice Work! \n"); 

				printf("The correct answer is: %d R %d \n", comp_answer, comp_remainder); 

				*user_points += 5;

				num_correct += 1; 
			}

			else{
				printf("Sorry that's not the correct answer. \n"); 
				printf("The correct answer is: %d R %d \n", comp_answer, comp_remainder); 

				*user_points -= 5; 
			}

	}



		else if(num_correct == 8)
		{
			random_values(&d1, &d2, &d3, &d4, 10001, -5000) ; 

			printf("Evaluate:  ( %d /  %d ) / ( %d * %d ) = integer R integer \n", d1, d2, d3, d4); 

			scanf("%d %d", &user_answer, &user_remainder); 

			comp_answer = ( d1 /  d2 ) / (d3 * d4 ); 

			comp_remainder = (d1 / d2 ) % ( d3 * d4 ); 

			if(user_answer == comp_answer && user_remainder == comp_remainder)
			{
				printf("That's correct!\n Nice Work! \n"); 

				printf("The correct answer is: %d R %d \n", comp_answer, comp_remainder); 

				*user_points += 5;

				num_correct += 1; 
			}

			else{
				printf("Sorry that's not the correct answer. \n"); 
				printf("The correct answer is: %d R %d \n", comp_answer, comp_remainder); 

				*user_points -= 5; 
			}

		
	}

		else if(num_correct == 9)
		{
			random_values(&d1, &d2, &d3, &d4, 100000, -50000) ; 

			printf("Evaluate:  (%d /  %d) / (%d / %d)  = integer R integer \n", d1, d2, d3, d4); 

			scanf("%d %d", &user_answer, &user_remainder); 

			comp_answer = ( d1 /  d2) / ( d3 * d4 ); 

			comp_remainder = (d1 * d2 ) % (d3  / d4); 

			if(user_answer == comp_answer && user_remainder == comp_remainder)
			{
				printf("That's correct!\n Nice Work! \n"); 

				printf("The correct answer is: %d R %d \n", comp_answer, comp_remainder); 

				*user_points += 5;

				num_correct += 1; 
			}

			else{
				printf("Sorry that's not the correct answer. \n"); 
				printf("The correct answer is: %d R %d \n", comp_answer, comp_remainder); 

				*user_points -= 5; 
			}

		
	}

	printf("you earned %d points during this round. \n" , *user_points); 


	}

	return  ; 
}
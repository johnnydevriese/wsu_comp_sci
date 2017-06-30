#include<stdio.h>
#include<math.h>
#include"calories.h"


double read_double(FILE *infile){

	double d1 = 0; 

	fscanf(infile, "%lf", &d1 );

	//printf("this is the value of d1:%.2lf \n",d1); 

	return d1 ;
}

//this function will read in an integer from the input file. 
int read_integer (FILE *infile) {

	int number = 0 ;

	fscanf(infile, "%d", &number); 

	//printf("This is the value from the file: %d \n", number); 

	 return number; 
 }

char read_letter(FILE *infile) {

	char letter = '/0' ;

	fscanf(infile, "%c", &letter); 

	//printf("This is the value from the file: %d \n", number); 

	 return letter; 
 }




double metabolic_rate(int age, int sex, double weight, double height){

	double BMR = 0; 

	if(sex == 'f'){
		BMR = 66 + (4.35 * weight) + (4.37 * height) + (4.37 * age) ; 
	return BMR;
	}
	else{
		BMR = 66 + (6.73 * weight) + (12.7 * height) + (6.8 * age) ; 
	return BMR;
	}
}

double activity(int activity, double BMR){
	
	switch(activity){
	case 1: 
		BMR = BMR * 1.2; 
		break; 
	case 2: 
		BMR = BMR * 1.375; 
		break; 
	case 3: 
		BMR = BMR * 1.55; 
		break; 
	case 4: 
		BMR = BMR * 1.725; 
	case 5: 
		BMR = BMR * 1.9; 
		break; 
	default: 
	break: 
}

	return BMR; 
}

double bonus(void){

	double bonus = 0 ; 
	char answer = '/0'; 

	printf("did you go to the all star game?"); 
	scanf(" %c", &answer); 

	if(answer == 'y'){
		bonus = 25000 ; 
	}
	else{
		bonus = bonus; 
	}
	

	printf("Were you the regular season MVP?"); 
	scanf(" %c", &answer); 

	if(answer == 'y'){
		bonus = bonus + 75000; }
	else{
		bonus = bonus; 
	}
	

	printf("Were you the World Series MVP?");
	scanf(" %c", &answer); 

	if(answer == 'y'){
		bonus = bonus + 100000;
	}
	else{
		bonus = bonus; 
	}

	printf("Did you win the golden glove award?"); 
	scanf(" %c", &answer);

	if(answer == 'y'){
		bonus = bonus + 50000; 
	}
	else{
		bonus = bonus; 
	}

	printf("Did you win the silver slugger award?"); 
	scanf(" %c", &answer); 

	if(answer == 'y'){
		bonus = bonus + 35000; 
	}
	else{
		bonus = bonus; 
	}

	printf("Were you the home run champ?"); 
	scanf(" %c", &answer); 

	if(answer == 'y'){
		bonus = bonus + 25000; 
	}
	else{
		bonus = bonus; 
	}

	printf("Were you the batting average champ?"); 
	scanf(" %c", &answer); 

	if(answer == 'y'){ 
		bonus = bonus + 25000; 
	}
	else{
		bonus = bonus; 
	}



	return bonus ; 
	}






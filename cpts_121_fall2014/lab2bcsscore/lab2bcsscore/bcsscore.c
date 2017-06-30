#include<stdio.h>
#include<math.h>

int get_harris(void); 

int get_coach_score(void);

double computer_rank(void);

double bcs_score(int harris, int coach, double comp_rank); 

int printing(double bcs); 

int main(void){ 

	int harris = 0, coach = 0; 
	double comp_rank = 0, bcs = 0; 

	harris = get_harris(); 

	coach = get_coach_score(); 

	comp_rank = computer_rank(); 

	bcs = bcs_score(harris, coach, comp_rank); 

	printing(bcs); 


	return(0); 
}

int get_harris(void){
	
	int score = 0; 

	printf("Enter the Harris pole score:"); 
	scanf("%d", &score); 

	return score; 
}

int get_coach_score(void){
	
	int score = 0; 

	printf("Enter the Harris pole score:"); 
	scanf("%d", &score); 

	return score; 
}

double computer_rank(void){
	
	double score = 0; 

	printf("Enter the Harris pole score:"); 
	scanf("%lf", &score); 

	return score; 
}

double bcs_score(int harris, int coach, double comp_rank){

	double bcs_score = 0; 

	bcs_score = ( (harris/(double)2850) + (coach/(double)1475) + comp_rank) / (double)3 ; 

	return bcs_score;
}

int printing(double bcs){

	printf("The BCS score of the team is: %lf \n", bcs); 

	return(0); 
}
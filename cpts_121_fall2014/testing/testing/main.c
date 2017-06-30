#include<stdio.h>
#include<time.h>
#include<stdlib.h>



int main(void){


	srand ((unsigned int) time (NULL));

	int fuck = 0;

	fuck = rand() % 11 + (-5) ;

	printf("%d \n", fuck); 
	



	return 0; 
}
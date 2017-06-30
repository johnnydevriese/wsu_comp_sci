#include<stdio.h>
#include<math.h> 
#include"ifstatements.h"


int main (void){ 

	int num1 = 42, num2 = 7 ; 

	char char1 = 'a', char2 = 'F' ; 

	if(num1 > num2){
	printf("Condition is true! \n" ) ; //only evaluates if condition is true. 
	
	}

	if(char1 <= char2){ 
		printf("char1 is better than char2! \n") ; 

	}

	//determine if a character is uppercasecase? 

	if(char1 >= 'a') && (char1 <= 'Z'){
		printf("%c is casecase \n", char1); 
	}



	return (0); 
}
/* 
description: This program will get user input for the computing the volume of a cone.

Notes:
1.input
2.computations
3.outputs

spot in memory has an address. "if someone wanted to find you they would by your address, and there they would find a bunch of your stuff." 
*/

#include <stdio.h>
#include <math.h>
#define PI 3.14159 //"pound define" statement & pre-processor statement. 

int main(void){
	
	int radius = 0 ; //always initialize variables to zeros!!(good programming practice.)
	int height = 0 ; 
	int volume = 0 ; 
	
	printf("Please enter radius and height for a volume cone equation:");

	scanf("%d%d", &radius , &height ); // addresss of operator is '&'  

	volume = ((double) 1 / (double) 3) * PI * pow(radius,2) * height ; 

	//volume = .33 * PI * radius * radius * height ; 

	printf("volume: %d \n", volume) ; 


	return(0);
}
#include<stdio.h>
#include<math.h>


int main (void){

	//int number = 0 ; 

	//printf("Enter a number:"); 
	//scanf("%d", &number); 

	//result = number % 2; 

	//switch(result){

	//case 0: printf("even \n"); 
	//	break;

	//case 1: printf("odd \n"); 
	//	break; 
	//	
	//default: printf("It's not even or odd \n"); 
	//	break; 
	//}

	//****** doing loops *****

	int counter = 0 ; //initialization expression

	//to creat a loop or iterative statement that counts from 1 to 10 

	while(counter < 10 ){//conditional expression
		

		counter = counter + 1 ; 
		printf("counter: %d\n", counter); //update expression

	}
	//"++" preincrement or postincrement operator. 
	for(counter = 1; counter < 11; counter++){ //counter += 1 ){//counter = counter + 1){
		printf("counter: %d \n", counter); 
	}


	//do while loop: 
	counter = 1; 

	do{
		printf("counter: %d \n", counter); 
		counter = counter + 1; 
	}
	while(counter <= 10);





	return 0; 
}
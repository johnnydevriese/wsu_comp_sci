#include<stdio.h>
#include"enumsAndStrings.h"

int main (void){

	//enum boolean status = FALSE; 
	//Boolean status2 = TRUE; 

	// declare a string? 
	char name[10] = {'b', 'o', 'b', '\0'}; 
	char name2[10] = "andrew" ; 
	char *name3 = "Kees";//placed into immutable memory. 

	char *test1 = "pie"; //immutatble 
	char test2[100] = ""; 

	//printf("Enter a name: "); 
	//scanf("%s", name); 

	//printf("name: %s \n", name2); 

	////finds the length of a string. 
	//printf("length: %d\n", my_strlen(name2)); 


	my_strcpy(test2, test1); 

	printf("result : %s \n", test2); 



	




	return 0 ; 
}
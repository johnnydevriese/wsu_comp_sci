//a lot of linked list business that we're doing today. 



#include"functions.h"

int main(void)
{
	char first[25] = {'\0'}; 
	char last[25] = {'\0'}; 
	char phone[14] = {'\0'}; 
	char email[50] = {'\0'}; 
	char title[25] = {'\0'}; 
	char temp[50] = {'\0'}; 
	
	ContactNode *list = NULL; 
	
	for(int i = 0; i < 3; i++)
	{
		printf("Enter first name: "); 
		gets(first); 
		
		printf("Enter last name:"); 
		
		gets(last); 
		
		printf("Enter phone:"); 
		
		gets(phone); 
		
		printf("enter email:"); 
		
		gets(email);
		
		printf("enter job title");
		
		gets(title); 
	
	
	insertFront (&list, first, last, phone, email, title) ; 
		
	
	}
	
	//implimenting the functions 
	
	//something something etc etc 
	
	//reading in from file and putting out to the file. 
	
	//strtok() and string
	
	//returns a string until the first delimeter. 
	
	//ex Jane, Doe, ######
	//Jane = strtok(char *, ","); 
	//strtok(NULL, ","); 
	
	// a lot of times you can create an array of strings and then fill it that way. 
	//ex: char * list[]
	
	
	
	
	

	
	
	return 0; 
}

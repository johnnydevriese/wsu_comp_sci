//strtok(); 
//sscanf();

#include<stdio.h>


#include<stdlib.h> //malloc()

typedef struct record
{
	char * artist; 
	char * album; 
	char * title; 
	char * genre; 
	struct runtime *  minutes;
//struct length * seconds;  
	int * plays; 
	int * rating; 
	
	struct record * pNext; 
	struct record * pPrev; 
	
}Record; 


typedef struct runtime
{
	int minutes; 
	int seconds; 
}Runtime ;



void menu(); 

Record *read_in(char newString); 

//“load” option reads records from a file into a dynamic doubly linked list
void load(); 

//store” command writes records, in a dynamic doubly linked list, to a file
void store(); 


//Display” prints records, and its attributes to the screen. 
//This command must print either all records or a single record based on a search field.
// A search field may be any of the attributes belonging to a record.
// If a search field matches multiple records, then print the first match to the screen
void display(); 


//insert” option collects information for each new song record and attributes from the user.
// The new song record must be placed into the list based on a selected sort option. 
//By default, songs are inserted into the list alphabetically (‘a’ – ‘z’) according to artist

void insert(); 


// The new song record must be placed into the list based on a selected sort option.
// By default, songs are inserted into the list alphabetically (‘a’ – ‘z’) according to artist. 
void sort(); 

//Delete” removes a record from the list. Deletion is based on song title
void delete(); 

//edit” option must allow the user to find a record in the list with any search field
void edit(); 


// “rate” action must allow the user to assign a value of 1 – 5 to a song; 1 is the lowest rating and 5 is the highest rating
void rate(); 


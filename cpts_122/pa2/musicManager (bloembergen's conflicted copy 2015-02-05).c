#include"musicManager.h"



void menu()
{
	
	int choice; 
	
	
	printf("\n What would you like to do? \n"); 
	
	printf("1. Load \n 2. Store \n 3. Display \n 4. Insert \n "); 
	printf("5. Delete \n 6. Edit \n 7. Sort \n 8. Rate 9. Exit \n "); 
	
		
	
	while(1)
	{
		
		printf("Please enter your choice: \n"); 
		scanf("%d", &choice); 
		
	
		switch(choice)
		{
			case 1: 
			
			//load the song from file. 
			
			break; 
			
			case 2: 
			
			//store the song. 
			
			break; 
			
			case 3: 
			
			//Display (printf) the song info. 
			
			break; 
			
			case 4:
			
			//insert the song in alphabetical order. 
			
			break;
			
			case 5: 
			
			//delete the song. 
			
			break; 
			
			case 6: 
			
			//edit the song. 
			
			break; 
			
			case 7: 
			
			//sort the song
			
			break; 
			
			case 8: 
			
			//rate the song. 
			
			break; 
			
			case 9: 
			
			printf("Exiting the music Manger \n"); 
				exit(0); 
			break; 
			
			//the default is to do nothing and or try again... 
			default: 
			
			printf("Invalid option! \n"); 
		
		}	
		
	}
	
	
}


Record * makeNode(char pNewString, char * field)
{
	char * temp = NULL; 
	
	//fgets(temp,20,infile); 
	
	//creating a struct pMem and setting it to NULL 
	Record *pMem = NULL; 
	
	pMem = (Record *)malloc(sizeof(Record)); 
	
	//remember to use strlen() and when sizeof() are more/less appropriate. 
	pMem ->field = (char *) malloc(sizeof(char) * (strlen(pNewString) + 1) ); //you need enough memory for the string. 
	
	strcpy(pMem->field, pNewString); 
	
	pMem->pNext = NULL; 
	pMem->pPrev = NULL; 
	
	
	return pMem; 
}
	
	
	
void load()
{
	//scan in entire string and store. 
	
	//or scan until a space/null character? 
	fscanf(); 
	
	
	fgets(pMem->artist, 20, infile); 
	
	//put that string into its position in the struct.
	
}


void store()
{
	//write all the records into the outfile. 
	fprintf()
	


	
}



void display()
{
	int flag = 0; 
	
	printf("If you want to display all records enter 1. \n");
	printf("To search for an artists and display their info enter 2 \n"); 
	scanf("%d", &flag); 



	if(flag == 1) 
	{
		//display all the records in the linked list. 
	}
	
	else if(flag == 0) 
	{
		//search for the record 
		
		//print the record
		
	}
		
		
}



void sort()
{
	
	
	
	
	
	
	
	
	
	
	
}




void insert()
{
	
	
	char * artist, title, genre; 
	int * minutes, seconds, plays, rating; 
	
	printf("Enter the artist(s) name: \n"); 
	gets(artist); 
	
	printf("Enter the song title: \n"); 
	gets(title); 
	
	printf("Enter the genre: \n"); 
	gets(genre); 
	
	
	printf("Enter the duration of song in format: minutes seconds \n"); 
	scanf("%d %d", minutes, seconds); 
	
	printf("Enter the number of plays: \n"); 
	scanf("%d", &plays); 
	
	printf("Enter the rating of 1-5: \n"); 
	scanf("%d", &rating); 
	
	
	//make node and put all of these things into it and link it into the list alphabetically. 
	
	
}	
	

void delete()
{
	char * delete = NULL; 
	
	printf("Enter the song title that you want to delete: \n"); 
	gets(delete); 
	
	//search for delete in the field and once found remove it. 
	
	
}


void edit()
{
	
	//let the user search for it via any type and then edit it. 
	
	
}
	
	






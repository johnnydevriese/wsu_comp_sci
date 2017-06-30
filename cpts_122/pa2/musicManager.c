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


Record * makeNode(char * Album, char * Title, char * Genre, int * Minutes, int * Seconds, int * Plays, int * Rating)
{
	char * temp = NULL;  
	
	//creating a struct pMem and setting it to NULL 
	Record *pMem = NULL; 
	
	pMem = (Record *)malloc(sizeof(Record)); 
	
	//remember to use strlen() and when sizeof() are more/less appropriate. 
	//allocating memory for the album pointer 
	pMem -> album = (char *) malloc(sizeof(char) * (strlen(Album) + 1) ); //you need enough memory for the string. 
	
	//copying the Album string into the struct. 
	strcpy(pMem->album, Album);
	
	
	pMem->title = (char *) malloc(sizeof(char) * (strlen(Title) + 1); 
	strcpy(pMem->title, Title); 
	
	pMem->Genre = (char *)  malloc(sizeof(char) * (strlen(Genre) + 1); 
	strcpy(pMem->genre, Genre); 
	
	pMem->minutes = (int *) malloc(sizeof(int)); 
	pMem->minutes = Minutes; 
	
	pMem->seconds = (int *) malloc(sizeof(int));  
	pMem->seconds = Seconds;
	
	pMem->plays = (int *) malloc(sizeof(int)); 
	pMem->plays = Plays; 
	
	pMem->rating = (int *) malloc(sizeof(int)); 
	pMem->rating = Rating; 
	 	
		
	pMem->pNext = NULL; 
	
	pMem->pPrev = NULL; 
	
	
	return pMem; 
}
	
	
	

//would only need a single star(*) because you are not editing the linked list. 
void store(Record *pHead, FILE *infile)
{
	//write all the records into the outfile.
	printf("Writing all of the record data to outfile.txt \n"); 
	
	
	while(pHead != NULL)
	{ 
		fputs(phead->artist, infile); 
	
		fputs(pHead->title, infile); 
	
		fputs(phead->genre, infile); 
		
		//dont think this is correct way to acces the struct within the struct. 
		fprintf(infile, "%d", pHead->minutes); 
		
		fprintf(infile, "%d", phead->seconds); 
		
		fprintf(infile, "%d", pHead->plays); 
		
		fprintf(infile, "%d", pHead->rating); 
		
		pHead = pHead->pNext; 
		
	}
		
	


	
}



void display()
{
	int flag = 0; 
	char * search = NULL; 
	
	printf("If you want to display all records enter 0. \n");
	printf("To search for an artists and display their info enter 1 \n"); 
	scanf("%d", &flag); 


	//display all the records in the linked list.
	if(flag == 0) 
	{
		 
		 //iterate through until  
		while(pHead->pNext != NULL) 
		{
			printf("Artist: %s", pHead->artist); 
			printf("Album: %s", pHead->album); 
			printf("Title: %s", pHead->title); 
			printf("Genre: %s", pHead->genre); 
			printf("Minutes: %d", pHead->minutes); 
			printf("Seconds: %d", pHead->seconds); 
			printf("Plays: %d", pHead->plays); 
			printf("Rating: %d", pHead->rating); 
		
		
	}
	
	else if(flag == 1) 
	{
		printf("Please enter the artist name which you would like to print (case sensitive): \n"); 
		gets(search); 
		
		//while not at the end of the list check 
		while( (pHead != NULL) )
		{
		
			//if the artist in this node is equal to the search string then print out the info. 
			if( strcmp(pHead->artist, search) == 0)
			{
				printf("Artist: %s", pHead->artist); 
				printf("Album: %s", pHead->album); 
				printf("Title: %s", pHead->title); 
				printf("Genre: %s", pHead->genre); 
				printf("Minutes: %d", pHead->minutes); 
				printf("Seconds: %d", pHead->seconds); 
				printf("Plays: %d", pHead->plays); 
				printf("Rating: %d", pHead->rating); 
			}
			
			//iterate to the next node. 
			pHead = pHead->pNext; 
		
			
		}
		
		
		//printf("Sorry that artist doesn't exist! \n"); 
		
		//search for the record 
		
		//print the record
		
	}
		
		
}



void sort()
{
	
	
	
	
	
	
	
	
	
	
	
}




void insert(Record **pHead)
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
	
	insertOrder(Record **pHead, artist, album, title, genre, minutes, seconds, plays, rating); 
	
	
	
}	
	

//this will delete a record from the linked list based on the entered song name. 
void delete(Record **pHead)
{
	char * delete = NULL; 
	Record *pCur = NULL; 
	Record *pPrev = NULL; 
	int success = 0; 
	
	pCur = *pHead; 
	
	printf("Enter the song title that you want to delete(case sensitive): \n"); 
	gets(delete); 
	
	//search for delete in the field and once found remove it. 
	
	while((pCur != NULL) && (strcmp(delete, pHead->title) != 0) 
	{
		
		pPrev = pCur; 
		pCur = pCur->pNext; 
	}
	
	if(pCur != NULL)
	{
		//not the first item (pHead)
		if (pPrev != NULL) 
		{
			pPrev -> pNext = pCur -> pnext; 
		} 
		
	 
	else // deleting front node 
	{ 
		*pHead = pCur -> pNext; 
	}
	
	free(pCur); 
	//we did find it and delete it. 
	success = 1;
	
	// not a big deal 
	
	
}


void edit(Record ** pHead)
{
	//setting local pointers so that it can keep track of where we are in the linked list. 
	//pPrev may not be needed in this scenario because it's a doubly linked list and we can access the previous element in the linked list 
	//because the Record struct already has a pPrev pointer. 
	Record * pCur; 
	Record * pPrev; 

	pCur = *pHead


	//search var's are for getting the string/int that user wants to search for
	//change is to store the string/int that will be used to change the string/value in the struct. 
	char * search = NULL; 
	char * change = NULL; 
	int searchInt = 0; 
	int changeInt = 0; 
	int flag = 0 ; 
	
	//getting user input for the control statement to determine what they want to search for. 
	printf("What field would you like to search? \n"); a
	printf("1. Artist \n 2. Album \n 3. Title \n 4. Genre \n "); 
	printf("5. Minutes \n 6. Seconds \n 7. Plays 8. Rating \n"); 
	
	scanf("%d", &flag);  
	
	
	switch(flag)
	{
		//artist condition
		case 1: 
		printf("Please enter the artist you would like to search for and then edit(case sensitive): \n"); 
		gets(search); 
		
		//this will iterate until the end of the linked list or until strcmp() is zero. 
		//when strcmp is zero then it will be at the right node and will exit the while() loop. 
		while( (pCur != NULL) && strcmp(pCur->artist,search) != 0) 
		{
			pCur = pCur->pNext;
		}
		
		//you should be at the right position to edit.
		//strcmp() will return zero if they are equal 
		if(strcmp(pCur->artist, search) == 0)
		{
			printf("please enter what you would like to change the artist to: \n"); 
			gets(change); 
			
			pCur->artist = change; 
		}
		
		break; 
	
		//album case 
		case 2: 
		
		printf("Please enter the album that you want to search for and then edit(case sensitive): \n"); 
		gets(search); 
		
		while( (pCur != NULL) && strcmp(pCur->album,search) != 0)
		{
			pCur = pCur->pNext; 
		}
		
		if(strcmp(pCur->album, search) == 0)
		{
			printf("please enter what you would like to change the artist to: \n"); 
			gets(change);
			
			pCur->album = change; 
			
		}
		
		break; 
		
		//title case 
		case 3: 
		
		printf("Please enter the song title that you want to search for and then edit(case sensitive): \n"); 
		gets(search); 
		
		while( (pCur != NULL) && strcmp(pCur->title,search) != 0)
		{
			pCur = pCur->pNext; 
		}
		
		if(strcmp(pCur->album, search) == 0)
		{
			printf("please enter what you would like to change the title to: \n"); 
			gets(change);
			
			pCur->title = change; 
			
		}
		
		break; 
		
		
		//genre case 
		case 4: 
		
		printf("Please enter the song genre that you want to search for and then edit(case sensitive): \n"); 
		gets(search); 
		
		while( (pCur != NULL) && strcmp(pCur->genre,search) != 0)
		{
			pCur = pCur->pNext; 
		}
		
		if(strcmp(pCur->genre, search) == 0)
		{
			printf("please enter what you would like to change the genre to: \n"); 
			gets(change);
			
			pCur->genre = change; 
			
		}
		
		break; 
		
		//minutes case 
		case 5: 
		
		printf("Please enter the number of minutes that you want to search for and then edit(case sensitive): \n"); 
		scanf("%d", &searchInt);  
		
		while( (pCur != NULL) && (pCur->minutes) != searchInt) )
		{
			pCur = pCur->pNext; 
		}
		
		if(pCur->minutes == searchInt )
		{
			printf("please enter what you would like to change the minutes to: \n"); 
			scanf("%d", &changeInt); 
			
			pCur->minutes = changeInt; 
			
		}
		
		break; 
		
		//seconds case 
		case 6: 
		
		printf("Please enter the number of seconds that you want to search for and then edit: \n"); 
		scanf("%d", &searchInt);  
		
		while( (pCur != NULL) && (pCur->seconds) != searchInt) )
		{
			pCur = pCur->pNext; 
		}
		
		if(pCur->minutes == searchInt )
		{
			printf("please enter what you would like to change the minutes to: \n"); 
			scanf("%d", &changeInt); 
			
			pCur->seconds = changeInt; 
			
		}
		
		break; 
		
		
		case 7: 
		
		printf("Please enter the number of plays that you want to search for and then edit: \n"); 
		scanf("%d", &searchInt);  
		
		while( (pCur != NULL) && (pCur->plays) != searchInt) )
		{
			pCur = pCur->pNext; 
		}
		
		if(pCur->plays == searchInt )
		{
			printf("please enter what you would like to change the minutes to: \n"); 
			scanf("%d", &changeInt); 
			
			pCur->plays = changeInt; 
			
		}
		
		break;
		
		case 8: 
		
		printf("Please enter the number of seconds that you want to search for and then edit: \n"); 
		scanf("%d", &searchInt);  
		
		while( (pCur != NULL) && (pCur->rating) != searchInt) )
		{
			pCur = pCur->pNext; 
		}
		
		if(pCur->rating == searchInt )
		{
			printf("please enter what you would like to change the minutes to: \n"); 
			scanf("%d", &changeInt); 
			
			pCur->rating = changeInt; 
			
		}
		
		break;
	
	
}
	
	


//@precondition: that the infile.txt has been formatted with having each field as a seperate line and in order! 
//otherwise it will end badly. 	
	
void read_in(FILE *infile, Record **pHead)
{
	//declare local variables to store the read in strings. 
	//dummy is just to kill a newline the other vars are self-explanatory
	char * artist, album, title, genre, dummy; 
	int minutes, seconds, plays, rating; 
	
	
	//read in all of the information from the file and store in local variables. 
	fgets(artist, 20, infile); 
	
	fgets(album, 20, infile); 
	
	fgets(title, 20, infile); 
	
	fgets(genre, 20, infile); 
	
	//first reading in a string and then changing it to an int using sscanf()
	fgets(minutes, 20, infile);  
	sscanf(minutes, "%d", &minutes); 
	
	fgets(seconds, 20, infile);  
	sscanf(seconds, "%d", &seconds); 
	
	fgets(plays, 10, infile); 
	sscanf(plays, "%d", &plays);  
	
	fgets(plays, 10, infile); 
	sscanf(plays, "%d", infile); 
	
	//kill a newline that seperates the two records in the infile.txt
	//this way when it gets called again it will be at the proper position
	//instead of reading artist in an emtpy line and screwing everything up.
	fgets(dummy, 10, infile); 
	
	//impliment insertnOrder() function that creates a node that points to a struct 
	//this will then get filled with the strings/data correspondingly. 
	insertOrder( *pHead, artist, album, title, genre, minutes, seconds, plays, ratings); 
 


}



void insertFront (Node **pHead, int newData)
{
	//will use makeNode ()
	Node *pMem = makeNode (newData);

	// list empty?
	if (*pHead == NULL) // list is empty
	{
		*pHead = pMem;
	}
	else // list is NOT empty
	{
		pMem -> pNext = *pHead;
		*pHead = pMem;
	}

	// not finished with insertFront ()!

}



void insertOrder(Record ** pHead, char * artist, char * album, char * title, char * genre, int minutes, int seconds, int plays, int rating)
{
	Record * pMem; 
	Record * pPrev; //don't actually need a pPrev because it's a doubly linked list?  
	Record * pCur; 
	
	makeNode(artist, album, title, genre, minutes, seconds, plays, rating); 
	
	if( ptemp != NULL)
	{
		//everything is good just put it at the front! 
		*pHead = pMem;  
	}
	
	else //then the list isn't empty and you need to iterate through the list by comparing the two artist strings. 
	{
		
		while(pCur != NULL && (strcmp(pMem->artist, artist); 
		{
		
			pPrev = pCur; 
			pCur = pCur->pNext; 
		
		if(pPrev != NULL)
		{
			pMem -> pNext = pCur; 
			pPrev -> pNext = pMem; //maybe... 
			
		
		
	}
	

	




}

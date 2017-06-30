/*
 * 
 * 
 *******************************************************************************************
* Programmer: Johnny Minor                                                                    *
* Class: CptS 122, Spring 2015; Lab Section                                             *
* Programming Assignment: Lab1Task1                                                     *
* Date: January 19, 2015                                                                          *
* Description: This program sorts strings into ascending or descending order.       *
*******************************************************************************************
 * 
 * 
 */


#include"StringSort.h"

int main(int argc, char **argv)
{
	int i = 0; 
	
	//int order = 0; 
	
	char *ptrArray[MAXSIZE];
	
	//setting up some arbitrary strings to use. 
	ptrArray[0] = "zebra"; 
	
	ptrArray[1] = "linux";
	
	ptrArray[2] = "cellphone"; 
	
	ptrArray[3] = "watch"; 
	
		
	//get user input which was to sort. 
	//printf("Would you like to sort in ascending(press 0) or descending(press 1) order?");
	//scanf("%d", &order); 
	
	//bubble_sort_ascending(ptrArray, MAXSIZE); 
	
	bubble_sort_descending(ptrArray, MAXSIZE); 
	
	/*
	
	//control sequence whether to sort in ascending or descending order. 
	if(order == 0)
	{
		bubble_sort_ascending(ptrArray, 3); 
	}
	else if(order == 1) 
	{
		bubble_sort_descending(ptrArray, MAXSIZE); 
	}
	*/
	
	//if this program didn't suck this would be the sorted array of strings. 
	for(i=0; i < 4; i++)
	{
		printf("%s \n", ptrArray[i]); 
	}
	
	
	
	
	return 0;
}


#include "sort.h"

void selectionSort (int *numbersList, int size)
{
	int temp = 0, index = 0, sorted = size - 1, maxIndex = 0; 
	
	//outer loop
	for(sorted = size - 1; sorted > 0; sorted--)
	{ 
		maxIndex = 0; 
		
		//inner loop 
		for(index = 1; index <= sorted; index++)
		{
			//find max value.
			//equiv to numbersList[maxIndex]  
			if (*(numbersList + maxIndex) < *(numbersList + index) )
			{
				maxIndex = index; 
			} 	
		} 
		
		//swap to the last position. 
		temp =  *(numbersList + maxIndex); 
		*(numbersList + maxIndex) = *(numbersList + sorted);
		*(numbersList + sorted) = temp; 
		
	}
	
}


void printList(int *numbersList, int size)
{
	int index = 0; 
	
	for(index = 0; index < size; index++)
	{
		printf("nubmbersList[%d]: %d\n", index, *(numbersList + index));
	}
	
	return;
}
	
	
	

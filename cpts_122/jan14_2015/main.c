#include "sort.h"

int main (void)
{	//numbers afterwards will be zero.
	int numbersList[10] = [42, 32, 7, 22, -1];
	
	printList(numbersList, 5); 
	
	selectionSort(numbersList, 5); 
	
	printList(numbersList, 5); 
	
	
	
	return 0;
}

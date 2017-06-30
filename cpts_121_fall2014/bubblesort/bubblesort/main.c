#include<stdio.h>
#include"bubblesort.h"

int main (void) {

	int list[5] = {7,42,11,-16, 197} ; 

	bubble_sort(list, 5); 

	print_list(list, 5); 


	return 0 ; 
}
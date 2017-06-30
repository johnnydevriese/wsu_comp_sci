include "lab5.h" 

int main (void)
{
	Node * list = NULL; 
	Node * list1 = NULL; 
	
	insertOrder(&list, 1, -1); //insert item one in descending order.  
	
	insertOrder(&list1, 1, 1); //insert item one in ascending order. 
	
	mergelist(&dest, &list1, &list2, -1); 
	
	//we should free all of this memory but for sake of time we will skip it. 
	//we would have to create a free memory function that would recursively go through a linked list and free all the memory. 
	
	system("pause"); 
	return 0; 
}

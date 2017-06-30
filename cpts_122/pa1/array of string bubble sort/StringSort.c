#include"StringSort.h"

//I'm not sure where I've gone wrong here,
// but it doesn't seem to swap anything. 

void bubble_sort_ascending(char *ptrArray[MAXSIZE], int size){

	char * temp;
	
	//printf("%s \n", temp);  

	int i = 0 ; 
	int j = 0 ;

    for(i = 0; i < size - 1; i++) {

        for (j = i + 1; j < size; j++) {

			if (strcmp(ptrArray[i], ptrArray[j]) < 0)  {

                
                temp = ptrArray[i];    //swapping the string 
                ptrArray[i] = ptrArray[j];
				ptrArray[j] = temp;
            }
        }
    }

	return ; 
}

void bubble_sort_descending(char *ptrArray[MAXSIZE], int size){

	char * temp; 

	int i = 0 ; 
	int j = 0 ;

	
    for(i = 0; i < size - 1; i++) {

        for (j = i + 1; j < size; j++) {

			if (strcmp(ptrArray[i], ptrArray[j]) > 0)  {

				
                temp = ptrArray[i];    //swapping the string 
                ptrArray[i] = ptrArray[j];
				ptrArray[j] = temp;
            }
        }
    }
     
    
    
    
    

	return ; 
}

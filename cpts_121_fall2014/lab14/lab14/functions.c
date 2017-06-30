#include"person_sort.h"


//this function will sort the array of structs into ascending alphabetical order by the last name. 
void bubble_sort(struct person people[5], int size){

	person temp; 

	int i = 0, j = 0 ;

    for(i = 0; i < size - 1; i++) {

        for (j = i + 1; j < size; j++) {

			if (stricmp(people[i].last_name, people[j].last_name) < 0)  {

                temp = people[i];    //swapping entire struct
                people[i] = people[j];
				people[j] = temp;
            }
        }
    }

	//printf("This is the first person after bubble sort %s \n" , people[5].last_name); 

	return ; 
}



//this function will print all of the information to the output file. 
void output(struct person people[6], int size, FILE *outfile)
{

	int ii = 0 ; 

	for(ii=0; ii< size; ii++)
	{

		fprintf(outfile,"%d %s %s \n", people[ii].age, people[ii].last_name, people[ii].first_name);
	}


	return ; 
}


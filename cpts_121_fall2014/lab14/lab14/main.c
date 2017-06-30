#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include"person_sort.h"




int main(void)
{

	
	FILE *infile = NULL ; 
	FILE *outfile = NULL; 

	//creaing the structs for the people
	person person_1 ;
	person person_2; 
	person person_3; 
	person person_4; 
	person person_5; 
	person person_6; 

	//person person_7; 

	int ii = 0 ; 

	//creating the array of structs both before sorting "people" 
	//and after sorting "people_sorted"
	struct person people[6];
	struct person people_sorted[6];

	//opening the input/output files. 
	infile = fopen("infile.txt", "r");
	outfile = fopen("sorted.txt", "w"); 


	//I would've made this into a function but would've been difficult because 
	//I had to determine the max number for each person. (works, but not so efficient 

	//reading in BABE RUTH's INFO
	fgets(person_1.last_name, 5, infile);

	fgets(person_1.first_name, 8, infile); 

	fscanf(infile,"%d",&person_1.age); 

	//to skip to the new line in the file. 
	fgets(person_2.last_name, 100, infile); 


	//Reading in Michael Jordan's info. 
	fgets(person_2.last_name, 7, infile); 

	fgets(person_2.first_name, 10, infile); 

	fscanf(infile,"%d",&person_2.age); 


	//to skip to the new line in the file. 
	fgets(person_3.last_name, 100, infile); 

	//reading in Barack Obama's info
	fgets(person_3.last_name, 7, infile); 

	fgets(person_3.first_name, 9, infile); 

	fscanf(infile,"%d",&person_3.age); 

	//to skip to the new line in the file.(because I suck and don't know how else to...)
	fgets(person_4.last_name, 100, infile); 

	//reading in Harry Potters info. 

	fgets(person_4.last_name, 7, infile); 

	fgets(person_4.first_name, 9, infile); 

	fscanf(infile,"%d",&person_4.age);


	//skip to the new line in the file. 
	fgets(person_5.last_name, 100, infile); 

	//reading in Tom Brady's info. 

	fgets(person_5.last_name, 7, infile); 

	fgets(person_5.first_name, 5, infile); 

	fscanf(infile,"%d",&person_5.age);

	//skip to the new line in the file. 
	fgets(person_6.last_name, 100, infile); 

	//reading in Mia Hamm's info. 

	fgets(person_6.last_name, 5, infile); 

	fgets(person_6.first_name, 6, infile); 

	fscanf(infile,"%d",&person_6.age);


	//end of the file. 
	//fgets(person_7.last_name, 100, infile);
 

	//printf("This is the last name: %s \n", person_6.last_name); 



	//***reading into the structs complete****/// 


	//filling the array of type struct with the information. 

	people[0] = person_1;
	people[1] = person_2;
	people[2] = person_3; 
	people[3] = person_4; 
	people[4] = person_5; 
	people[5] = person_6 ; 


	//for some reason I have to do this otherwise when I try to put 
	// people[] = people_sorted[] it won't work... 
	people_sorted[0] = person_1;
	people_sorted[1] = person_2;
	people_sorted[2] = person_3; 
	people_sorted[3] = person_4; 
	people_sorted[4] = person_5; 
	people_sorted[5] = person_6 ; 



	//testing accessing elements in the array of structs. 
	//printf("This is the last name: %s", people[0].last_name);

	//sorting the people array 
	bubble_sort(people, 6) ; 


	//copying the sorted list to the designated sorted list
	// as per instructors requirements. 

	for(ii = 0; ii < 6; ii++)
	{
		people[ii] = people_sorted[ii];
	}


	output(people_sorted,6,outfile); 


	//working verson of writing stuff to the outfile. 

	/*fprintf(outfile,"%d %s %s \n", people[0].age, people[0].last_name, people[0].first_name); 

	fprintf(outfile,"%d %s %s \n", people[1].age, people[1].last_name, people[1].first_name);

	fprintf(outfile,"%d %s %s \n", people[2].age, people[2].last_name, people[2].first_name);

	fprintf(outfile,"%d %s %s \n", people[3].age, people[3].last_name, people[3].first_name);

	fprintf(outfile,"%d %s %s \n", people[4].age, people[4].last_name, people[4].first_name);

	fprintf(outfile,"%d %s %s \n", people[5].age, people[5].last_name, people[5].first_name);*/



	//closing the files. 

	fclose(infile);
	fclose(outfile); 


	// muahahaha :D 
	printf("That's all folks!!! \n");
	printf("\a\a\a\a\a");

	return; 
}
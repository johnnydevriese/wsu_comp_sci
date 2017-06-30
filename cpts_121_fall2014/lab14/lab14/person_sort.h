#include<stdio.h>
#include<stdlib.h>
#include<string.h>


//bunch of crap so i can use stricmp() function.
# if defined(_MSC_VER)
# ifndef _CRT_SECURE_NO_DEPRECATE
# define _CRT_SECURE_NO_DEPRECATE (1)
# endif
# pragma warning(disable : 4996)
# endif


//struct definition 
typedef struct person{

	char first_name[30];
	char last_name[30];
	int age;

}person;


void read_in(); 


void bubble_sort(struct person people[5], int size);

void output(struct person people[6], int size, FILE *outfile);


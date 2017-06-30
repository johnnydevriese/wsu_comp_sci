/*******************************************************************************************
* Programmer: Johnny Minor	                                                                    *
* Class: CptS 121, Fall 2014; Lab Section 08 (Caruso)                                                *
* Programming Assignment: Programming Assignemnt 8                                                     *
* Date: December 12, 2014                                                                       *
* Description: A bunch of "interview" questions.      *
*******************************************************************************************/


#include <stdio.h>
#include<stdio.h>
#include"functions.h"
 
 
int main()
{
	//code for use in problem #1. (string concatenation) 

    char original[10], add[10];
 
    printf("Enter source string\n");
    gets(original);
 
    printf("Enter string to concatenate\n");
    gets(add);
 
    my_str_n_cat(original, add);
 
    printf("String after concatenation is \"%s\"\n", original);





 
    return 0;
}
 

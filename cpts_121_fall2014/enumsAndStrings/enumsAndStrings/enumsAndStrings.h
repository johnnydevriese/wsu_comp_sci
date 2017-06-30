#ifndef ENUMS_STRINGS_H
#define ENUMS_STINGS_H


#include<stdio.h>
#include<string.h>



typedef enum boolean
{
	FALSE, TRUE
} Boolean; 

//typedef enum boolean Boolean; 

int my_strlen(char str[]);

int my_strlen_ptr(char *str);

void my_strcpy(char *dest, char *src); 

void my_strcat(char *dest, char *src);


#endif
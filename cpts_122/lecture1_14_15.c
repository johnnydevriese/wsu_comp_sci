/*
 * lecture1_14_15.c
 * 
 * Copyright 2015 johnny <johnny@saskaboond>
 * 
 * lecture notes from 1.14.15
 * a review from cpts 121 and focusing on the use of using pointers. 
 * 
 */


#include <stdio.h>
#include <string.h>


//write a function that reverses a string using pointer notation. 
	
int string_length(char*);
void reverse(char*);
 
int main(void) 
{
	char string[100];
 
 
	//int foo = 0 ; 
	
	//printf("Enter a number\n"); 
	//scanf("%d", &foo); 
 
	printf("Enter a string\n");
	gets(string);
	//scanf("%100s", string); 
 
   reverse(string);
 
   printf("Reverse of entered string is \"%s\".\n", string);
 
   return 0;
}
 
void reverse(char *string) 
{
   int length, c;
   char *begin, *end, temp;
 
   length = string_length(string);
   begin  = string;
   end    = string;
 
   for (c = 0; c < length - 1; c++)
      end++;
 
   for (c = 0; c < length/2; c++)
   {        
      temp   = *end;
      *end   = *begin;
      *begin = temp;
 
      begin++;
      end--;
   }
}
 
int string_length(char *pointer)
{
   int c = 0;
 
   while( *(pointer + c) != '\0' )
      c++;
 
   return c;
}
	
	
	



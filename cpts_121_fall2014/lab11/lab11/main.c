#include<stdio.h>
#include<ctype.h>
#include<string.h>



void makelowercase(char*source)
{
	int i = 0 ; 
	for(i = 0 ; i < strlen(source)-1;i++)
	{
		tolower(source[i]) ;//this is in ctype.h

	}
}


void remove_spaces(char *source)
{
	int i = 0  ; 
	int j = 0 ; 

	char dest[50]; 

	for(i = 0; i< strlen(source); i++)
	{

		if( source[i] >= 'a' && source[i] <= '2') 
		{
			dest[j] = source[i]; 
			j += 1; 
		}
		strcpy(source,dest); 
	}

}


int is_palindrome(char *source, int n, int m) 
{

	if(n >= m) 
	{return 1; }
	if( *(source + n) != *(source + m)) 
	{return 0 ; }

	else {
	return is_palindrome(source,n++,m-1); 
	}

}
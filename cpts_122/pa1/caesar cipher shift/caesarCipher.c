#include"caesarCipher.h"


/*
 * 
 * name: encryption 
 * @param needs a string 
 * @return void but will give the encrypted string. 
 * 
 */



void encryption ( char * string)
{
	int n = 0; 
	//copying string to *p and intializing a q[] which will hold the encrypted string. 
	char *p = string,  q[MAXSIZE]; 
	
	while(*p)
	{
		
		if(islower(*p))
		{		//checking to see if it would overlap (i.e. is xyz because that would go beyond the alphabet so it needs to go back around to abc 
				if((*p >= 'a') && (*p < 'x'))
				
					//adding 3 to the characters  and converting to uppercase. 
						q[n] = toupper(*p + (char)3); 
						
						//control statements for the overlap characters
						else if( *p == 'x')
							q[n] = 'A'; 
						else if( *p == 'y')
							q[n] = 'B'; 
						else
							q[n] = 'C'; 
		}
		
		else 
		{
			q[n] = *p; 
		}
		//incrementing the variables to get through the array (string) 
		n++; 
		p++; 
	}
	//appending the null character to the new encrypted string. 
	q[n++] = '\0'; 
	
	//printing the encrypted string to the screen. 
	//equivalent(kinda) to printf() 
	puts(q); 
	
	return;
}


/*
 * 
 * name: decryption 
 * @param needs to be given a string
 * @return void but will print the decoded string. 
 * 
 * not commented fully because the scheme is the exact same as above 
 * just subtracting three from the ASCII table instead 
 * 
 */


void decryption ( char * string)
{
	int n = 0; 
	char *p = string, q[MAXSIZE]; 
	
	while(*p)
	{
		if(isupper(*p))
		{
			
				if(( *p >= 'D') && (*p <= 'Z'))
				
						q[n] = tolower( *p - (char)3); 
						
				else if (*p == 'A')
						q[n] = 'x';
				else if(*p == 'B')
						q[n] = 'y';
				else 
						q[n] = 'z'; 
						
		}
	
	else
	{
		q[n] = *p; 
	}
	
	n++; 
	p++;
	}
	
	q[n++] = '\0';
	puts(q); 
	
	return;
}


	

/*
 * 
 * name: program
 * @param none 
 * @return nothing but will encrypt or decrypt a user input string.  
 * 
 */



void program (void)
{
	//variable for the user choice
	//int choice = 0; 
	
	//declare the string and intialize to null character
	char string1[MAXSIZE] = "the quick brown fox jumps over the lazy dog" ;
	char string2[MAXSIZE] = "WKH TXLFN EURZQ IRA MXPSV RYHU WKH ODCB GRJ" ; 
	
	/*
	//getting user input
	//printf("To encrpyt press 1. To decrypt press 2 \n"); 
	
	//scanning in to the choice var
	//scanf("%d", &choice);
	
	//printf("choice %d \n", choice); 
	
	//printf("this is choice %d \n", choice); 
	
	//getting user input of string and putting into the string variable(array)
	//printf("Please enter the string you would like encrypt or decrypt \n"); 
	//scanf("%s", string);
	
	
	//control statement whether to encrypt or decrypt
	//~ if(choice == 1)
	//~ {
		//~ encryption(string); 
	//~ }
	//~ else if(choice == 2)
	//~ {
		//~ decryption(string);
	//~ 
	//~ }
	*/
	
	//apparently I'm supposed to make a driver to show that this program works.. 
	//the (probably) familiar short setence that uses every letter in alphabet and encrypts them
	//then it decrypts them showing that it works. 
	
	encryption(string1); 
	
	decryption(string2); 
	
	
	
	return;
}

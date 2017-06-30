#include"RecursiveString.h"


//the recursive check function. 
// can only check a consecutive letter word. So it has to first be converted to a simpler string. 

void check(char word[], int index)
{
    int len = strlen(word) - (index + 1);
    if (word[index] == word[len])
    {
        if (index + 1 == len || index == len)
        {
            printf("The entered word is a palindrome\n");
            return;
        }
        check(word, index + 1);
    }
    else
    {
        printf("The entered word is not a palindrome\n");
    }
}

//removing punctuation and also changing to lowercase otherwise the recursive function (when it compares) will not work properly. 

void remove_punct(char *p)
{
    char *src = p, *dst = p;

    while (*src)
    {
       if (ispunct((unsigned char)*src))
       {
          /* Skip this character */
          src++;
       }
       else if (isupper((unsigned char)*src))
       {
          /* Make it lowercase */
          *dst++ = tolower((unsigned char)*src);
          src++;
       }
       else if (src == dst)
       {
          /* Increment both pointers without copying */
          src++;
          dst++;
       }
       else
       {
          /* Copy character */
          *dst++ = *src++;
       }
    }
    
    *dst++ = '\0';

    //*dst = 0;
}


//removing spaces in the string because otherwise the recursive function will not work! 

void remove_space(char *p)
{
	char *src = p, *dst = p;
	
	int c = 0; 
	int d = 0; 
	
	while (p[c] != '\0')
   {
      if (!(src[c] == ' ')) {
        dst[d] = src[c];
        d++;
      }
      c++;
   }
 
   dst[d] = '\0';
 
   //printf("Text after removing blanks\n%s\n", dst);
 
   return ;
}

void program_driver()
{
	char palindrome[50] = "Madam I'm Adam!"; 
	char palindrome2[50] = "The quick brown fox jumps over the lazy dog!" ;
	
	
	printf("%s \n", palindrome); 
	
	remove_punct(palindrome); 
	
	//printf("%s \n", palindrome); 
	
	remove_space(palindrome); 
	
	//recursively check if string is palindrome! 

	check(palindrome, 0); 
	
	
	printf("%s \n", palindrome2); 
	
	remove_punct(palindrome2); 
	
	remove_space(palindrome2); 	
	
	check(palindrome2, 0); 
	
	return;
}
	

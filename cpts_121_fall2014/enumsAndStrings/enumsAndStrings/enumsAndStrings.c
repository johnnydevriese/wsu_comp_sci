#include"enumsAndStrings.h"

int my_strlen(char str[]){


	int length = 0 ; 
	//sentinenal controlled loop. 
	for(length = 0;str[ length] != '\0'  ; length++ ) ;
	//{
	//	//?
	//}

	return length; 
}

//assumption/precondition - is str points to start of character. 
int my_strlen_ptr(char *str)
{

	int index = 0 ; 

	for(index = 0; *(str + index) != '\0' ; index++); 

	

	return index ; 
}


void my_strcpy(char *dest, char *src)
{
	int index = 0;

	while(src[index] != '\0')
	{
		dest[index++] = src[index] ; 
		
	}
	dest[index] = '\0';


	return ; 
}


void my_strcat(char *dest, char *src){

	int index = 0, src_index = 0 ; 
	
	//positioning the index to proper position in destination array. 
	for(index = 0; dest[index] != '\0'; index++); 

	//guarding against null character
	for(src_index = 0; src[src_index] != '\0';src_index++, index++)
	{
		dest[index] = src[src_index]; 
	}

	dest[index] = '\0' ; 

	return ;
}
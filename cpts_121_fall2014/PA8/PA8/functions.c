/*******************************************************************************************
* Programmer: Johnny Minor	                                                                    *
* Class: CptS 121, Fall 2014; Lab Section 08 (Caruso)                                                *
* Programming Assignment: Programming Assignemnt 8                                                     *
* Date: December 12, 2014                                                                       *
* Description: A bunch of "interview" questions.      *
*******************************************************************************************/


#include"functions.h"

//first function. 
//this function will copy a string and add it to the end of another string. 
void my_str_n_cat(char source[100], char destination[100])
{


	while(*source)
	{
		source++; 
	}


	while(*destination)
	{
		*source = *destination ; 
		destination++; 
		source++; 
	}

	*source = '/0';


	return ; 
}


// precondition: list must be sorted - ascending order
void binary_search (int list[], int size, int target, 
					int *found_ptr, int *index_ptr)
{
	int left_index = 0, right_index = size - 1, mid = 0;
	
	*found_ptr = 0; // have not found target
	*index_ptr = -1; // invalid index initially

	for (left_index = 0, right_index = size - 1; 
		 (*found_ptr == 0) && (left_index <= right_index);
		 )
	{
		mid = (left_index + right_index) / 2;

		if (target == list[mid]) // found the target
		{
			*found_ptr = 1;
			*index_ptr = mid;
		}
		else if (target > list[mid])
		{
			left_index = mid + 1;
		}
		else
		{
			right_index = mid - 1;
		}
	}

}

void bubble_sort (int list[], int size)
{
	int index = 0, passes = 0, temp = 0;

	for (passes = 1; passes < size - 1; passes++)
	{
		for (index = 0; index < size - passes; index++)
		{
			// ascending order
			if (list[index] > list[index + 1]) // swap?
			{
				// swap
				temp = list[index];
				list[index] = list[index + 1];
				list[index + 1] = temp;
			}
		}
	}
}

void check_palindrome(char word[], int index)
{
    int len = strlen(word) - (index + 1);
    if (word[index] == word[len])
    {
        if (index + 1 == len || index == len)
        {
            printf("The entered word is a palindrome\n");
            return;
        }
        check_palindrome(word, index + 1);
    }
    else
    {
        printf("The entered word is not a palindrome\n");
    }
}

int sum_primes(int n)
{
	if(n == 1)
	{
		return (1);
	}
	else
	{
		return (sum_primes(n - 1) + n);
	}


}



void maximum_occurences(char *sentence, struct Occurances occurrences[], int* frequency, char* character)
{
	int c = 0 ; 
	int count[26] = {0}; 

	while ( sentence[c] != '\0' )
   {
      /* Considering characters from 'a' to 'z' only */
 
      if ( sentence[c] >= 'a' && sentence[c] <= 'z' ) 
         count[sentence[c]-'a']++;
 
      c++;
   }



	return ;
}

int smallest_sum_sequence (int number_array[], int num_items)
{

	int index = 0, sum = 0, min = 0;

	min = sum = number_array[0]; // first item is the initial largest sum 
                                    // sequence
	for (index = 1; index < num_items; index++)
	{
		if (sum < 0)
		{
			sum = number_array[index];
		}
		else
		{
			sum += number_array[index];
		}

		if (sum <= min) // found new largest sum sequence
		{
			min = sum;
		}
	}

	return min;
}




#include<stdio.h>
#include<stdlib.h>
#include<string.h>


typedef struct occurrences
{
          int num_occurrences;
          double frequency;
} Occurrences;


void my_str_n_cat(char *source, char *destination);

void binary_search (int list[], int size, int target, int *found_ptr, int *index_ptr);

void bubble_sort (int list[], int size);

void check_palindrome(char word[], int index);

int sum_primes(int n);

void maximum_occurences(char *sentence, struct Occurances occurrences[], int* frequency, char* character);

int smallest_sum_sequence (int number_array[], int num_items);
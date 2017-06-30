#include<stdio.h>

double metabolic_rate(int age, char sex, double weight, double height); 

double read_double(FILE *infile);

int read_integer (FILE *infile);

char read_letter(FILE *infile);

double activity(int activity, double BMR);
#include<stdio.h>
#include<math.h>
//guard code

#ifndef name_h
#define name_h
#endif



char read_chararcter(FILE *inputfile);

int determine_ascii(char character); 

void printint(FILE *outputfile, int num);

FILE *openinputfile(void); 
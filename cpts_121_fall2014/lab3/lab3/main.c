#include"lab3.h"
#include<math.h> 



int main (void){

	FILE *inputfile = NULL; 
	FILE *outputstats = NULL; 
	FILE *outputascii = NULL; 

	inputfile = fopen("input.dat","r"); 
	outputstats = fopen("outputstats.dat","w"); 
	outputascii = fopen("outputascii.dat","w"); 



	read_chararcter(inputfile); 





	return(0); 
}
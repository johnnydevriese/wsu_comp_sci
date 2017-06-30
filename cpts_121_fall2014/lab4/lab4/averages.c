#include <stdio.h>
 
#define FILE_NAME_SIZE 30
 
int main (void){

	FILE *infile = NULL;
	FILE *outfile = NULL;
	char file_name[FILE_NAME_SIZE];
	 /* Declare the rest of the variables that you need for this problem. */

	double number = 0, sum = 0, num_values = 0, average = 0 ; 
 
	printf ("Enter the name of the file to read from: ");
	scanf ("%s", file_name);

	infile = fopen("values.dat","r"); 
	outfile = fopen("averages_final.dat", "w"); 
 
	/* Fill in the code to open a file. Make sure you check that the file was open successfully. */
 
	while (!feof (infile))
	{
		fscanf(infile, "%lf", &number); 
		sum += number; 
	/* Read in the real values. */
	/* Keep track of the number of values read and the sum of the values. */
	}
 
	average = sum / num_values ;

	fprintf(outfile, "%lf", average);

	/* Output average to a file named "output.dat". */
	/* Close your files. */
 
	return 0;
}
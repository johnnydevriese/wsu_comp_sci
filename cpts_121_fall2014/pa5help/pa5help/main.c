#include<stdio.h.>

int main (void) {

	char top_pairs[15] = {'\0'}, bottom_pairs[15] = {'\0'}, identifier = '\0', eat_space = '\0', 
		base = '\0', sam_top_pairs[15] = {'A', 'G'}, sam_bottom_pairs[15] = {'T', 'C'};
	int ii = 0, index = 0, size_top_pairs = 0, size_bottom_pairs = 0  ; //keep track of which sequence we need to read. 

	FILE *infile = NULL ; 
	
	infile = fopen("sequences.txt", "r") ; 

	fscanf(infile, "%c", &identifier) ; 
	fscanf(infile, "%c", &eat_space); 

	//start getting the first sequence. 
	do
	{
		fscanf(infile, "%c", &base); 
		if(base != '\n')
		{
			top_pairs[index++] = base; 
			//index++
		}
	}while(base != '\n'); 
	size_top_pairs = index; 


	index = 0 ;

	do
	{
		fscanf(infile, "%c", &base); 
		if(base != '\n')
		{
			bottom_pairs[index++] = base; 
			//index++
		}
	}while(base != '\n'); 
	size_top_pairs = 

	print_dna_sequence(top_pairs, size_top_pairs, bottom_pairs, size_bottom_pairs ); 



	return 0; 
}
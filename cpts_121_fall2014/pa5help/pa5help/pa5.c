#include<stdio.h>


void print_dna_sequence(char tp[15], int tp_size, char bp[15], int bp_size){

	int index = 0 ; 

	for(index =0; index <tp_size; index++){

		printf("%c", tp[index]) ; 

	putchar('\n'); 

	for(index =0; index <bp_size; index++){

		printf("%c", bp[index]) ; 

	putchar('\n');

	return ; 
}
}
}

int check_mutation(char tp[15], char bp[15], int normal_size, char stp[15], char sbp[15], int s_size){


	int is_mutation = 0, index = 0 ; 

	if(tp[index] != stp[index])
	{

		is_mutation = 1 ; 
	}





	return 0 ; 
}
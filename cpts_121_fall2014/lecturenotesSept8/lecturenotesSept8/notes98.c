#include<stdio.h> 
#include"gpa.h"


int main(void){

	/*
	char letter = '\0'; //'a'
	int number = 0 ; 
		
	prtinf("Enter number:"); 
	scanf("%d", &number); // the enter character will carry
						//down tot the next scanf ()! 

	printf("Nubmer: %d \n", number); 

	printf("Enter chracter: "); 

	scanf(" %c", &letter); //space between " and %c!!! allows whitespace characters to be ignored.  

	printf("ASCII value: %d \n", letter); 

	printf("Character: %c \n", letter); 


	//manipulate characters for encription and that way you can manipulate the character. 
	//translating characters from lowercase to uppercase and then an offset number. 
	//e = (plaintext character - 'a') + 'A' - shift 
	// pc = entered by user 'e' = ASCI value 101 
	*/
	// moving on ~~~~~~~~~~~~~~~~~~

	/*software development method: 
	1.specify problem requirements
	2. analyze the problem
	3. design an algorithm ot solve the problem. (pseudo-code) 
	4. implement the algorithm 
	5. test and verify the completed program
	6. maintain and update the program. 

	logical comparison operators (> < <= >= == !=) and 
	the mod operator % (only works on int's)!

	// moving on ~~~~~~ 
	//compute the GPA for a student based on 3 courses. 
	
	// GPA = (gp1 * #of credits) + (gp2 * #ofcredits) + (gp3 * #number of credits3) / # of credit hours. 
	*/

	//function prototype is a function which creates a user defined function. 


	// this is a null pointer; not a null character. 
	FILE *input_file = NULL, *output_file = NULL ; 
	//STEP 0. OPEN FILE
	output_file = fopen("results.txt", "w") ; //"w"rite to file 
	input_file = fopen("gradepoints.txt", "r" ) ; // "r" is read permission of the gradepoints.txt  
	
	//STEP 1. process file information 


	int credits1 = 0 ; 
	int credits2 = 0 ; 
	int credits3 = 0 ; 
	int total_credits = 0; 

	double gpa1 = 0.0 ; 
	double gpa2 = 0.0 ; 
	double gpa3 = 0.0 ; 
	double gpa_final = 0.0 ;


	//STEP 1. GET THE INPUTS
	//printf("Enter credits for course1:"); 
	//scanf("%d", &credits1); 

	//credits1 = get_credit(); //you can only 'step into' a function call (F11)
	
	//replacing function call with a stream instead. 
	
	fscanf(input_file,"%d", &credits1); 

	fscanf(input_file,"%d", &credits2); 

	fscanf(input_file,"%d", &credits3); 
	
	//printf("Enter credits for course2:"); 
	//scanf("%d", &credits2);

	//printf("Enter credits for course3:"); 
	//scanf("%d", &credits3);

	//credits3 = get_credit(); 

	//gpa1 = get_gpa(); 

	//gpa2 = get_gpa(); 

	//gpa3 = get_gpa(); 

	fscanf(input_file, "%lf", &gpa1) ; 
	fscanf(input_file, "%lf", &gpa2) ; 
	fscanf(input_file, "%lf", &gpa3) ; 



	//printf("Enter grade point for course1:"); 
	//scanf("%lf", &gpa1); 

	//printf("Enter grade point for course2:"); 
	//scanf("%lf", &gpa2); 

	//printf("Enter grade point for course1:"); 
	//scanf("%lf", &gpa3); 

	//2.PEFORM COMPUTATIONS

	total_credits = credits1 + credits2 + credits3 ; 

	gpa_final = (gpa1 * credits1) + (gpa2 * credits2) + (gpa3 * credits3) ; 

	gpa_final = gpa_final / total_credits ; 

	//3. DISPLAY RESULT(S)
	printf("This is your GPA: %.2lf \n", gpa_final); //.2 displays to the hundreths 
	//STEP 3. Write result to file
	fprintf(output_file, "This is your GPA %.2lf \n", gpa_final); 

	//4. close files! 
	fclose(input_file); 
	fclose(output_file); 
	
	return (0); 

}

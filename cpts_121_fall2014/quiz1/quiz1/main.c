#include<stdio.h>




int main (void) {



	//***** This will sort an array in ascending order ******* 

	/*int i, j, a, n = 5, number[5] = {5, 4, 3, 2, 1};
 
   
    
    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (number[i] > number[j])
            {
                a =  number[i];
                number[i] = number[j];
                number[j] = a;
            }
        }
    }


    printf("The numbers arranged in ascending order are given below \n");
    for (i = 0; i < n; ++i)
        printf("%d\n", number[i]);


	printf("min = %d", number[0]);

	printf("max = %d", number[4]);*/

	//**** This will determine the largest sum sequence in an array. 

	int numbers[5] = { 20, 1, 2, 3, 5} ; 
	int ii = 0, max1 = 0, max2 = 0, max3 = 0, temp = 0, abs_max = 0 ; 

	for( ii = 0 ; ii < 5 ; ii++)
	{

		if( ii == 0 )
		{
			max1 = numbers[ii] + numbers[ii + 1] ;
		}

		else if( ii < 4)
		{
			temp = max2 ; 
			max2 = numbers[ii - 1 ] + numbers[ii] + numbers[ii + 1] ;
			if(temp > max2) max2 = temp;


		}
		else if( ii < 5)
		{
			max3 = numbers[ii] + numbers[ii - 1] ;
		}

	}

	if(max1 > max2 && max1 > max3) 
		abs_max = max1; 
	else if(max2 > max1 && max2 > max3)
		abs_max = max2 ; 
	else if(max3 > max2 && max1) 
		abs_max = max3; 

		printf("This is max1: %d \n, max2: %d \n, max3: %d \n", max1, max2, max3) ;

		printf("This is the absolute max: %d \n" , abs_max) ; 


	

	


	return 0 ; 
}
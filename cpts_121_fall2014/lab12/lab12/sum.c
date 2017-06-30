// recursive sum of digits(int initial, int sum)

//mod by 10 to get the last digit, divide by 10 to shift the number. 

//1234 % 10 = 4 

//1234 / 10 = 123 

#include<stdio.h>

int SumDigitsRec(int n, int sum) ;

int main(void)
{

	int num = 123, sum = 0 ; 

	SumDigitsRec(num,sum); 


	printf("This is the sum %d \n", sum) ; 

	return ; 
}


int SumDigitsRec(int n, int sum) 
{
	if(n == 0)
	{
		return sum;
	}
	sum += n % 10; 
	return SumDigitsRec((n/10),sum); 
}
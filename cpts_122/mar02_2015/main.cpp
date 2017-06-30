#include "Templates.h"


using std::cout; 
using std::endl; 

int main (void)
{
	int n1 = 10, n2 = 100, result = 0; 
	double n3 = 5.0, n4 = 2.5, result2 = 0.0; 
	
	//if we had a Rational type we coudl do something like this: 
	Rational r1, r2, r3; 
	//you could supply any supported type into the function. 
	r3 = multiply(r1, r3); 
	
	result = multiply(n1, n2); 
	result2 = multiply(n3, n4); 
	
	cout << "result:" << result << endl; 
	
	cout << "result2:" << result2 << endl; 
	
	
	
	
	return 0; 
}

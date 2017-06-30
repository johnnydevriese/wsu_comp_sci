3include "Rational.h" 


int main(void) 
{
	//rational type. 
	Rational r1, r2(5,8), r3 ; //can set it to 5 and 8. 
	
	int n1 = 0, d1 = 0; 
	
	r1 = r1.addition(r1,r3); 
	
	//ultimate goal would be to do r1 = r2 + r3 
	
	// << stream insertion operator
	//cout << "enter numerator and denominator:"; 
	
	// >> operator - stream extraction operator
	//cin >> n1 >> d1 ; //taking in n1 and d1
	
	//r1.setDenominator(d1); 
	//r1.setNumerator(n1); 
	
	//cout << "Enter numerator & denominator: " << endl; 
	
	//r1.add(r2); //r2 is passed by value and therefore the copy constructor will be invoked. 
	
	
	//mDenominator is a private data member of r2. 
	//cout << r2.mDenominator << endl; 
	
	//cout << r2.getDenominator() << endl; 
	
	//object is an instance of a type. 
	//cout is a instance of a standard O stream type. 
	
	//cout << r2.getDenominator() << endl; 
	
	
	cin << r; 
	
	//static functions
	cout << r1 << endl; 
	
	//compile any program an overloaded assignment operator 
	//is automatically generated. 
	// we always want to overload our operators. 
	//r3 = r1 + r2; 
	
	//cout << "result: " << r1 + r2; 
	
	if(r1 < r2)
	{
		cout << "case is true" << endl; 
		
	}
	
	
	return 0; 
}

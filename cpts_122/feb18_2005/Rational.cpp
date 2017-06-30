#include"Rational.h" 


//this isn't driven by an instance of an object 
//it doesn't belong to any particular object/class. 

Rational operator + (Rational &lhs, Rational &rhs)
{
	
	Rational result; 
	
	//pretty inefficient because you're going through a ton of functions. 
	
	result.setNumerator = lhs.getNumerator() * rhs.getDenominator() + rhs.getNumerator() * lhs.getDenominator(); 
	
	result.setDenominator = ( lhs.getDenominator() * rhs.getDenominator() ); 
	
	return result; 
}

//this-> is instance of an object


//friends of the class have access to data members in the class. 
istream &operator >> (istream &input, Rational &rhs)
{
	//input becomes like cin
	input >> rhs.mNumerator >> rhs.mDenominator ; 
	
	return input; 
}


ostream &operator << (ostream &output, Rational &rhs)
{
	output << rhs.mNumerator << "/" << rhs.mDenominator; 
	
	return output; 
} 


//precondition: denominators are the same. so we can only comare the numerators
bool operator < (Rational &lhs, Rational &rhs)
{	
	//can satisfy bool with true/false lowercase
	bool result = false; 
	
	if(lhs.mNumerator < rhs.mNumerator)
	{
		result = true; 
	}
		
		
	return result; 
}

//have to add Rational:: which species which CLASS it is in! 
Rational::Rational () //default - initialize data 
{
	mNumerator = 0; 
	mDenominator = 1; 
	
}

//constructors don't return values
Rational::Rational( int newNum, int mDen)
{
	mNumerator = newNum;  
	
	mDenominator = newDen; 
	
	
	
	
}

Rationa::Rational(Rational &copyObject)
{
	this->mDenominator = copyObject.mDenominator; 
	
	this->mNumerator = copyObject.mNumerator; 
	
	
	
}

Rational::~Rational ()
{
	//does nothing
	cout << "inside destructor" << endl; 
}



Rational & Rational::operator = (Rational &rhs)
{
	//want to see if they live at the same object in memory. 
	//otherwise you would be trying to acces and assign to the same thing at the same time. 
	//niet goed. 
	if(this != &rhs)
	{
	
	//why don't you have to use public getters? 
	mNumerator = rhs.mNumerator; 
	mDenominator = rhs.mDenominator; 
	
	}
	
	return *this;
}




Rational Rational::addition (Rational lhs, Rational rhs)
{
	//declare result and thus becomes an object. 
	//object is a declaration of that class. 
	Rational result; 
	
	result.mNumerator = lhs.mNumerator * rhs.mDenominator + rhs.Numerator * lhs.mDenominator; 
	
	result.mDenominator = lhs.mDenominator * rhs.mDenominator ; 
	
	return result; 
	
}


//not an elegant solution. there must be a better way... 
//eventually want to just be able to use + instead of add(); 
Rational Rational::add(Rational rhs)
{
	//where should we store result? 
	//this-> is a pointer to some object 
	//an object that this pointer has access to. 
	
	//this function is just like plus assign +=. 
	
	this->mNumerator = this->mNumerator * rhs.mDenominator + rhs.Numerator * this->mDenominator; 
	
	mDenominator = mDenominator * rhs.mDenominator ; 
	
	
	
	return *this;

}

//becomes a constant function which means that it cannot change the private data members of the class. //const int number = 0; 
int Rational::getNumerator() const
{
	
	return mNumerator; 
}


int Rational::getDenominator() const
{
	
	
	return mDenominator; 
}

		
//setters - mutators 
		
void Rational::setNumerator (int newNumerator) 
{
	mNumerator = newNumerator; 
	
}

void Rational::setDenominator( int newDenominator)
{
	
	mDenominator = newDenominator; 
}










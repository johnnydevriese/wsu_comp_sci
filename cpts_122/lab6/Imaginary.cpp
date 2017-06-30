#include "Imaginary.h"

Imaginary::Imaginary()
{
	this->real = 0.0;
	this->imaginary = 0.0;  
}

Imaginary::Imaginary(double real, double imag)
{
	this->real = real; 
	this->imaginary = imag; 
	
	
}

Imaginary::Imaginary(Imaginary &copyme)
{ 
	
}

void Imaginary::add(Imaginary &other)
{
	//add real part
	
	//this shoudl not work 
	//this->real += other.real; 
	
	
	
	//add imaginary part
	
}



Imaginary::~Imaginary()
{
	
}



double Imaginary::getImag() const //const doesn't let us modify values within the function
{
	//you can not do this: this->imaginary = 0; 


	return this->imaginary; 
	
}


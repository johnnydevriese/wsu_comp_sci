#ifndef IMAGINARY_H
#define IMAGINARY_H

#include<iostream> 


class Imaginary
{
	private:
	double real; 
	double imaginary; 



	public: 
	//constructors
	Imaginary(); 
	Imaginary(double real, double imag); 
	Imaginary(Imaginary &copyme); 
	
	//destructor 
	~Imaginary(); 
	
	//gets
	double getReal() const; 
	double getImag() const; 
	
	//set 
	void setReal(double real); 
	void setImag(double image); 
	
	//maths
	void add(Imaginary &other); 
	void sub(Imaginary &other); 
	
	//others
	void print(); 
	
	
};
	
	
	
	
	
	
	
	

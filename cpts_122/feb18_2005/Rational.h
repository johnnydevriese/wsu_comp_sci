#ifndef RATIONAL_H
#define RATIONAL_H


#include <iostream> //cout, cin 

//include entire std namespace

using std::cout; 
using std::cin; 
using std::endl; 
using std::istream;
using std::ostream; 


//for every class we define we want to ensure we have the big three: 
// 1. copy constructor 
// 2. destructor --implicitly called when the object leaves scope. 
// 3. overloaded assignment operator 

class Rational 
{
	
	//it has access to the data in the object
	
	friend istream &operator >> (istream &input, Rational &rhs);
	//overloading the input stream extraction operator 
	//pass by reference so you don't have to make any copies 
	//you can also pass back by reference. 
	//but you have to watch out for dangling reference. 
		  
	//chaining? 
	friend ostream &operator << (ostream &output, Rational &rhs); 
	
	
	
	//functions in public
	public:
		//make sure we initialize the data with the proper values. 
		//called a constructor, no arguments so it becomes a default constructor. 
		Rational (); 
		
		//function overloading 
		//we have two functions of the same name. Can't do this in raw C. 
		Rational( int newNum, int mDen); 
		
		//copy constructor-implicitly invoked when we passed by value. 
		//two versions of copy "shallow" and "deep" 
		 //& is pass by reference. You can't pass by reference in C. 
		//You only pass by value in C. pass by value means you get a copy of the object. pass by reference means you get direct access to the object. 
		//this is not indirect like a pointer, but instead we are getting the DIRECT ACCESS to it. 
		Rational(Rational &copyObject);
		
		// in old procedural C paradigm: Rational addition (Rational lhs, Rational rhs); //method() instead of function() in cpp
		//Rational addition (Rational lhs, Rational rhs); 
		
		Rational add(Rational rhs); // more like += 
		
		
		//gets invoked automatically once the object leaves the scope. 
		//prevents memory leaks from happening
		~Rational (); 
		
		
		Rational & operator = (Rational &rhs);  
		
		
		
		
		//getters - accessors
		int getNumerator() const; //becomes a constant function which means that it cannot change the private data members of the class. 
		//const int number = 0; 
		
		int getDenominator() const; 
		
		//setters - mutators 
		
		void setNumerator (int newNumerator); 
		void setDenominator( int newDenominator); 
		
	
	//data in private
	private: 
		int mNumerator; 
		int mDenominator; 
	
	//protected: 
	
	
};

//rational addition should return a rational result
//non member, also not a friend
Rational operator + (Rational &lhs, Rational &rhs);























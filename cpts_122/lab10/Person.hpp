#pragma once 

#include <iostream> 
#include <string> 



using std::string; 
using std::istream; 
using std::ostream; 


typedef enum Gender
{
	FEMALE, MALE
}




class Person
{

	private:
		string name; 
		int height age; 
		
		Gender gender; 
		
		
	public: 
	
		//default constructor 
		Person(); 
		
		Person(string inname = " ", double newheight = 0.0, int newage = 0, Gender newgen); 
		
		//copy constructor
		Person(Person &other);
		
		//destructor 
		~Person(); 
		
		//getters/setters
		double getName() const; 
		
		double getHeight() const; 
		
		int getAge() const; 
		
		Gender getGender() const; 
		
		//setters 
		
		void setName(const string &); 
		void setheight(const double &); 
		void setAge(const int &); 
		void setGender(const Gender &); 
		
		
		
		//operator overloads
		Person &operator = (Person &rhs);
		
		friend istream & operator >> (istream &rhs, Person &lhs); 
		
		friend ostream & operator << (ostream &rhs, Person &lhs); 
		
		
};

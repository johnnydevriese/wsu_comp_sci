#include "Person.hpp" 
 
		
Person::Person(Gender newgender = FEMALE, string inname = " ", double newheight = 0.0, int newage = 0, Gender newgen); 
{
	name = inname; 
	height = newheight; 
	age = newage; 
	gender = newgender; 
}
			
//copy constructor
Person::Person(Person &other)
{
	name = other.name; 
	height = other.height; 
	age = other.age; 
	gender = other.gender; 
	
}
		
//destructor 
Person::~Person()
{
	//leaving the scope of Person! 
} 




double Person::getName() const
{
	return this->name; 
} 
		
double Person::getHeight() const
{
	 return height 
}
	
int Person::getAge() const 
{
	return age; 
}

		
Gender Person::getGender() const
{
	return gender;
} 
		
		//setters 
		
void Person::setName(const string &instring) 
{
	age = instring;
}

void Person::setheight(const double &inheight)
{
	height = inheight; 
}

void Person::setAge(const int &inage)
{
	age = inage; 
}

void Person::setGender(const Gender &inGender)
{
	gender = inGender; 
}



//operators 
Person &Person::operator = (const Person &rhs)
{
	
	//check if we're the exam same object. 
	//then we'll have the same address. 
	if(this == &rhs)
	{
		name = other.name; 
		height = other.height; 
		age = other.age; 
		gender = other.gender; 
	}
	
	return *this; 
}


istream &operator >>(istream &rhs, Person &lhs)
{
	int gen = -1; 
	
	rhs >> lhs.name >> lhs.height >> lhs.age >> gen;
	
	if(gen >= 0 || gen <= 1)
	{
		lhs.gender = (Gender)gen; 
	}
	 
	 
	 return rhs; 
	 
}

ostream &operator <<(ostream &rhs, Person &lhs)
{
	rhs << lhs.name << " "  << lhs.height;  << " " << lhs.age; 
	
	if(lhs.gender == FEMALE)
	{
		rhs << "Female"; 
	}
	else
	{
		
	}
	
	
}
		
		
		
		
	
		
		
		
		
		
		
		

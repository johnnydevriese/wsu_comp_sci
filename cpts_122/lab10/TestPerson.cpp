
#include "TestPerson.hpp"


TestPerson::TestPerson(Gender newgender, string innname, double newheight, int newage, string stand, int totcred, double gpa)
: Person(newgender, inname, newheight, newage)
{
	//USE PARENT/BASE CONSTRUCTOR	
	
	//now we just have to change the ones for student. 
	
	class_stand = stand; 
	total_credits = totcred; 
	gpa = newgpa; 
	
	
	
	
}



void TestPerson::failClass()
{
	//***decrement his GPA
	//lose weight 
	//shorter 
	//lower total credit
	
	gpa -= 1.0; 
	total_credits = 8; 
	
	//dont have access to height or age because base class has it as private. 
	//height -= 20; 
	//age += 1; 
	
	int height = this->getHeight(); 
	int age = this->getAge(); 
	
	
	this->setHeight(height - 0.2); 
	this->setAge(age + 1); 
	
	//this would work also
	//this->setHeight( this->getheight() - 0.2 ); 
	
	
	
}



void TestPerson::sexChange()
{
	//shorter female, gpa up, name change
	
	name = name.append("ella"); 
	
	if(gender == MALE)
	{
		gender = FEMALE;
	}
	else
	{
		gender = MALE; 
	}
	
}
		
	
	
} 
	

TestPerson::TestPerson()
{
	
}


TestPerson::~TestPerson()
{
	
}

bool TestPerson::testAssign()
{
	
	//just using our constructor
	Person p1(0, "Jane Doe", 5.8, 21); 
	
	Person p2(MALE, "John Doe", 6.0, 21);  


	//try to overwrite Jane with John's information. 
	p1 = p2; 


	//can compare names because they are just regular old strings. 
	if(p1.getname() == p2.getName() )
	{
		return true; 
	}

	return false; 

}

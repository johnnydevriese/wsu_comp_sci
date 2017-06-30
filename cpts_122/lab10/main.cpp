

#include "Person.hpp"
#include "TestPerson.h" 

int main()
{
	
	//initialize to these values 
	Person testing(MALE, "John", 6.0, 20, "Freshman", 12, 3.0); 
	
	
	/*
	if(test.testAssign() )
	{
		cout << "het is alive!" ; 
		
	}
	else
	{
		cout << "something's not right" ; 
	}
	
	*/
	
	//not happening
	//p1.name = "john"; 
	
	testing.failClass(); 
	cout << test.getAge(); 
	cout << testing.getHeight(); 
	
	
	system("pause"); 
	
	
	return 0; 
}

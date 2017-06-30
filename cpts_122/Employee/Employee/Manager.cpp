#include "Manager.h"



//explicitly calling the constructor

Manager::Manager(string newName, double newPayRate ,double newHours, bool newSalariedEmployee) : Employee (newName, newPayRate, newHours)
{
	mSalaried = newSalariedEmployee; 
	
}


Manager::~Manager()
{
	cout << "in Manager's destructor" << endl; 
} 

double Manager::calculatePay()
{//andy does not like more than one return statement. 
	
	double rate; 
	
	//check if employee is salaried. 
	if(!mSalaried) 
	{ 
		//they are not salaried  
		rate = Employee::calculatePay(); 
	}
	else 
	{
		rate = mpayRate; //getmPayRate (); 
			
	}
	
	return rate; 
}

#ifndef MANAGER_H
#define MANAGER_H

#include <iostream>
#include <string>

#include "Employee.h"

using std::cout;
using std::cin;
using std::endl;
using std::string;

// Manager is a derived class, it's derived from Employee 
class Manager : public Employee  // public inheritance
{
	public:
		Manager (string newName, double newPayRate, double newHours, bool newSalariedEmployee);
		~Manager ();

		// With inheritance, we should NOT have to redefine
		// many of the functions that we find in the Employee
		// class!
	/*	string getName ();
		double getPayRate ();
		double getHours ();

		void setName (string newName);
		void setPayRate (double newPayRate);
		void setHours (double newHours);*/

		double calculatePay ();

	private:
		/*string mName;
		double mPayRate;
		double mHours;*/
		
		bool mSalaried; 
	
};

#endif

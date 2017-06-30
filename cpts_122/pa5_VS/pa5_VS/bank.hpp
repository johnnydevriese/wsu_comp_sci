#include<iostream>
#include<string> 
//#include "LinkedList.hpp"
//using namespace std; 

using std::cin; 
using std::cout; 
using std::endl;
using std::string; 




//or std::string 

//forward declarations
class List;
class ListNode;


class Account
{
//access specifier public so it is "available to the public" 

friend class List;

friend class ListNode;

public: 

	//constructor call occurs implicitly when the object is created. 
	//if a class does not explicitly include a constructor, the compiler providdes a default constructor--one with NO parameters
	//constructor intializes object "whatever-name-you-wanna-call-it" with the information you supply in the argument of the function 
	//default constructor
	Account();
	
	Account(double account_balance, int account_number, string customer_name, string date); 
	

	//Member function credit should add an amount to the current balance and store it back into the balance. 
	void credit(double credit); 
	
	//Member function debit should withdraw money from the Account, modify the balance, and ensure the debit amount does not exceed 
	//the Account's balance. If it does, the balance should be left unmodified and the function should print an appropriate message. 
	void debit(double withdrawal); 
	
	//probably need to give it a class in order to access the elements? 
	//Member function printAccountInfo should print the current balance, account number, customer name, and date of the account.
	void printAccountInfo(); 
	
	//would you need a seperate setter & getter for each private data member??? 
	 /*EXAMPLE
	 void setCourseName(string name)
	 {
		 courseName = name; 
	 }
	 
	 string getCourseName()
	 {
		 return courseName(); 
	 }
	 */


	//setters
	void setAccountBalance(double newBalance);

	void setAccountNumber(double accNumber); 

	void setCustomerName(string newCustName); 

	void setDate(string newDate); 


	//getters 
	double getAccountBalance(); 

	double getAccountNumber(); 

	string getCustomerName(); 

	string getDate(); 

	

//when a function terminates, the values of its local variables are lost. 
//getters & setters are in sec. 16.4 of text. 
//declaring data members with access specifier private is called data hiding
private: 

	double account_balance; 
	int account_numer; 
	string customer_name; 
	string date; 
	
	
	

	
	
	
};


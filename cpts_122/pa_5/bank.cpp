#include"bank.hpp"

// :: is the binary scope resolution operator 

Account::Account()
{
	account_balance = 0.0; 
}

Account::Account(double balance, int accNumber, string custName, string Date)
{
	account_balance = balance; 
	
	account_numer = accNumber;
	
	customer_name = custName; 
	
	date = Date; 
	
}

void Account::credit(double credit)
{
	account_balance += credit; 
	
	
	
}


void Account::debit(double withdrawal)
{
	if( withdrawal > account_balance)
	{
		cout << "you aint got that kinda money \n" << endl; 
	}
	else
	{
		account_balance -= withdrawal; 
	}
	
}

void Account::printAccountInfo()
{
	
	
	
} 











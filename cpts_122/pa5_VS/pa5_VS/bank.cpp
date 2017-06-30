#include"bank.hpp"

// :: is the binary scope resolution operator 

Account::Account()
{
	account_balance = 0.0; 
}

Account::Account(double balance, int accNumber, string custName, string Date)
{

	if(balance < 0 )
	{
		cout << "you can not have negative money dawg" << endl;

		account_balance = 0 ;
	}
	else
	{
	account_balance = balance; 

	}

	account_numer = accNumber;

	customer_name = custName; 

	date = Date; 

}



void Account::setAccountBalance(double newBalance)
{
	this->account_balance = newBalance; 
}

void Account::setAccountNumber(double accNumber)
{
	this->account_numer = accNumber; 
}

void Account::setCustomerName(string newCustName)
{
	this->customer_name = newCustName; 
}

void Account::setDate(string newDate)
{
	this->date = newDate; 
}


//getters 
double Account::getAccountBalance()
{
	return this->account_balance;
}

double Account::getAccountNumber()
{
	return this->account_numer; 
}

string Account::getCustomerName()
{
	return this->customer_name;
}

string Account::getDate()
{
	return this->date;
}



void Account::credit(double credit)
{
	account_balance += credit; 
	
	//setAccountBalance( this->getAccountBalance() + credit );

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

	cout << account_balance << endl; 

	cout << account_numer << endl; 

	cout << customer_name << endl; 

	cout << date << endl; 



} 











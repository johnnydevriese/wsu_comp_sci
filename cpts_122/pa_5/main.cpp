/*
 * main.cpp
 * 
 *
 * 
 * 
 */


#include "bank.hpp"

int main(int argc, char **argv)
{
	Account Johnny;
	int selection; 
	double deposit = 0.00; 
	
	
	do
	{
		cout << "Please make a selection" << endl; 
		cout << "1. Deposit" << endl; 
		cout << "2. Withdraw" << endl; 
		cout << "3. Print Balance" << endl; 
		//cout << 4. add account << endl; 
		//cout << 5. Remove Account << endl; 
		cout << "6. Exit" << endl; 
		cin >> selection; 
		
		
		
		if(selection == 1)
		{
			//deposit function 
			cout << "Please enter how much money to add to account \n" << endl; 
			cin >> deposit; 
			//system("pause"); 
			Johnny.credit(deposit); 
			
			
		}
		else if(selection == 2) 
		{
			//withdraw function
		}
		else if(selection == 3) 
		{
			//print function
		}
		else if(selection == 4)
		{
			//add account
		}
		else if(selection == 5)
		{
			
		}
		
		
		
		
		
	}while(selection != 6);  
	
	
	
	
	return 0;
}


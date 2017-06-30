/*******************************************************************************************
* Programmer: Johnny Minor                                                                    *
* Class: CptS 122, Spring 2015; Lab Section 04                                             *
* Programming Assignment: Programming Assignment 5                                                    *
* Date: March 6, 2015                                                                          *
* Description: This program simulates a bank application.      *
*******************************************************************************************/


#include"LinkedList.hpp"




int main(int argc, char **argv)
{

	int selection = 0; 
	double accBalance = 0.00; 
	double deposit = 0.00; 
	double withdrawal = 0.00; 
	string custName; 
	int accNum = 0; 
	string date = "03/06/2015"; //would have to put in today's date. 

	List *wells_fargo = new List();

	//List usbank; 


	do
	{
		cout << "Please make a selection" << endl; 
		cout << "1. Deposit" << endl; 
		cout << "2. Withdraw" << endl; 
		cout << "3. Print Balance" << endl; 
		cout << "4. Add account "<< endl; 
		cout << "5. Remove Account "<< endl; 
		cout << "6. Exit" << endl; 
		cin >> selection; 


		//***deposit function ***
		if(selection == 1)
		{
			//getting users account number to search for. 
			//guarding against getting a negative account number
			do
			{
				cout << "Enter account number: ";
				cin >> accNum;
			}while(accNum < 1);

			//getting amount of money for account. 
			cout << "Please enter how much money to add to account \n" << endl; 
			cin >> deposit; 

			//find node will return a pointer to the ListNode with account number matching that searched for. 
			//otherwise node will be nullptr. 
			ListNode * node = wells_fargo->find_node(accNum);

			//checks if node is a nullptr 
			if(node == nullptr) 
			{
				cout << "Lol, we got your money. No such account found." << endl;
				system("pause"); 
			} 
			else //everything should be alright and we can deposit the money into the correct class. 
			{
				node->mData.credit(deposit);
			}

		}


		//*** withrdrawal function ***
		else if(selection == 2) 
		{
			do{
				cout << "Enter account number: ";
				cin >> accNum;
			}while(accNum < 1);

			//withdraw function
			cout << "Please enter how much money to take out of account. \n" << endl; 
			cin >> withdrawal ;

			ListNode * node = wells_fargo->find_node(accNum); 
			if(node == nullptr)
			{
				cout << "Sorry that account number does not exist." << endl; 
			}
			else
			{
				node->mData.debit(withdrawal); 
			}

			system("pause"); 
		}


		//***printing function *** 
		else if(selection == 3) 
		{

			do{
				cout << "Enter account number: ";
				cin >> accNum;
			}while(accNum < 1);

			ListNode * node = wells_fargo->find_node(accNum); 

			if(node == nullptr)
			{
				cout << "sorry that account number does not exist." << endl; 
			}
			else
			{
				node->mData.printAccountInfo();
			}	 
			system("pause"); 
		}
		else if(selection == 4)
		{
			//add account
			cout << "Please enter an account balance" << endl;   
			cin >> accBalance;

			cout << "Please enter a customer name." << endl;
			cin >> custName;

			cout << "Please enter an account number." << endl;
			cin >> accNum; 


			//someone could screw this up and enter the same acc #. That would be bad.  
			wells_fargo->insertOrder(accBalance, accNum, custName, date);

			system("pause"); 
		}


		else if(selection == 5)
		{
			do{
				cout << "Enter account number to delete: ";
				cin >> accNum;
			}while(accNum < 1);

			ListNode * node = wells_fargo->find_node(accNum); 

			if(node == nullptr)
			{
				cout << "sorry that account number does not exist." << endl; 
			}
			else
			{
				wells_fargo->deleteNode(accNum);
			}

			wells_fargo->deleteNode(accNum); 

			system("pause"); 
		}


		system("cls"); 


	}while(selection != 6);  




	delete wells_fargo;
	return 0;
}


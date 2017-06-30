#include"ListNode.hpp"


using std::ostream; 

//list is a collection of listnode's 
class ListNode; 
class Account;


class List
{

	//want to print list. 
	//returns ostream type 

	friend ostream & operator << (ostream &lhs, List &rhs); //inside () are the arguments of the function. 


public: 

	List();

	//constructor 
	List( List &copyObject); 

	//destructor 
	~List(); 

	//overloaded assignment 
	List & operator = (List &rhs); 

	//make node dynamically allocates memory and gives the ListNode. 
	ListNode *makeNode (double accBalance, int accNumber, string custName, string date); 

	//typically return true/false whether or not it was successful. 
	bool insertOrder (double accBalance, int accNumber, string custName, string date); //we don't have to pass in **pHead because it's part of the class, so you can access the elements automagically
	//as opposed to in C bool insertOrder(

	//find and delete the int that you input. 
	bool deleteNode( int accSearch);

	//finds the node you're looking for and returns the address of it. 
	ListNode * find_node(int searchVal); 

	void creditLinkedList( int searchVal, double credit); 

	void debitLinkedList( int searchVal, double withdrawal); 

	void printLinkedList( int searchVal); 


private:

	ListNode *pHead ; 

};

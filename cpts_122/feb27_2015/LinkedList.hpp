#include"ListNode.hpp"

//#pragma once

using std::ostream  

//list is a collection of listnode's 

class List
{

//want to print list. 
//returns ostream type 

friend ostream & operator << (ostream &lhs, List &rhs); //inside () are the arguments of the function. 


public: 

	//constructor 
	List( List &copyObject); 
	
	//destructor 
	~List(); 
	
	//overloaded assignment 
	List & operator = (List &rhs); 

	//make node dynamically allocates memory and gives the ListNode. 
	ListNode *makeNode ( string newString); 

	//typically return true/false whether or not it was successful. 
	bool insertOrder (string newString); //we don't have to pass in **pHead because it's part of the class, so you can access the elements automagically
	//as opposed to in C bool insertOrder(
	
	bool deleteNode( string searchString); 
		
		
private:

	ListNode *pHead; 
	

	






};





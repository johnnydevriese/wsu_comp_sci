#include"StackNode.hpp"

//#pragma once 


class Stack
{



public: 
	Stack(); 
	//not going to write for now 
	Stack(const Stack & other); 
	~Stack(); 
	
	void push( const char &newdata); //pass by ref is faster and generally want const because you don't want to able to modify the data. 
	char pop(); 
	char top(); 
	bool isEmpty(); 
	int getSize(); 
	
	//operators 
	friend ostream & operator << (ostream &output, Stack &rhs); 
	//not going to define this here 
	Stack &operator = (Stack &other); 
	
	


private:

	StackNode *pTop; 
	int size; 
	//private so the only thing managing our pointers is te stack 
	
	StackNode *makenode( const char &newdata); 
	
	
	

};


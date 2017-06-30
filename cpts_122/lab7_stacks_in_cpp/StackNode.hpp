#include<iostream> 
#include<string> 


using std::cin;
using std::cout;
using std::endl; 
using std::string; 


//forward declaration 
class Stack; 

class StackNode
{
//have to make Stack class a friend 
friend class Stack; 
	
public: 

	//Alan's constructors/destructors 
	//default
	StackNode(); 
	StackNode(char newdata); 
	StackNode( const StackNode &other); 
	~StackNode(); 

	/*
	//constructor 
	StackNode( string newString = " "); 
	
	//constructor 
	StackNode( StackNode &copyObject); 
	
	//destructor 
	~StackNode();
	*/
	
	//operators
	StackNode &operator = (const StackNode &other); 
	friend 
	 



private:	

	string mData;
	
	StackNode *pNext; 
	
	
	
	
	
}; 




















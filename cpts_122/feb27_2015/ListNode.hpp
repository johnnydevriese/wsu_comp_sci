#include<iostream> 
#include<string> 

using std::cin; 
using std::cout; 
using std::endl;
using std::string; 



/*recall rule of 3
 * 1. copy constructor 
 * 2. destructor 
 * 3. overloaded assignment operator 
 * 
 */
 
//needed so that compiler knows about List when we use the friend statement
class List; //forward declaration, don't give me an error because i will eventually make this class. 
 

class ListNode
{
	
friend class List; //a list can access private members of a node. 

	
public: 

	ListNode (string newString = " "); 

	//copy constructor
	//see a reference to same type 
	//have to pass by reference otherwise will have an infinite loop 
	ListNode (ListNode &copyObject); 
	
	//destructor 
	//doesn't return a value
	~ListNode();
	
	//overloaded assignment
	//have to think about chaining operators 
	//assignment operator is a binary operation 
	//the thing that invokes it is the second operand. 
	ListNode & operator = (ListNode &rhs) ; 
	
	
	
private: 
	string mData; 
	ListNode *mpNext; 
	
	

	
	
	
	
};

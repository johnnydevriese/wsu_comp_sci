#include<iostream> 
#include<string> 
#include<vector> 

#pragma once 

using namespace std; 

using std::cin; 
using std::cout; 
using std::endl;
using std::string; 
using std::vector; 


/*recall rule of 3
* 1. copy constructor 
* 2. destructor 
* 3. overloaded assignment operator 
* 
*/

//needed so that compiler knows about List when we use the friend statement
//forward declaration, don't give me an error because i will eventually make this class. 
class List; 



class ListNode
{

	friend class List; //a list can access private members of a node. 


public: 

	ListNode (string RecordNumber, string IdNumber, string Name,
		string Email, string Units, string Major, string Level, int absCount, vector<string> absDate);

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

	string nodeRecordNumber; 
	string nodeIdNumber;
	string nodeName; 
	string nodeEmail; 
	string nodeUnits; 
	string nodeMajor;
	string nodeLevel;

	int absenceCount; 
	vector <string> absenceDate;

	ListNode * mpNext;
	 



private:

	



};

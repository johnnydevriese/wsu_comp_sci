#include<iostream> 
#include<string> 

using std::string; 

using::stdnamespace; 

class BSTree; 

class BSTNode
{
friend class binarySearchTree; 
	
public: 
	
	//constructor 
	BSTNode(const char newch = '\0', const string newstr = " ");
	//copy constructor 
	BSTNode(const BSTNode &other); 
	~BSTNode();  
	
	//destructor 
	
	//all are constants
	//setters & getters
	BSTNode *getLeft () const; 
	BSTNode * getRight() const; 
	char getChar() const; 
	string getString() const; 


	void setLeft(BSTNode *newLeft); 
	void setRight(BSTNode *newright); 
	void setChar( const char &newch); 
	void setString(const string &newstr); 
	
	BSTNode &operator = (BSTNode &other); 


private: 

	//has char 
	char ch; 
	//has morse code string 
	string str; 
	
	BSTNode * pLeft; 
	BSTNode * pRight; 


};	
	

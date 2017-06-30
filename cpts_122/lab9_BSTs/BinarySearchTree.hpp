#pragma once 

#include "BSTNode.hpp" 

class BSTree
{
private: 
	BSTNode * root; 
	int size; 

	bool addNode( BSTNode **root, const char &ch, const string &string); 
	string find(BSTNode **root, const char &ch); 


public: 
	BSTree(); 
	~BSTree(); 

	//getters & setters
	int getsize() const; 
	bool isempty() const; 

	//focusing on adding to the tree and finding in the three. 
	bool addNode(const char &ch, const string &string); 
	
	string find(const char &ch); 

	
	

};

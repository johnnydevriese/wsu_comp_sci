#include "BSTNode.hpp" 

BSTNode::BSTNode(const char newch = '\0', const string newstr = " " )
{
	ch = newch; 
	st = newstr; 
	pLeft = pRight = nullptr; 
	
}


//copy constructor want all the values equal to the &other's values 
BSTNode::BSTNode(const BSTNode & other) 
{ 
	this->ch = other.ch; 
	this->str = other.str; 
	this->pLeft = other.pLeft; 
	this->pRight = other.pRight; 
	
}



BSTNode::~BSTNode()
{
	
}


BSTNode::BSTNode *getLeft () const
{
	
} 

BSTNode::BSTNode * getRight() const
{
	
}
 
char BSTNode::getChar() const
{
	
} 

string BSTNode::getString() const
{
	
} 

void BSTNode::setLeft(BSTNode *newLeft)
{
	this->pLeft = newLeft; 
} 
	
void BSTNode::setRight(BSTNode *newright)
{
	this->pRight = newright; 
} 

void BSTNode::setChar( const char &newch)
{
	this->ch = newch; 
} 

void BSTNode::setString(const string &newstr)
{
	this->str = newstr; 
} 
	
BSTNode & BSTNode::operator = (BSTNode &other)
{
	if (this != &other)
	{ 
		this->ch = other.ch; 
		this->str = other.str; 
		this->pLeft = other.pLeft; 
		this->pRight = other.pRight; 
	}
	
	return *this; 
} 
	

#include "BSTree.hpp" 


//use inheretence : and use the other classes constructor. 
BSTree:BSTree() : root(nullptr), size(0)
{	
}

BSTree::~BSTree()
{
	//don't worry aboot it. 
}


bool BSTree::getsize() const
{
	return size; 
}

bool BSTree::isempty() const
{
	return root == nullptr; 
}

//public add function 
bool BSTree::addNode(const char & ch, const string &string) 
{

	return addNode(&root, ch, stirng); 
	
	 
}


string BSTree::find( const char & ch) 
{
	return find(&root, ch); 
}


//keeping track of size and returning a bool value
bool BSTree::find(BSTree **root, const char &ch, string &string)
{
	//empty tree case
	if (*root == nullptr)
	{
		*root = new BSTNode(ch, string); 
		size++; 
		//set our boolean value to return 
		return true; 
	}
	
	//if tree is not empty and we need to compare. 
	else if( (*root)->ch < ch)
	{
		return addNode( &(*root)->pRight, ch, string); 
	
	}
	else if( *(root)->ch > ch)
	{
		return addNode( &(*root)->pLeft, ch, string); 
	}
	/*
	 * else 
	 * cou <, "insert witty error here" << endl; 
	 * }*/ 
	return false; 
}


//either hit a null ptr or if you are equal to that value 
string BSTree::find(BSTNode **root, const char &ch) 
{
	if( *root == nullptr)
	{
		//could return an empty string or error message. 
		return " "; 
	}
	
	//if they are equal then just return the string 
	else if( (*root)->ch == ch)
	{
		return (*root)->str; 
	}
	
	else if( ch < (*root)->ch)
	{
		return find(&(*root)->pLeft(), ch); 
	}
	
	else if( ch > (*root)->ch)
	{
		return(&(*root)->pRight, ch); 
	}
	else
	{
		cout << "dubyateeeff m8 !? "; 
	}
	
}

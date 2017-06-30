#include "ListNode.hpp"

/NODETYPE is a generic type. 


template<class NODETYPE> 
ListNode<NODETYPE>:: ListNode(const NODETYPE &newData) // copy constructor(but not reall)
{
	
	this->data = newData;
	this->nexPtr = nullptr; 
}

template<class NODETYPE> 	
NODETYPE ListNode<NODETYPE>::ListNode(const ListNode<NODETYPE> &other)
{
	if(this != &other)
	{
		this->data = other.data; 
		this->nextPtr = other.Ptr; 
	}
}


template< class NODETYPE>
NODETYPE ListNode<NODETYPE>::getData() const // return data in the node 
{ 
	
	return data; 
}

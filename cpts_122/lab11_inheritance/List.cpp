#include "List.hpp" 

template<class NODETYPE> 
List<NODETYPE>::List()
{
	firstPtr = nullptr; 
	lastPtr = nullptr; 
}


template<class NODETYPE> 
void List<NODETYPE>::insertAtFront( const NODETYPE &newData )
{
	
	ListNode<NODETYPE> *newNode getNewNode(newdata); 
	
	if(!isEmpty()) //list is not empty 
	{
		//put new node in front 
		newNode->nextPtr = firstPtr; 
		
		//move front of the list. 
		firstPtr = newNode; 
	}
	
	else
	{
		firstPtr = newNode; 
		lastPtr = newNode; 
	}
	
	
	//List<NODETYPE> * temp = new ListNode <NODETYPE>(newdata); 
	
	//temp = this->firstPtr;
	
	//this->firstPtr = temp; 
	
	
}

template<class NODETYPE> 
void List<NODETYPE>::insertAtBack( const NODETYPE &newData )
{
	ListNode<NODETYPE> * newNode = getNewNode(newData); 
	
	if(!isEmpty()) // list is not empty 
	{ 
		lastPtr->nextPtr = newNode; 
		lastPtr = newNode; 
	}
	else
	{
		firstPtr = newNode; 
		lastPtr = newNode; 
	}
	
}

template<class NODETYPE> 
bool List<NODETYPE>::removeFromFront( NODETYPE &removedData )
{
	NODETYPE nodedata ; 
	ListNode<NODETYPE> *temp = nullptr; 
	
	//cases: empty, one item, more than one item. 
	
	
	if(isEmpty()) //empty list
	{
		nodedata = NULL; 
		//return false; 
		
	}
	else if(firstPtr == lastPtr) // only one item in list
	{
		//copying data into the nodedata. 
		//using the getdata function just for fun. 
		//nodedata = (this->firstPtr)->getData(); 
		
		removedData = (this->firstPtr)->getData(); 
		
		temp = firstPtr; 
		
		//pointer reassignment 
		//temp = this->firstPtr; 
		
		lastPtr = firstPtr->next; 
		firstPtr = firstPtr->nextPtr; 
		
		//free memory 
		delete temp; 
		
		
	}
	else // not empty list
	{
		//copying data into the nodedata. 
		//using the getdata function just for fun. 
		//nodedata = (this->firstPtr)->getData(); 
		
		removedData = (this->firstPtr)->getData(); 
		
		temp = firstPtr; 
		
		//pointer reassignment 
		//temp = this->firstPtr; 
		
		//lastPtr = firstPtr->next; 
		firstPtr = firstPtr->nextPtr; 
		
		//free memory 
		delete temp; 
		
		
	}
	
	return true; 
	
	
}

template<class NODETYPE> 
bool List<NODETYPE>::removeFromBack( NODETYPE &removedData )
{
	ListNode<NODETYPE> * temp = firstPtr; //, *prev = nullptr; 
	
	if(isEmpty() ) /empty list 
	{
	
		//dont' touch it bro. 
		removedData = NULL; 
		reutrn false; 
	}
	else if(lastPtr == firstPtr) //one item in list
	{
		
		//grab data 
		removedData = (this->firstPtr)->getData(); 
		
		//grab the last pointer
		temp = lastPtr; 
		
		this->lastPtr = this->lastPtr->nextPtr; 
		this->firstPtr = this->firstPtr->nextPtr; 
		
		delete temp; 
	}
	else //list is not empty and has more than one item. 
	{
		while(temp->nextPtr != lastPtr)
		{
			
			temp = temp->nextPtr; 
		}
		
		removedData = (this->lastPtr)->getData(); 
			
		//there is a swap() function somewhere... 	
			
		lastPtr = temp; 
		temp = temp->nextPtr; 
		
		delete temp; 
		
	}
		
	
	return true; 
	
}

template<class NODETYPE> 
bool List<NODETYPE>::isEmpty() const
{
	
	bool result = false; 
	if(this->firstPtr == nullptr)
	{
		
	}
	
	
	
}

template<class NODETYPE> 
void List<NODETYPE>::print() const
{
	List<NODETYPE> * temp = this->firstPtr; 
	
	while(temp) 
	{
		cout << temp -> data; 
		temp = temp -> nextPtr; 
		
	}
	
}



template<class NODETYPE> 
ListNode<NODETYPE> * List< NODETYPE>::getNewNode(const NODETYPE & newdata)
{
	ListNode<NODETYPE> *newNode = new ListNode <NODETYPE>(newdata); 
	
	return newNode; 
}

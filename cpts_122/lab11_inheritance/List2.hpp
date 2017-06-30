#pragma once
//#include<iostream> 

//using namespace std 


template< class NODETYPE > class List;  // forward declaration

template<class NODETYPE>
class ListNode
{
	friend class List< NODETYPE >; // make List a friend
public:
	ListNode(const NODETYPE &newData);  // NOT a copy constructor
	ListNode(const ListNode<NODETYPE> &other); //this is a copy constructor
	NODETYPE getData() const;      // return data in the node
private:
	NODETYPE data;                 // data
	ListNode< NODETYPE > *nextPtr; // next node in the list
};


template< class NODETYPE >
class List
{
public:
	List();      // constructor
	~List();     // destructor
	void insertAtFront(const NODETYPE &newData);
	void insertAtBack(const NODETYPE &newData);
	bool removeFromFront(NODETYPE &removedData);
	bool removeFromBack(NODETYPE &removedData);
	bool isEmpty() const;
	void print() const;
private:
	ListNode< NODETYPE > *firstPtr;  // pointer to first node
	ListNode< NODETYPE > *lastPtr;   // pointer to last node

	// Utility function to allocate a new node
	ListNode< NODETYPE > *getNewNode(const NODETYPE &newData);
};

template<class NODETYPE>
ListNode<NODETYPE>::ListNode(const NODETYPE &newData)  //Not a copy constructor!
{
	this->data = newData;
	this->nextPtr = nullptr;
}

template<class NODETYPE>
ListNode<NODETYPE>::ListNode(const ListNode<NODETYPE> &other)
{
	if (this != &other)
	{
		this->data = other.data;
		this->nextPtr = other.nextPtr;
	}
}

template<class NODETYPE>
NODETYPE ListNode<NODETYPE>::getData() const      // return data in the node
{
	return data;
}


template<class NODETYPE>
List<NODETYPE>::List()
{
	firstPtr = nullptr;
	lastPtr = nullptr;
}

template<class NODETYPE>
List<NODETYPE>::~List()
{

}

template<class NODETYPE>
void List<NODETYPE>::insertAtFront(const NODETYPE &newData)
{
	ListNode<NODETYPE> *newNode = getNewNode(newData);

	if (!isEmpty())//list is not empty
	{
		//put new node in front
		newNode->nextPtr = firstPtr;
		//move front of the list
		firstPtr = newNode;
	}
	else //we are empty
	{
		firstPtr = newNode;
		lastPtr = newNode;
	}
}

template<class NODETYPE>
void List<NODETYPE>::insertAtBack(const NODETYPE &newData)
{
	ListNode<NODETYPE> *newNode = getNewNode(newData);

	if (!isEmpty())//list is not empty
	{
		lastPtr->nextPtr = newNode;
		lastPtr = newNode;
	}
	else //is empty
	{
		firstPtr = newNode;
		lastPtr = newNode;
	}
}

template<class NODETYPE>
bool List<NODETYPE>::removeFromFront(NODETYPE &removedData)
{
	//NODETYPE nodedata;
	ListNode<NODETYPE> *temp = nullptr;

	if (isEmpty()) //empty list
	{
		return false;
	}
	else if (firstPtr == lastPtr)//only one item in list?
	{
		//grab data from out of node at front
		//nodedata = (this->firstPtr)->getData();
		removedData = (this->firstPtr)->getData();
		//no dangling pointers
		temp = firstPtr;
		//move first pointer foreward, and fix last pointer
		//could also be setting equal to nullptr, but this code should do that
		lastPtr = firstPtr->nextPtr;
		firstPtr = firstPtr->nextPtr;
		//free memory
		delete temp;

	}
	else //not empty, more than one item
	{
		//grab data from out of node at front
		//nodedata = (this->firstPtr)->getData();
		removedData = (this->firstPtr)->getData();
		//no dangling pointers
		temp = firstPtr;
		//move first pointer foreward
		firstPtr = firstPtr->nextPtr;
		//free memory
		delete temp;
	}
	return true;
}

template<class NODETYPE>
bool List<NODETYPE>::removeFromBack(NODETYPE &removedData)
{
	ListNode<NODETYPE> *temp = firstPtr; //*prev = nullptr;

	if (isEmpty()) //empty list
	{
		//DONT TOUCH IT!
		return false;
	}
	else if (lastPtr == firstPtr) //one item in list
	{
		//grab data
		removedData = (this->lastPtr)->getData();
		//grab the last pointer
		temp = lastPtr;
		this->lastPtr = this->lastPtr->nextPtr;
		this->firstPtr = this->firstPtr->nextPtr;

		delete temp;
	}
	else //list is not empty and has more than one item
	{
		while (temp->nextPtr != lastPtr)
		{
			temp = temp->nextPtr;
		}
		//grab data
		removedData = (this->lastPtr)->getData();
		//swap last and temp
		//swap();
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

	if (this->firstPtr == nullptr)
	{
		result = true;
	}
	return result;
}

template<class NODETYPE>
void List<NODETYPE>::print() const
{
	ListNode<NODETYPE> *temp = this->firstPtr;

	while (temp)
	{
		cout << temp->data;
		temp = temp->nextPtr;
	}
}

template<class NODETYPE>
ListNode< NODETYPE > *List<NODETYPE>::getNewNode(const NODETYPE &newData)
{
	ListNode<NODETYPE> *newNode = new ListNode<NODETYPE>(newData);

	return newNode;
}

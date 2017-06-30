#include "List2.hpp"


template <class T> 
class Stack : private List <T>
{
	public:
	Stack(); 
	~Stack(); 
	//push(), pop(), top(), full(), and empty 
	void push(const &T); 
	T top(); 
	
	bool empty();

	void printStack(); 
	
	
	
}; 



template <class T> 
Stack<T>::Stack() : List()
{
	
	

}

template <class T> 
void Stack<T>::push(const &T newdata)
{
	
	this->insertAtFront(newdata); 
	
	
}

template <class T> 
T Stack<T>::top()
{
	return this->firstPtr->data; 
}
	
	
template <class T> 	
bool Stack<T>::empty()
{
	
	return isEmpty(); 
}

template <class T> 
void Stack<T>::printStack()
{
	
	this->print(); 
}








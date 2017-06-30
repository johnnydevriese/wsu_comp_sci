#include"Stack.h" 


Stack::Stack()
{
	pTop = nullptr; 
	size = 0; 
}

//copy constructor 
Stack(const Stack & other)
{
	pTop = other.pTop; 
	size = other.size; 
} 


//destructor
// want this to free all of the nodes in the stack 
Stack::~Stack()
{
	StackNode * pTemp = pTop, *pNext = nullptr; 
	
	//
	while(pTemp != nullptr)
	{
		pNext = pTemp->pNext; 
		//now free the memory 
		delete pTemp; 
		pTemp = pNext; 	
	}
	
	pTop = nullptr; 

}

//private makenode so the only thing that would be able to use it is the stack. 
StackNode * Stack::makenode(const char &newdata)
{
	StackNode *pNew = nullptr; 
	
	pNew = new StackNode(newdata); 
	
	/*/coudl say this and it would be the same: 
	pNew = new StackNode; 
	pNew->data = newdata; 
	pNew->pNext = nullptr; 
	*/
	
	
	return pNew; 
}


void Stack::push(const char &newdata)
{
	StackNode * pTemp = nullptr; 
	
	//make a node since we have a makenode function. 
	pTemp = makenode(newdata); 
	
	//cheating on the condition because nullptr == FALSE
	if(pTemp)
	{
		//not empty 
		if(size > 0)
		{
			pTemp->pNext = pTop; 
			pTop = pTemp; 
			//keep track of size
			size++;
		}
		//empty 
		else
		{
			pTop = pTemp; 
			size++;
		}
	
	}
	
	
	
} 

char Stack::pop(char &newdata)
{
	/*
	char temp = nullptr; 
	
	temp = pTop->pdata; 
	
	pTop = pTop->pNext; 
	*/
	
	StackNode *pTemp = this->pTop, *pAfter = nullptr; 
	char ret_char = '\0'; 
	
	//are we empty? 
	if(pTemp)
	{
		//move pTop forward
		pTop = pTemp->pNext; 
		
		//grab char from popped node
		ret_char = pTemp->data; 
		delete pTemp; 
	}
	
	return ret_char; 
} 

char Stack::top()
{
	
	
} 


bool Stack::isEmpty()
{
	bool success = true; 
	
	if(pTop == nullptr)
	{
		successs = false; 
	}
	
	
	
	return success; 
} 


int Stack::getSize()
{
	int sizeTemp = 0; 
	
	sizeTemp = size; 
	
	return sizeTemp; 
}


ostream &operator <<(ostream &output, Stack &rhs)
{
	StackNode *pTemp = rhs.pTop; 
	
	while(pTemp)
	{
		output << pTemp; 
		pTemp = pTemp->getnext(); 
	}
	return output; 
}

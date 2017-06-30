StackNode::StackNode()
{
	data = '\0';
	pNext = nullptr; 
}

StackNode:StackNode(char newdata)
{
	data = newdata; 
	pNext = nullptr; 
	
}

StackNode::~StackNode()
{
	
}

StackNode * StackNode::getNext() 
{
	return this->data; 
}

StackNode & StackNode::operator =(const StackNode &other)
{
	
	if(this != &other)//are we the same object? (comparison by value)
	{
		this->data = other.data; 
		this->pNext = other.pNext; 
	}
	return *this;
}


ostream &operator << (ostream & output, StackNode & rhs)
{
	output << rhs.data << ">>"; 
	
	return output; 
} 


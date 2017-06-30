#include"ListNode.hpp" 




ListNode::ListNode (ListNode &copyObject)
{
	//do we want a shallow copy or deep copy? 
	//shallow copy makes copies of private data members, 
	//but does not allocate new dynamic memory
	//in this instance shallow copy will be good enough 
	this->mData = copyObject.mData; 
	
	this->mpNext = copyObject.mpNext; 
	
	
	
	//deep copy allocates new memory and then makes a copy
	
	
}

ListNode::~ListNode()
{
	//does nothing
	cout << "exiting a ListNode object -- going out of scope." << endl; 
	
	
	
}


ListNode::ListNode (double accBalance, int accNumber, string custName, string date)
{
	Account tempAcc(accBalance, accNumber, custName, date); 

	this->mData = tempAcc;

	//this->mData.customer_name = newString; 
	this->mpNext = NULL;
	
}








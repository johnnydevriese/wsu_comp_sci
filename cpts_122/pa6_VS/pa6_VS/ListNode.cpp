#include"ListNode.hpp" 




ListNode::ListNode (ListNode &copyObject)
{
	//do we want a shallow copy or deep copy? 
	//shallow copy makes copies of private data members, 
	//but does not allocate new dynamic memory
	//in this instance shallow copy will be good enough 
	
	//this->mData = copyObject.mData; 
	
	this->mpNext = copyObject.mpNext; 
	
	
	
	//deep copy allocates new memory and then makes a copy
	
	
}

ListNode::~ListNode()
{
	//does nothing
	cout << "exiting a ListNode object -- going out of scope." << endl; 
	
	
	
}




ListNode::ListNode (string RecordNumber, string IdNumber, string Name,
		string Email, string Units, string Major, string Level, int absCount, vector<string> absDate )
{
	//could probably use this-> ? 
	this->nodeRecordNumber = RecordNumber; 
	nodeIdNumber = IdNumber; 
	nodeName = Name; 
	nodeEmail = Email; 
	nodeUnits = Units; 
	nodeMajor = Major; 
	nodeLevel = Level; 
	absenceCount = absCount; 
	absenceDate = absDate; 
	
	mpNext = nullptr; 

}




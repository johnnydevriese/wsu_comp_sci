#include"LinkedList.hpp" 



ListNode *List::makeNode ( string newString)
{
	
	ListNode * pMem = NULL; 
	
	//replace malloc()  with new
	//constructor will be invoked.
	//if we had a better constructor we could do: 
	
	//pMem = new ListNode (newString); 
	
	pMem = new ListNode; 
	
	
	
} 
bool List::insertOrder (string newString)
{
	bool success = false; 
	
	ListNode *pCur = NULL, *pPrev = NULL; 
	
	//create local pointer. 
	ListNode *pMem = NULL; 
	
	pMem = makeNode(newstring); 
	
	if(pMem != NULL) //we were able to allocate memory. 
	{
		success = true; 
		
	}
	
	//find where we have to insert. 
	//string operators are already overloaded. 
	
		if(pHead == NULL  )// list is empty 
		{
			pHead = pMem; 
		}
	
		else // list is not empty 
		{
			pCur = pHead; //pointer assignemng NBD
			
			while( (pCur != NULL) && (pCur->mData < newString ) )
			{
				//update the pointers
				pPrev = pCur; 
				pCur = pCur->mpNext; 
				
				
			} //found position to insert. 
			
			
			//corner case-- insert at front 
			if(pPrev != NULL)
			{
				pPrev -> mpNext = pMem; 
				pMem -> mpNext = pCur; 	
				
			}
			else // insert at front 
			{ 
				pMem -> mpNext = pHead; 
				pHead = pMem; 
			}
			
			
		}
	
	
	
	
	return bool; 
}

ostream & operator << (ostream &lhs, List &rhs)
{
	//want to go through every node in the list. 
	ListNode *pCur = rhs.pHead; 
	
	while(pCur != NULL)
	{ 
		lhs << pCur -> mData << "-->" << endl; 
		
		pCur = pCur -> mpNext; 
		
		
	} 
	
	
	
	
	
	
}



bool List::deleteNode( string searchString)
{
	ListNode * pCur = nullptr; 
	ListNode * pPrev = nullptr; 
	
	bool success = false; 
	
	//have to establish precondition 
	//defensive design vs cooperative design. 
	//defensive means that we have to check if empty 
	//cooperative means that we assume the list is not empty. 
	
	pCur = pHead; //can't be empty 
	
	//search 
	while( (pCur != nullptr) && (pCur->mData != searchString) )
	{
		pPrev = pCur; 
		pCur = pCur->mpNext; 
	}
	
	//found the search string. 
	if(pCur != nullptr)
	{ 
		//means we did find the search string
		//deallocate memory. 
		
		//have to check if we're at the beginning/end. 
		//are we deleting the first node in the list. 
		//recall: we know it's not an empty list. 
		if(pPrev == nullptr)
		{
			pHead = pCur->mpNext; 
			//delete pCur; 
			//delete won't delete an entire array. 
			//have to use delete []array; 
		}
		
		else //we know we're not at the front of the list. 
		{
			pPrev->mpNext = pCur->mpNext; 
			//delete pCur; 
		}
	
		delete pCur; 
		success = true; 
	
	}
	
	
	
	return success; 
	
}
		




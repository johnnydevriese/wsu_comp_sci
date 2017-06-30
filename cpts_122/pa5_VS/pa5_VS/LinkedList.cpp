#include"LinkedList.hpp" 

List::List() 
{
	pHead = nullptr; 
}

List::~List() 
{
	//delete every element in list. 
	//didn't do this yet... 
}

List::List( List &copyObject)
{
	copyObject;
}

ListNode *List::makeNode ( double accBalance, int accNumber, string custName, string date)
{

	ListNode * pMem = NULL; 

	//replace malloc()  with new
	//constructor will be invoked.
	//if we had a better constructor we could do: 

	//pMem = new ListNode (newString); 

	pMem = new ListNode(accBalance, accNumber, custName, date); 


	return pMem;

} 

//inserts in order of account number!

bool List::insertOrder (double accBalance, int accNumber, string custName, string date)
{
	bool success = false; 

	ListNode *pCur = NULL, *pPrev = NULL; 

	//create local pointer. 
	ListNode *pMem = NULL; 

	pMem = makeNode(accBalance, accNumber, custName, date); 

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
		pCur = pHead; //pointer assignemng N.B.D.

		while( (pCur != NULL) && (pCur->mData.account_numer < accNumber ) )
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




	return success; 
}

ListNode * List::find_node(int searchVal)
{
	ListNode * pCur = nullptr; 
	ListNode * pPrev = nullptr; 

	pCur = this->pHead; 

	//check if empty? 

	if(pCur == nullptr)
	{
		//list is empty 
		return nullptr;
	}

	//increment the pointers UNTIL searchVal is found and then exit. 
	//this means that pCur will be pointing at the correct node. 
	//might want to be != searchVal? 
	while(pCur != nullptr && pCur->mData.account_numer != searchVal)
	{
		//increment pointers
		pPrev = pCur; 
		pCur = pCur->mpNext;

	}

	//return the pointer to the searched value or NULL
	return pCur; 
}

void List::creditLinkedList( int searchVal, double credit)
{
	ListNode * pMem; 

	pMem = find_node(searchVal); 

	pMem->mData.credit(credit);

}

void List::debitLinkedList( int searchVal, double withdrawal )
{
	ListNode * pMem; 

	pMem = find_node( searchVal); 

	pMem->mData.debit(withdrawal);

}

void List::printLinkedList(int searchVal)
{
	ListNode * pMem; 

	pMem = find_node( searchVal); 

	pMem->mData.printAccountInfo();

}


bool List::deleteNode( int accSearch)
{
	ListNode * pCur = nullptr; 
	ListNode * pPrev = nullptr; 

	bool success = false; 

	//have to establish precondition 
	//defensive design vs cooperative design. 
	//defensive means that we have to check if empty 
	//cooperative means that we assume the list is not empty. 

	//defensive design means we check if the pHead is not a nullptr meaning that the list is not empty. 
	if(pHead != nullptr)
	{

		pCur = pHead; 

		//search 
		while( (pCur != nullptr) && (pCur->mData.account_numer != accSearch ) )
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

	}

	return success; 

}



/*

ostream & operator << (ostream &lhs, List &rhs)
{
//want to go through every node in the list. 
ListNode *pCur = rhs.pHead; 

//probably don't want to go through the whole list. 
while(pCur != NULL)
{ 
lhs << pCur -> mData << "-->" << endl; 

pCur = pCur -> mpNext; 


} 


*/






//}
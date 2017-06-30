
//on the whiteboard going through the function.

boolean push( StackNode ** pTop, int data)
{ 
	Boolean flag; 
	StackNode * temp = NULL; 
	
	temp = makeNode(data); 
	
	if(temp != NULL)
	{
		flag = TRUE; 
		
		//we want to change the contents of pTop and not the address. 
		temp -> pNext = *pTop ; 
		
		*pTop = temp; 
	}
		

	return flag; 
}


StackNode * pop(StackNode ** pTop)
{
	StackNode * ptemp = NULL  
	
	temp = *pTop; 
	temp2 = (*temp)-> pNext; 
	
	*pTop = temp2; 
	//after you reassign the node you popped to NULL; 
	temp->pNext = NULL; 
	
	
	
	return temp; 
} 


int top(StackNode *pTop)
{ 
	//warning: if the value is 0 then you could have problems. 
	int return_val = 0; 
	
	if (pTop != NULL)
	{ 
		return_val = pTop->pString; 
		
		
	} 
	
	
	return 0; 
} 


















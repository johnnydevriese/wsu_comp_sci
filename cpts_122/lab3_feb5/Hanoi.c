#include"Hanoi.h" 


Boolean move(StackNode **source, StackNode **dest)
{
	Boolean success = FALSE; 
	
	StackNode * temp = NULL; 
	
	
	if(source != NULL )
	{
		//want to check if destination can recieve our item. 
		
		if ( (*source)->pString < (*dest) -> pString)
		{
			success = TRUE; 
			temp = pop(source); 
			push(dest, temp->pString); 
			
			free(temp); 
			
		}
		
		//success = FALSE; 
	
	return success; 
	
	
}
	
void solve_hanoi(int n, int source, int dest, StackNode ** list[])
{
	
	int third = -1; 
	
	if( n == 0) 
	{
		move(list[source], list[dest]); 
		return; 
		
	}
	
	
	third = other(source, dest); 
	solvehanoi(n - 1, source, dest, list); 
	
	move(list[source], list[dest] ); 
	
	return; 
	
	
	
} 



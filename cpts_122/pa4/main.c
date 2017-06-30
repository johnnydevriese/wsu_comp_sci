#include "groceryStore.h" 


int main (void) 
{
	QueueNode * express ;
	QueueNode * normal ; 
	
	
	unsigned int time = 0; 
	unsigned int express_time = 0; 
	unsigned int normal_time = 0; 
	unsigned int max_time = 0; 
	
	printf("This is a simulation of an express and normal grocery lines. \n"); 
	printf("Please enter a value how long you would like to simulate: \n");  
	scanf("%d", &max_time); 	
	
	for(time = 0; time < max_time; time++)
	{
	
	express_time = random(1, 5); 
	
	normal_time = random(3, 8); 
	
	if(next_cust_time == 0) 
	{
		next_cust_time = random(); 
		
	}
	
	//the next customer shows up. You make a new node and create the servicetime
	if( time == time_next)
	{
		servicetime = rand(); 
		
		while(pHead != NULL)
		{
			totaltime += pHead->serviceTime ;
			pHead = pHead->pNext ; 
		}
		totaltime += time; 
		
		//would still need to figure out how give it the total time. 
		enqueue(express, servicetime); 
		
		//set next_cust_time to 0 so it will then make a new customer time the next minute. 
		//set totaltime back to zero. 
	}
	
	//since we decrement totalTime once it is zero we know that it is time to dequeue them! 
	if(pHead->totalTime == time)
	{
		dequeue();
		printf(); //printing what the person was or whatever. 
		
	}
	
	//wouldnt need this part...if time was added to the total time...
	//decrement all of the totalTime values in the Queue. 	
	while(pHead != NULL)
	{	
		pHead->totalTime--; //decrement 
	
		pHead = pHead->pNext;
	
	}
	
	
	
	
}
	
	
	
	
	
	
	
	
	system("pause"); 
	
	return 0; 
} 

#include "groceryStore.h" 


int main (void) 
{

	
	//QueueNode * express ;
	//QueueNode * normal ; 

	Queue pExpress = {NULL, NULL}; 
	Queue pTemp_Express = {NULL, NULL}; 
	Queue normal = {NULL, NULL}; 
	
	int success = 0; 
	int time = 0; 
	int express_time = 0; 
	int normal_time = 0; 
	int max_time = 0; 
	int service_time_express = 0; 
	int total_time_express = 0; 
	int customer_express = 0;


	printf("This is a simulation of an express and normal grocery lines. \n"); 
	printf("Please enter a value how long you would like to simulate: \n");  
	scanf("%d", &max_time); 	
	
	//start time at 1 so that way I can use the condition to print the queue every ten minutes
	for(time = 0; time < max_time; time++)
	{
	
	
		//getting random times for when the customer arrives in the express and normal lines. 
		if(express_time == 0) 
		{ 
			express_time = random(1, 5);
			express_time += time; 
		} 
	
		if(normal_time == 0) 
		{
			normal_time = random(3, 8); 
			normal_time += time; 
		}



		//the next customer shows up. You make a new node and create the servicetime
		//I made the OR condition so that way it will enter this loop 
		//because the TA thought that the problem was due to not having created a node. 
		//this ensures that the loop will be entered on the first minute the queue won't be empty. 
		if( time == express_time )
		{
			//incrementing customer number 
			customer_express++;

			//gets a random service time. (e.g. the time it takes for the customer to be serviced) 
			service_time_express = random(1, 3); 

			//set pTemp to pExpress so it doesn't alter the pExpress pointer. 
			pTemp_Express.pHead = pExpress.pHead ; 
		
			//this would get the total time by traversing through the queue and adding every serviceTime to the totaltime var. 
			while(pTemp_Express.pHead != NULL)
			{
				total_time_express += pTemp_Express.pHead->serviceTime ;

				pTemp_Express.pHead = pTemp_Express.pHead->pNext ; 
			}
			
			total_time_express += time; 
		
			//would still need to figure out how give it the total time. 
			success = enqueue(&pExpress, customer_express, service_time_express, total_time_express); 
			
			//printf("%d", success); 

			printf("totaltime: %d \n ", pExpress.pHead->totalTime);

			
			total_time_express = 0; //set back to zero otherwise will screw up time counter next time
			express_time = 0; //set back to zero so the next minute it will get another random number for next customer. 
		
 
		 
		}
	
		
		//if the totaltime of the first node is equal to time then it will be time to dequeue that node. 
		if(pExpress.pHead != NULL && pExpress.pHead->totalTime == time)
		{

			dequeue(&pExpress);
			 
		
		}
	
	
	
		//print statement for every ten minutes. 
		
		if( pExpress.pHead != NULL && time % 10 == 0) 
		{
			//print the whole queue. 
			printQueue(pExpress); 

		
		}
		

		//after 24 hours (or 1440 minutes set the customer number to 1. 
		if(time % 1440 == 0 )
		{
			customer_express = 0;
		}


	
	}
	
	
	
	
	/*
	
	int foo = 0; 


	if(foo = 0 % 10 == 0  )
	{
		printf("hello grietke! Ik hou van jou! \n"); 
	}
	
	printf("DAG! %d", foo); 
	
	*/

	system("pause"); 
	
	return 0; 
} 

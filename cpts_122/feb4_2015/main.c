
#include"Queue.h"

int main(void)
{


	Queue q = {NULL, NULL}; //empty queue
	
	//you have to pass in the address of q!! 
	enqueue(&q, "test" ); 


	while(q.pHead != NULL)
	{
		dequeue(&q, str); 
		printf("%s \n", str); 
	}


	printQueueRec (q.pHead); 

	system("pause"); 
	
	return 0; 
}




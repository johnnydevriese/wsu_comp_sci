#include<stdio.h>
#include<stdlib.h> 
#include<time.h> 

#define MAX_ROWS 10
#define MAX_COLS 10

typedef struct stats
{
	int total_hits;
	int total_misses;
	int total_shots;
	double hits_miss_ratio;
} Stats;
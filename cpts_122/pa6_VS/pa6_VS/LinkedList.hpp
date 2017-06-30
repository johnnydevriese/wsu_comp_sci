#include"ListNode.hpp"
#include<fstream> 
#include<time.h> 
#include<ctime>

#define _CRT_SECURE_NO_WARNINGS

#pragma once

using std::ostream; 
using std::ifstream; 

//list is a collection of listnode's 
class ListNode; 



class List
{

	//want to print list. 
	//returns ostream type 

	friend ostream & operator << (ostream &lhs, List &rhs); //inside () are the arguments of the function. 


	//friend ListNode; 

public: 

	List();

	//constructor 
	List( List &copyObject); 

	//destructor 
	~List(); 

	//overloaded assignment 
	List & operator = (List &rhs); 

	//make node dynamically allocates memory and gives the ListNode. 
	ListNode * makeNode (string RecordNumber, string IdNumber, string Name,
		string Email, string Units, string Major, string Level, int absCount, vector<string> absDate ); 

	//typically return true/false whether or not it was successful. 
	bool insertFront(string RecordNumber, string IdNumber, string Name,
		string Email, string Units, string Major, string Level, int absCount, vector<string> absDate ); 
	//we don't have to pass in **pHead because it's part of the class, so you can access the elements automagically
	//as opposed to in C bool insertOrder(


	void markAbsences(); 

	List * importCourse();

	void storeMasterList();

	List loadMasterList(); 

	void editAbsences(); 

	void generateAll(); 

	void generateSearchAbsent();

	void generateDate(); 

	ListNode *pHead ; 

private:

	

};

/*******************************************************************************************
* Programmer: Johnny Minor                                                                      *
* Class: CptS 122, Spring 2015; Lab Section 04                                             *
* Programming Assignment: Programming Assignment 6                                                     *
* Date: March 30th, 2015                                                                          *
* Description: This program is supposed to read in the csv file and then manipulate it and have various outfiles that print students. 
* Unfortunately it's all screwed up and doesn't work how I intended and I don't know why... 
* Although my best guess would be that I have scoping issues, but idk how the hell to fix them. 
*******************************************************************************************/


#include<iostream> 
#include<fstream> 
#include<string> 
#include"LinkedList.hpp" 

#pragma once 

//string stream 

//just some miscellaneous notes below... 

//include<vector> 
//using std::vector 
//vector <string> abs
//abs.push_back 


/*
how to iterate through a vector 
for(int i = 0; i < vector.size(); i++)
{

would start at the beginning 
vector[i];

}

*/

//will probably get in trouble for doing this... 
//using namespace std; 

using std::cout;
using std::cin; 

using std::ifstream; 
using std::ofstream;  
using std::getline; 
using std::endl; 
using std::cin; 


int main(void)
{

	List MasterList; 
	List * list; 

	int flag = 0; 
	int flagGenerate = 0; 

	do{
		system("cls"); 

		cout << "what would you like to do?" << endl; 
		cout << "1. Import course list." << endl; 
		cout << "2. Load master list" << endl; 
		cout << "3. Store master list" << endl; 
		cout << "4. Mark absences" << endl; 
		cout << "5. Edit absences" << endl; 
		cout << "6. Generate report" << endl; 
		cout << "7. Exit" << endl; 

		cin >> flag ; 

		system("pause");

		if(flag == 1)
		{
			//import course list into linked list
			list = MasterList.importCourse(); 

			system("pause"); 
			
		}
		else if(flag == 2)
		{
			//load master list
			MasterList.loadMasterList(); 
		}
		else if(flag == 3) 
		{
			
			cout << list->pHead->nodeName << endl; 

			system("pause"); 

			//store master list 
			//MasterList.storeMasterList(); 
		}
		else if(flag == 4)
		{
			//mark absences 
			MasterList.markAbsences();

		}
		else if(flag == 5)
		{
			//edit absences 
			MasterList.editAbsences();
		}
		else if(flag == 6)
		{
			system("cls"); 

			cout << "Which type of report would you like to generate?" << endl; 
			cout << "1. Generate report for all student." << endl; 
			cout << "2. Report for students with a number of absences greater or less than ___" << endl; 
			cout << "3.Report with all of today's absences." << endl; 

			cin >> flagGenerate; 

			if(flagGenerate == 1)
			{
				//report for all students. 
				MasterList.generateAll(); 

			}
			else if(flagGenerate == 2)
			{
				cout << "How many absences would you like to search for" << endl; 

				string searchflag; 

				cin >> searchflag; 

				//some function that will search for that flag value and then output to a file. 
				//();
				MasterList.generateSearchAbsent(); 


			}
			else if(flagGenerate == 3)
			{
				//Report with all of  todays absences. 
				MasterList.generateDate(); 

			}



			//Generate report 
		}




	}while(flag != 7); //leaving the program 




	return 0;
}
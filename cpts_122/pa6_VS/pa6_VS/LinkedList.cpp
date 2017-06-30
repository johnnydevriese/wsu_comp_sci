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

ListNode *List::makeNode (string RecordNumber, string IdNumber, string Name,
						  string Email, string Units, string Major, string Level, int absCount, vector<string> absDate)
{

	ListNode * pMem = nullptr; 

	//replace malloc()  with new
	//constructor will be invoked.
	//if we had a better constructor we could do: 

	//pMem = new ListNode (newString); 

	pMem = new ListNode(RecordNumber, IdNumber, Name,
		Email, Units, Major, Level, absCount, absDate);


	return pMem;

} 

//inserts to the front of the list. 

bool List::insertFront(string RecordNumber, string IdNumber, string Name,
					   string Email, string Units, string Major, string Level, int absCount, vector<string> absDate )
{
	bool success = false; 

	//ListNode *pCur = NULL, *pPrev = NULL; 

	//create local pointer. 
	ListNode *pMem = nullptr; 

	pMem = makeNode(RecordNumber, IdNumber, Name, Email, Units, Major, Level, absCount, absDate); 

	if(pMem != nullptr) //we were able to allocate memory. 
	{
		success = true; 

	}

	//shouldn't have to worry about any cases. just insert in front. 
	//set new 
	pMem->mpNext = pHead; 
	pHead = pMem; 



	return success; 
}




void List::markAbsences()
{
	//iterate through the linked list and ask if the person was absent. 

	ListNode * pCur = nullptr; 
	char flag = 0; 

	//set pCur to the beginning of the linked list. 
	pCur = pHead; 

	//while not at the end of the list
	//lets do stuff
	while(pCur != nullptr)
	{
		cout << "Was " << pCur->nodeName << "absent today? (y/n)" << endl; 

		cin >> flag; 

		//if the person was absent they we are going to mark them absent. 
		if(flag == 'y')
		{

			//get the date/time of today. 
			//taken from : stackoverflow.com/questions/16357999/current-date-and-time-as-string
			//note: store in day-month-year format. 

			time_t rawtime;
			struct tm * timeinfo;
			char buffer[80];

			time (&rawtime);
			timeinfo = localtime(&rawtime);

			strftime(buffer,80,"%d-%m-%Y",timeinfo);
			std::string str(buffer);



			//pushing the absence string to the field and incrementing the absence count. 
			pCur->absenceDate.push_back(str); //need to get date to push to absence date. 
			pCur->absenceCount++; //increment the number of absences. 

		}
		else{ 
			//do nothing... (superfluous)
		}


		//reassign pointers to the next node.
		pCur = pCur->mpNext; 

	}

	return; 
}


//will read in the entire .csv file and return a pointer to the List class in main... 
List * List::importCourse()
{

	//variables for the student
	string recordNumber; 
	string idNumber;
	string name; 
	string email; 
	string units; 
	string major;
	string level; 

	List students; 



	//opening the stream 
	ifstream infile; 
	//ofstream outfile; 

	infile.open("classList.csv");

	//checks to see if the file is open 
	if(infile.is_open() )
	{
		//temp string to read into. 
		string line;

		//need to skip the first line because it has the table header. 
		getline(infile, line); 


		//while infile is not at the end of the file.  
		while(!infile.eof() ) //lets do stuff. 
		{
			//read from infile and store it in line until you hit a comma. 
			getline(infile, line, ','); 
			recordNumber = line; 

			getline(infile, line, ','); 
			idNumber = line; 

			getline(infile, line, ','); 
			name = line; 

			getline(infile, line, ','); 
			email = line; 

			getline(infile, line, ','); 
			units = line; 

			getline(infile, line, ','); 
			major = line; 

			getline(infile, line, '\n'); 
			level = line; 

			//jumps to the next line. (might not need this now.) 
			//getline(infile, line); 

			cout << recordNumber << endl; 

			cout << idNumber << endl; 

			//system("pause"); 


			//dummy vector string becuse you intially have no absences. 
			vector <string> init; 

			students.insertFront(recordNumber, idNumber, name, email, units, major, level, 0, init); 

		}
	}



	return &students ;
}


void List::storeMasterList()
{
	ofstream outfile; 

	outfile.open("MasterList.txt");

	//don't really need to check that file is open because it will automagically create the file otherwise. 

	ListNode * pCur = nullptr; 

	pCur = this->pHead;

	while(pCur != nullptr)
	{

		//print everything from a node to the file. Use a $$ as a buffer between the students. 
		outfile << "$$" << endl; 

		outfile << pCur->nodeRecordNumber << endl; 

		outfile << pCur->nodeIdNumber << endl; 

		outfile << pCur->nodeName << endl; 

		outfile << pCur->nodeEmail << endl; 

		outfile << pCur->nodeUnits << endl; 

		outfile << pCur->nodeMajor << endl; 

		outfile << pCur->nodeLevel << endl; 

		outfile << pCur->absenceCount << endl; 

		int i = 0; 


		while(i < pCur->absenceDate.size() ) 
		{
			string temp = pCur->absenceDate[i];

			//need to figure out how to pop the dates. 
			outfile << temp  << endl; 

			i++;

		}

		//$$ is a flag that serves as a buffer between different students. 
		outfile << "$$" << endl; 

		//empty line to seperate between enteries. 
		outfile << " " << endl; 
	}

	return; 
}

List List::loadMasterList()
{

	//variables for the student
	string recordNumber; 
	string idNumber;
	string name; 
	string email; 
	string units; 
	string major;
	string level; 

	char * abscount; 
	int abscount_int; 

	string flag; 

	List students; 

	vector<string> temp; 



	//opening the stream 
	ifstream infile; 
	string line; 

	//ofstream outfile; 

	infile.open("MasterList.txt");

	//checks to see if the file is open 
	if(infile.is_open() )
	{


		while(!infile.eof() ) //not at the end of file -- lets do stuff. 
		{

			//burns the $$ at the top
			getline(infile, line); 

			getline(infile, line); 
			recordNumber = line; 

			getline(infile, line); 
			idNumber = line; 

			getline(infile, line); 
			name = line; 

			getline(infile, line); 
			email = line; 

			getline(infile, line); 
			units = line; 

			getline(infile, line); 
			major = line; 

			getline(infile, line); 
			level = line; 

			getline(infile, line); 

			//convert from string to int. 
			abscount_int = stoi(line); 

			//now we we're at the absence(s) date(s) and we need to push them into the vector until we see the $$. 

			getline(infile, flag); 

			while(flag != "$$")
			{
				//temp is the vector with all of the absence dates in it. 
				temp.push_back(flag);

				//get the next line in the file. 
				getline(infile, flag); 

			}

			//this will burn the empty space that seperates the next student. 
			getline(infile, line); 

			//create a node with all the shit you just read in. 
			students.insertFront(recordNumber, idNumber, name, email, units, major, level, abscount_int, temp );



		}

	}
	return  students; 
}


void List::editAbsences()
{
	string temp; 
	string search; 
	ListNode * pCur = nullptr; 

	pCur = this->pHead; 

	//get the value you want to search for. 
	system("cls"); 


	cout << "Which field do you want to search for? " << endl; 
	cout << "1. Student ID number. " << endl; 
	cout << "2. Student Name. " << endl; 

	cin >> temp; 

	system("cls"); 

	if(temp == "1" )
	{
		cout << "Enter the student ID number to edit absence: " << endl; 
		cin >> search; 

		//while not at the end continue to increment the pointer and search for ID number. 
		while(pCur != nullptr)
		{
			if(pCur->nodeIdNumber == search)
			{
				cout << pCur->nodeName << " was absent these days:" << endl; 

				int i = 0; 
				while(i < pCur->absenceDate.size() ) 
				{
					string temp = pCur->absenceDate[i];

					//prints the number item and the date they were absent
					cout << i << temp  << endl; 

					i++;

				}

				//risky bizness having it set to zero because then it would delete the first absence no matter what. 
				//robust solution would obviously not have something so reckless. 
				int removeInt = 0; 
				
				cout << "which absence would you like to delete? " << endl; 
				cin >> removeInt; 

				pCur->absenceDate.erase(pCur->absenceDate.begin() + removeInt);


			}

			//increment the pointer. 
			pCur = pCur->mpNext; 

		}

	}
	else if(temp == "2")
	{
		cout << "Enter the student name to edit absence: " << endl; 
		cin >> search; 


		while(pCur != nullptr)
		{

			if(pCur->nodeName == search)
			{

				cout << pCur->nodeName << " was absent these days:" << endl; 

				//printing all of the dates they were absent by iterating through the vector. 
				int i = 0; 
				while(i < pCur->absenceDate.size() ) 
				{
					string temp = pCur->absenceDate[i];

					cout << i << temp  << endl; 

					i++;

				}

				//risky bizness having it set to zero because then it would delete the first absence no matter what. 
				//robust solution would obviously not have something so reckless. 
				int removeInt = 0; 
				
				cout << "which absence would you like to delete? " << endl; 
				cin >> removeInt; 

				pCur->absenceDate.erase(pCur->absenceDate.begin() + removeInt);


			}
			}

			//increment the pointers.  
			pCur = pCur->mpNext; 

		}


	


	return;
}




void List::generateAll()
{
	ofstream outfile; 

	outfile.open("generateAll.txt");

	//don't really need to check that file is open because it will automagically create the file otherwise. 

	ListNode * pCur = nullptr; 

	pCur = this->pHead;

	while(pCur != nullptr)
	{

		//print everything from a node to the file. 

		outfile << pCur->nodeName << endl; 

		outfile << pCur->absenceCount << endl; 

		int i = 0; 


		while(i < pCur->absenceDate.size() ) 
		{
			string temp = pCur->absenceDate[i];

			//need to figure out how to pop the dates. 
			outfile << temp  << endl; 

			i++;

		}

		//empty line to seperate between entries. 
		outfile << " " << endl; 
	}

	return;
}

void List::generateSearchAbsent()
{
	//scheme: 
	//get user input to search for. 
	//search the linked list for it 
	//if match print to the outfile. 
	//if not don't print shit. 

	int absSearch; 

	ofstream outfile; 

	outfile.open("searchAbsent.txt");

	//don't really need to check that file is open because it will automagically create the file otherwise. 

	//create a listnode pointer to go though linked list. 
	ListNode * pCur = nullptr; 

	//setting to head of linked list 
	pCur = this->pHead;

	while(pCur != nullptr)
	{

		cout << "What is the number of absences you want to search for?" << endl; 
		cin >> absSearch; 


		//need to figure out if the absence number should be an int or a string. 
		//as it is in incompatible. 
		//we don't have to worry about adding the $$ buffer because the program spec doesn't read this back in. 
		//it just needs to output to a file. 

		if(pCur->absenceCount >= absSearch)
		{
			//writing each element in the current node to the outfile. 
			outfile << pCur->nodeRecordNumber << endl; 

			outfile << pCur->nodeIdNumber << endl; 

			outfile << pCur->nodeName << endl; 

			outfile << pCur->nodeEmail << endl; 

			outfile << pCur->nodeUnits << endl; 

			outfile << pCur->nodeMajor << endl; 

			outfile << pCur->nodeLevel << endl; 

			outfile << pCur->absenceCount << endl; 

			int i = 0; 

			while(i < pCur->absenceDate.size() ) 
			{
				//iterates through the absenceDate vector and assigns it to temp
				string temp = pCur->absenceDate[i];

				//temp is then written to the outfile. 
				outfile << temp  << endl; 

				i++;

			}

		}

	}

	return;
}

void List::generateDate()
{

	//scheme: 
	//get user input to search for. 
	//search the linked list for it 
	//if match print to the outfile. 
	//if not don't print shit. 

	int i = 0;

	string absSearch; 

	ofstream outfile; 

	outfile.open("dateAbsent.txt");

	//don't really need to check that file is open because it will automagically create the file otherwise. 

	ListNode * pCur = nullptr; 

	pCur = this->pHead;


	cout << "What is the date of absences you want to search for?" << endl; 
	cout << "Plese enter in format: DD-MM-YEAR " << endl; 
	cin >> absSearch; 

	while(pCur != nullptr)
	{

		//for the current node we're in we want to check each date in the absenceDate vector. 
		for(i = 0; i < pCur->absenceDate.size() ; i++)
		{

			//want to go through each date stored in the vector and compare it to the absent search string 
			//according to instructor: 
			//"The reports only need to report the each student’s name, email, along with the absences information."
			if(pCur->absenceDate[i] == absSearch)
			{

				outfile << pCur->nodeName << endl; 

				outfile << pCur->absenceCount << endl; 

				int i = 0; 

				while(i < pCur->absenceDate.size() ) 
				{
					//iterates through the absenceDate vector and assigns it to temp
					string temp = pCur->absenceDate[i];

					//temp is then written to the outfile. 
					outfile << temp  << endl; 

					i++;

				}

				//use a break statement because if 
				break; 
			}

		}
	}



	return;
}
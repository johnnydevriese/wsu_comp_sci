/*
 * main.cpp
 * 
 
 * 
 */


#include <iostream>
#include"BinarySearchTree.hpp"
#include "BSTNode.h"
#include <fstream> 
#include <ctype>


using std::ifstream; 
using std::getline; 
using std::endl; 
using std::cin; 
using std::toupper

int main(int argc, char **argv)
{
	BSTree Groot; 
	string filename; 
	ifstream infile; 
	
	
	
	
	//comma seperated file
	cout << "enter the dictionary file:"; 
	
	//get line is much better than just the standard cin
	getline(cin, filename); 
	
	infile.open(filename);
	
	//checks to see if the file is open 
	if(infile.is_open() )
	{
		string line;
		
		//while infile is not at the end of the file.  
		while(!infile.eof() ) //lets do stuff. 
		{
			//read from infile and store it in line until you hit a comma. 
			getline(infile, line, ','); 
			ch = line[0];
			
			//getting the morse code
			getline(infile, line, ',');
				 
			Groot.addNode(ch, line); 
		}
	}
	
	infile.close;
	
	cout <<" enter text to convert: "; 
	
	getline(cin, line); 
	
	for(int i = 0; i < line.size(); i++)
	{
		char ch = toupper(line[i])
		string ch = Groot.find(ch);
		cout << ch + " "; 
	}
	
	cout << "FULLSTOP"; 
	
	system("pause"); 
	return 0;
}


#include <iostream> 
#include < string> 
#include <fstring> 

using std::cin; 
using std::cout; 
using std::ifstream; 
using std::ofstream; 


int main (void) 
{ 
	
	
	
	//ostream cout 
	//istream cin 
	
	//ifstream - input file stream - reading 
	// ofstream - ouput file stream - writing 
	
	string  str; 
	
	//in C we would do: while !feof() 
	
	while( !input.eof() ) 
	{
		input >> str; //we know csv would hot have any whitespace otherwise it would break on a whitespace. 
		//how to get line with space? 
		input.getline(strc.c_str(), 100, 
	} 
	
	//mode is read/write in C 
	//mode is "std::ios::in" meaning reading in 
	//ifstream input("data.txt", std::ios::in );
	
	ifstream input;
	//used to doing it like: cout << "enter a filename: ";  
	//string filename ;
	
	input.open (filename, std::ios::in); 
	
	//object has a standard string type converter 
	ifstream input2 (filename.c_str(), std::ios:in); 
	
	
	//overloaded stream extraction operator 
	//read in one line from a file
	input >>  str; 
	
	cout << "read from file: " << str << endl; 
	
	
	
	
	return 0; 
}

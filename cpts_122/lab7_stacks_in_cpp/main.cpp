#include"Stack.hpp"

using std::string; 
using std::cout; 
using std::endl;



int main()
{
	
	
	Stack stack; 
	string str; 
	
	//push shit.  
	
	stack.push('a'); 
	stack.push('b'); 
	stack.push('c'); 
	stack.push('d');
	
	
	cout<< stack; 
	cout << endl; 
	
	cout << stack.top() ; 
	cout<< endl; 
	
	if( !stack.isempty() )
	{
		for(int i = 0; i < 3; i++)
		{
			cout << stack.pop(); 
			cout << endl; 
		}
	}	
	
	
	return 0; 
}

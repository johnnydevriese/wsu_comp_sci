#include "UpperFilter.hpp"
#include "EncryptFilter.hpp" 

int main()
{
	
	ifstream input("input.txt"); 
	ofstream output("output.txt"); 
	
	Upperfilter *upit = new Upperfilter; 
	
	upit->doFilter(input, output); //should uppercase everything and put to an output file. 
	
	FileFilter *uppit, *copy, *encrypt; 
	
	
	upit = new UpperFilter; 
	
	copy = new CopyFilter; 
	
	encrypt = new EncryptFilter(2); 
	
	copy->doFilter(input, output); 
	
	upit->doFilter(input, output); 
	
	encrypt->doFilter(input,output); 
	
		
	return 0; 
}

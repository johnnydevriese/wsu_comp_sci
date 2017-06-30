#pragma once 

#include "FileFilter.hpp"
#include <cctype> s

class UpperFilter : public FileFilter
{
	public:
	
	UpperFilter()
	{
		
	}
	~UpperFilter()
	{
		
	}
	char transform(char ch)
	{
		char upper = ch; 
		
		if(isalpha(upper)
		{
			upper = toupper(upper); 
		}
		
		return upper;
	}
	
	void doFilter(ifstream &in, ofstream &out)
	{
		char ch; 
	
		while( !in.eof)
		{
			ch = in.get(); 
			ch = transform(ch); 
			
			out << ch; 
		}
		
	}
	
	
}; 

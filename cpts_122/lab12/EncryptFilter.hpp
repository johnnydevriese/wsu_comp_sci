#include "UpperFilter.hpp"


class EncryptFilter : public UpperFilter
{
	
	public: 
	
	EncryptFilter()
	{
	}
	~EncryptFilter()
	{
	}
	
	char transform(char ch)
	{
		//shift letters 
		ch = ch + shift; 
		
		return ch; 
	}


	void doFilter(ifstream &in, ostream &out)
	{
		 char ch; 
		 while( !in.eof())
		 {
			 ch = in.get(); 
			 
		 }
	 }



};

#include "FileFilter.hpp"


class CopyFilter : public FileFilter
{
	
	public: 
	CopyFilter()
	{
	}
	~CopyFilter()
	{
	}


	void doFilter(ifstream &in, ostream &out)
	{
		char ch; 
	
		while( !in.eof)
		{
			ch = in.get();
		}
		
		cout << ch; 
		
	}
	
	char transform(char ch); 
	
	private: 
	
	
}; 

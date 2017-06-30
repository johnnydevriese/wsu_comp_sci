#include <iostream>
#include<iomanip>
#include <string>
#include <cstring>
using namespace std;

//Function to remove garbage off word
void onlyAlpha(string& str1)
{    
	string newStr1 ="";
	newStr1.reserve(str1.size()); 

	for(string::size_type i = 0; i < str1.size(); i++)
	{	
		if ( isalpha( str1[i] ) ) 
		newStr1.push_back( str1[i] );
	}
	str1 = newStr1;
}


 //A function to determine frequency of letters
void  fillFrequency(string str1, int freqcount[], const int alphabet)
{	
	int position = 0;
	
	for(string::size_type i = 0; i < str1.size(); i++)
	{	
		str1[i] = toupper(str1[i]);
		
		++(freqcount[str1[i] - 'A']);
	
	
	}
	


}


//Function to fill new array with new words.
void funfun(string str1[], const int isize, int& countWord)
{	

	for(int i = 0; i <  isize; i++)
	{
		onlyAlpha(str1[i]);
		countWord++;
	}		
}


int main()
{
	const int isize = 3;	
	string str1[] = {"!!HELLO","WHAT###", "%%left"};
	string test = "aaaaaaaaaaaaaa";
	const int size = 100;
	string wordsminus[size];
	int wordCount = 0;
	const int alphabet = 26;
	int  freqcount[alphabet];


    memset(freqcount, 0, 26*sizeof(int));
	
	onlyAlpha(test);
	
	cout << test << endl;
	
	fillFrequency(test, freqcount, alphabet);
	
	for(int j = 0; j < alphabet; j++)
	{
		cout << freqcount[j] << "\t";
	}
	return 0;

}	

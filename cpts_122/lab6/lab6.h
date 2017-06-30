#include<iostream> 


using std::cout; 
using std::istream; 
using std::ostream; 


class CreditReport
{
	
	
	public: 
		//constructors
		CreditReport(); 
		CreditReport(int newScore = 580, int newDebtPro = 0, int newList = 0, int newInq = 0); //having default values set if you don't give it something. 
		Creditreport(const CreditReport &copyme); 
		//const is a keyword meaning that you're not going to do anything. Or it will not let you change it. 
		
		//getters
		void getCreditScore(); 
		
		//setters
		void setCreditScore(); 
		
		//others
		void printReport(); 
		void updateScore(int newscore); 
		
		//overloaded? 
		void updateReport(); 
		
		//operators 
		friend istream & operator >> (istream & input, CreditReport &rhs); 
		
		//to do: << 
		friend ostream & operator << (ostream &output, CreditReport &rhs); 
		
		
	
	
	private: 
		int mCredit_Score; 
		int mDebt_Profile;
		int mHistory; 
		int mInquiries; 
		
		
		

} CreditReport ; 

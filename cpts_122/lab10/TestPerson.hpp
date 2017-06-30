#include "Person.hpp" 


class TestPerson : public Person
{
	
	private: 
	string class_stand; 
	int total_credits; 
	double gpa; 
	
	public: 
	TestPerson(Gender newgender = FEMALE, string innname = " " , double newheight = 0, int newage = 0, string stand " Freshman", int totcred, double gpa = 3.0);
	
	TestPerson();
	~TestPerson(); 
	
	
	void failClass(); 
	
	void sexChange(); 
	
	//getters
	string getStanding() const; 
	int getTotalCred() const; 
	double getGpa() const; 
	
	//setters 
	void setStanding(string stand); 
	void setTotalCred(int cred); 
	void setGpa(double newgpa);
	
	
};

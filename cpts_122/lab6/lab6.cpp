#include "lab6.h"



CreditReport::CreditReport()
{
	//no difference between this-> and without it. 
	//otherwise it's just implied that your meaning THIS object. 
	this->mCredit_Score = 580; 
	mDebt_Profile = 0; 
	mHistory = 0; 
	mInquiries = 0; 
	

}


CreditReport::CreditReport(int newScore, int newDebtPro, int newHist, int newInq)
{
	//take the values and set them to the new values. 
	this->mCredit_Score = newScore; 
	mDebt_Profile = 0; 
	mHistory = newHist; 
	mInquiries = newInq; 

}

CreditReport::CreditReport(const CreditReport &copyme)
{
	//want to be explicit because we have another object 
	this->mCredit_Score = copyme.mCredit_Score ; 
	this->mDebt_Profile = copyme.mDebt_Profile; 
	this->mHistory = copyme.mHistory; 
	this->mInquiries = copyme.mInquiries; 

}


//getters
//we are getting credit score! 
int CreditReport::getCreditScore()
{
	
	
	
	return this->mCredit_Score; 
}



//setters
void CreditReport::setCreditScore(int newScore)
{
	this->mCredit_Score = newScore; 
	
	
}

//others

void CreditReport::

//overload? 
void CreditReport::updateReport(int newScore)
{
	this->mCredit_Score = newScore; 
}

void CreditReport::updateReport(double newHist)
{
	this->mHistory = newList; 
}


void CreditReport::updateReport(int newScore, int newDebtPro, double newHist, int newInq)
{
	this->mCredit_Score = newScore; 
	mDebt_Profile = newDebtPro; 
	mHistory = newHist; 
	mInquiries = newInq; 
	
}
	
	
	
	
	
	
	
	










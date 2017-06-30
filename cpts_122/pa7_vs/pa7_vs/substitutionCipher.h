#include "cipher.h" 

#include <iostream>
#include<iomanip>
#include <string>
#include <cstring>
#include <time.h>

using namespace std;

#pragma once 


//maybe a forward declaration? 

class subcipher : public cipher
{

public: 

	subcipher(); 

	~subcipher(); 


	//***frequency analysis functions ****  

	void onlyAlpha(string& str1);

	void fillFrequency(string str1, int freqcount[], const int alphabet);

	void funfun(string str1[], const int isize, int& countWord);

	int * useFreq(string test); 

	//**** create encrypt and decrypt functions 

	string randomAlphabet();

	string sub_encrypt(string text, string dictionary); 

	string sub_decrypt(string text, string dictionary); 

	//create new decryption dictionary using frequency analysis

	void freqAnalysis(string text); 



	
private: 

	string dictionary; 

}; 
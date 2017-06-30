#include <cctype>
#include <string>
#include <iostream>
#include <fstream> 

#include"cipher.h"

#pragma once 

using namespace std;

class caesarCipher : public cipher
{

public: 

	caesarCipher(); 

	~caesarCipher(); 

	void encode(char * input, unsigned int offset); 

	void decode(char * input, unsigned int offset); 

	void store_encoded(char * input); 

private:

	int key; 

};
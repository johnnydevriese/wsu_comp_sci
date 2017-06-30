#include <iostream>
#include <string>
#include <time.h>

using namespace std;

int main() {

	string test; 
	string test_out; 

	string decryption; 
	
	srand(time(0));
	string alphabet;
	for(int i=0; i<26; ++i) {
		alphabet.push_back('A'+i);
	}
	int r;
	char temp;
	for(int i=0; i<26; ++i) {
		r=rand()%26;
		temp = alphabet[i];
		alphabet[i] = alphabet[r];
		alphabet[r] = temp;
	}

	string frequency = "ETAOINSHRDLCUMWFGYPBVKJXQZ";


	cout <<"encryption string:" <<  alphabet << endl;

	//cout << alphabet[0] << endl;

	

	cout << "please enter a string to encrypt" << endl; 
	//cin >> test; 

	getline(cin, test); 

	

	for(int i =0; i < test.size(); i++)
	{
		if( !isalpha(test[i]) ) //if test[] is not a character( i.e looking for whitespace or other shit)
		{
			test_out[i] = test[i]; //just put it to the out string 
		}

		else
		{
			//const char * temp = test.c_str(); //cast as a char * 

			int ass = toupper(test[i]); //take char and cast it as an int

			ass = ass - (65); //subtract the ascii value from 65 so you have a 0 based dictionary

			 test_out += alphabet[ass];

		}

	}

	//test_out is the encrypted string 
	cout <<"this is the encrypted string:" << test_out << endl; 

	//****decryption ***** 

	string newAlphabet = "12345678912345678912345678";

	for(int j = 0; j < alphabet.size(); j++)
	{

		int temporary = alphabet[j];

		temporary = temporary - 65; 

		char new_dict_char = j + 65; 

		newAlphabet[temporary] = new_dict_char; 		

	}

	cout << newAlphabet << endl; 




	cout << "this is the new dictionary:" << newAlphabet << endl; 

	string decrypted; 

	//*****DECRYPTION KEY***** 

	for(int j =0; j < test_out.size(); j++)
	{
		if( !isalpha(test_out[j]) ) //if test[] is not a character( i.e looking for whitespace or other shit)
		{
			decrypted[j] = test_out[j]; //just put it to the 'out' string 
		}

		else
		{
			//const char * temp = test.c_str(); //cast as a char * 

			int ass = toupper(test_out[j]); //take char and cast it as an int

			ass = ass - (65); //subtract the ascii value from 65 so you have a 0 based dictionary

			 decrypted += newAlphabet[ass];

		}

	}


	cout << " this is the decrypted string:" << decrypted << endl; 

	











	system("pause"); 

	return 0;
}

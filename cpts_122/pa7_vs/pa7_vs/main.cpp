/*******************************************************************************************
* Programmer: Johnny Minor                                                                       *
* Class: CptS 122, Spring 2015; Lab Section 04                                             *
* Programming Assignment: PA 7                                                     *
* Date: April 13, 2015                                                                          *
* Description: This program encrypts using caesar shift, can decrypt by brute force on a caesar shift. 
* It can also encrypt using a random substitution, run a frequency analysis and also decrypt 
* overall a pretty shitty implimentation. :-/
*******************************************************************************************/




#include"cipher.h"
#include"caesarCipher.h" 
#include"substitutionCipher.h"

#pragma once



int main(void)
{
	caesarCipher test; 

	subcipher Substitute; 

	string dictionary; 
	string text ; 

	unsigned int shift = 5; 

	char newString[100] ; 

	int decision = 0;

	do{

		system("cls"); 

		cout << "What would you like to do?" << endl; 
		cout << "1. Caesar shift a string. "<< endl;
		cout << "2. Attempt to decrypt a Caesar shift." << endl; 
		cout << "3. Output a shifted string to a file." << endl; 
		cout << "4. Encrypt using a random substitution." << endl; 
		cout << "5. Run frequency analysis on a string to decrypt" << endl; 
		cout << "6. Decrypt a substituion encryption." << endl; 
		cout << "7. Exit." << endl; 

		cin >> decision; 

		if(decision == 1)
		{

			cout << "Enter a string to encode:" << endl; 
			scanf("%s", newString); 
			test.encode(newString, shift); 

			cout << "This is the encrypted string:" << newString << endl; 

			system("pause"); 
		}
		else if(decision == 2)
		{
			cout << "Enter a string to encode:" << endl; 
			scanf("%s", newString); 
			test.encode(newString, shift); 

			int caesarShift = 0;

			do{
				cout << "Enter a value to try to shift the caesar, or enter 100 to stop try to decode:" << endl; 
				cin >> caesarShift;  

				test.decode(newString,caesarShift);

				cout << "this is the decoded string" << newString << endl; 

			}while(caesarShift != 100);


		}
		else if(decision == 3)
		{
			//output to a file

			cout << "Enter a string to encode:" << endl; 
			scanf("%s", newString); 
			test.encode(newString, shift); 

			cout << "This is the encrypted string:" << newString << endl;

			test.store_encoded(newString); 


		}
		else if(decision == 4)
		{

			dictionary = Substitute.randomAlphabet(); 

			cout << "this is the new dictionary: " << dictionary << endl; 

			cout << "enter a string to encrypt: " << endl; 

			getline(cin, text); 

			text = Substitute.sub_encrypt(text, dictionary); 

			cout << "this is the encrypted string:" << text << endl; 


		}
		else if(decision == 5)
		{
			dictionary = Substitute.randomAlphabet(); 

			cout << "this is the new dictionary: " << dictionary << endl; 

			cout << "enter a string to encrypt: " << endl; 

			getline(cin, text); 

			text = Substitute.sub_encrypt(text, dictionary); 

			cout << "this is the encrypted string:" << text << endl; 


			Substitute.freqAnalysis(text); 
		}
		else if( decision == 6)
		{
			//decryption

			dictionary = Substitute.randomAlphabet(); 

			cout << "this is the new dictionary: " << dictionary << endl; 

			cout << "enter a string to encrypt: " << endl; 

			getline(cin, text); 

			text = Substitute.sub_encrypt(text, dictionary);

			text = Substitute.sub_decrypt(text, dictionary); 

			cout << "this is the decrypted string:" << text << endl; 
			
		}




	}while(decision != 7);


	//testing stuff before putting into do-while loop. 

	//getline(cin, input); 
	//input .c_string();

	//cout << "enter a string ya bitch" << endl; 
	//scanf("%s", newString); 
	//cin >> newString; 


	//test.encode(newString, shift); 



	//cout <<"encoded string using caesar shift:" << newString << endl; 


	/*

	dictionary = Substitute.randomAlphabet(); 

	cout << "this is the new dictionary: " << dictionary << endl; 

	cout << "enter a string to encrypt: " << endl; 

	getline(cin, text); 

	text = Substitute.sub_encrypt(text, dictionary); 

	cout << "this is the encrypted string:" << text << endl; 


	Substitute.freqAnalysis(text); 


	/*

	text = Substitute.sub_decrypt(text, dictionary); 

	cout << "this is the decrypted string:" << text << endl; 


	int * freq;

	freq = Substitute.useFreq(text); 

	cout << "this is it: " <<  freq[0] << endl;  


	*/

	system("pause"); 
	return 0; 
}
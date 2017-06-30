#include "substitutionCipher.h" 



subcipher::subcipher()
{


}


subcipher::~subcipher()
{

}


//******frequency analysis functions ************ 

//Function to remove garbage off word
void subcipher::onlyAlpha(string& str1)
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
void subcipher:: fillFrequency(string str1, int freqcount[], const int alphabet)
{	
	int position = 0;

	for(string::size_type i = 0; i < str1.size(); i++)
	{	
		str1[i] = toupper(str1[i]);

		++(freqcount[str1[i] - 'A']);


	}



}


//Function to fill new array with new words.
void subcipher::funfun(string str1[], const int isize, int& countWord)
{	

	for(int i = 0; i <  isize; i++)
	{
		onlyAlpha(str1[i]);
		countWord++;
	}		
}





int * subcipher:: useFreq(string test)
{
	const int isize = 3;	
	string str1[] = {"!!HELLO","WHAT###", "%%left"};
	//string test = "aaaaaaaaaaaaaa";
	const int size = 100;
	string wordsminus[size];
	int wordCount = 0;
	const int alphabet = 26;
	int  freqcount[alphabet];


	memset(freqcount, 0, 26*sizeof(int));

	onlyAlpha(test);

	cout << test << endl;

	fillFrequency(test, freqcount, alphabet);

	/*

	for(int j = 0; j < alphabet; j++)
	{
		cout << freqcount[j] << "\t";
	}
	*/


	return freqcount;
}


string subcipher::randomAlphabet()
{
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

	return alphabet; 
}

//PRECONDITION: a random string dictionary that is created with 
//this function takes in a dictionary of random characters and a string to be encoded and outputs an encrypted string. 
//
string subcipher::sub_encrypt(string text, string dictionary)
{
	string encrypted; 

	for(int i =0; i < text.size(); i++)
	{
		if( !isalpha(text[i]) ) //if test[] is not a character( i.e looking for whitespace or other shit)
		{
			encrypted[i] = text[i]; //just put it to the out string 
		}

		else
		{
			//const char * temp = test.c_str(); //cast as a char * 

			int ascii_value = toupper(text[i]); //take char and cast it as an int

			ascii_value = ascii_value - (65); //subtract the ascii value from 65 so you have a 0 based dictionary

			encrypted += dictionary[ascii_value];

		}

	}

	//test_out is the encrypted string 
	//cout <<"this is the encrypted string:" << encrypted << endl; 

	return encrypted; 
}

//PRECONDITION: an encrypted string and an encrypted 'dictionary'(i.e. string that has whole alphabet in random order) 
//this function will take in the encryption dictionary and build a seperate decryption dictionary. 
//with this new dictionary it can then decrypt the encrypted string using the same algorithm that it used to encrypt the string
string subcipher::sub_decrypt(string text, string dictionary)
{
	//the numbers are just placeholders.
	//and also for debugging purposes. 
	string newAlphabet = "12345678912345678912345678";

	//here we find create the inverse of the encryption dictionary. 
	//the char becomes the index and the index becomes the character. 
	//fucking weird but "it just werks" 


	for(int j = 0; j < dictionary.size(); j++)
	{
		//get char at position j and read it into the temporary integer(with ascii value) 
		int temporary = dictionary[j];

		//shifting the ascii value of the character so that way it will correspond to the place in our dictionary array. 
		temporary = temporary - 65; 


		char new_dict_char = j + 65; 

		newAlphabet[temporary] = new_dict_char; 		

	}

	cout << newAlphabet << endl;


	cout << "this is the new dictionary:" << newAlphabet << endl; 

	string decrypted;

	//then we call our encryption function because it is the same.
	//we just pass in our new decryption dictionary/alphabet instead. 

	decrypted = sub_encrypt(text, newAlphabet); 

	return decrypted; 
}


//this function will take in an ENCRYPTED string, 
//do frequency analaysis on it and then  create a new decryption dictionary to decrypt the string. 
void subcipher::freqAnalysis(string text)
{

	//E is the highest frequency and 
	//Z is the lowest frequency. 
	string analysis = "ETAOINSHRDLCUMWFGYPBVKJXQZ";

	string dictionary = "ABCDEFGHIJKLMNOPQRSTUVWXY"; 

	//run the frequency analysis and then returns the pointer to an array that has the frequency of each letter. 
	int * freq;
	freq = this->useFreq(text); 

	//find the maximum value in the freq array. 

	int temp = -1; 

	//26 is the length of the alphabet and thus the size of the freq[]
	//not very efficient but you have to have a double four loop. 
	//set temp and compare to every element in array and then do it again. 

	int position = -1; //set to negative one so it will be outside the range and program will break if you fuck it up. 

	for(int j = 0; j < 26 ; j++)
	{

		for(int i = 0; i < 26; i++)
		{

			//if the value of frequency is greater than the what temp is then rewrite it
			//with the new value and the INDEX (the index is most important part) 
			if(freq[i] > temp) 
			{
				temp = freq[i];

				position = i; //this will get the position that has the largest value. 
			}

		}

		//here you will have the largest value in the array this time around. 

		//rewriting the value in freq[] to a 'bad' value so it won't get used again. 
		freq[position] = -1;

		dictionary[position] = analysis[j];

	}

	//once outside of the double for loop we should have a new dictionary that will be able to hopefully 
	//be able to decrypt the encrypted string that was passed in intially. 
	string newString; 

	newString = sub_encrypt(text, dictionary); 

	cout << "this is the new string:" << newString << endl; 


	return; 
}





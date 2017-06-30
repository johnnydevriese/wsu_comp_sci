#include <cctype>
#include <string>
#include <iostream>

using namespace std;

//	Shifts each character in 'input' by 'offset' letters
//	Example: "abcdz" becomes "efghd";
void encrypt(char * input, unsigned int offset) {
	for (int i = 0; input[i] != 0; i++) {
		//	Skip spaces...
		if (input[i] == ' ')
			continue;

		char firstLetter = islower(input[i]) ? 'a' : 'A';
		unsigned int
			alphaOffset = input[i] - firstLetter,
			newAlphaOffset = alphaOffset+offset;
		input[i] = firstLetter + newAlphaOffset % 26;
		
		input[i] = toupper(input[i]); 
		
	}
}

void decrypt(char * input, unsigned int offset) {
	for (int i = 0; input[i] != 0; i++) {
		//	Skip spaces...
		if (input[i] == ' ')
			continue;
		
		char firstLetter = islower(input[i]) ? 'a' : 'A';
		unsigned int alphaOffset = input[i] - firstLetter;
		//	This might be negative sometimes (when decrypting the letter 'a' which has 'alphaOffset' 0)
		int newAlphaOffset = alphaOffset - offset;
		
		//	If the new offset is negative, it means we have to rotate... we do this by adding 26 to the neg. offset
		//	Think about it, and you'll understand how it works
		if (newAlphaOffset < 0) {
			newAlphaOffset += 26;
		}
		
		input[i] = firstLetter + (newAlphaOffset % 26);
		
		input[i] = tolower(input[i]); 
	}
}

int main() {
	//	Comment the next two lines and test with this string if you feel like it
	std::string alphabeticalString = "acbdefghijklmnopqrstuvwxyz";
	
	cout << "Give me string to encrypt...\n\t> ";
	getline(cin, alphabeticalString);
	
	cout << "Encrypted from: \"" << alphabeticalString.c_str();
	encrypt(const_cast<char*>(alphabeticalString.c_str()), 4);
	cout << "\" to: " << alphabeticalString << endl;
	
	cout << "Decrypted back from: \"" << alphabeticalString.c_str();
	decrypt(const_cast<char*>(alphabeticalString.c_str()), 4);
	cout << "\" to: " << alphabeticalString << endl;
	return 0;
}

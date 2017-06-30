#include"caesarCipher.h" 


caesarCipher::caesarCipher()
{

}



caesarCipher::~caesarCipher()
{

}

//	Shifts each character in 'input' by 'offset' letters
//	Example: "abcdz" becomes "efghd";
void caesarCipher::encode(char * input, unsigned int offset)
{
	//i < input.size()

	for (int i = 0; input[i] != 0; i++)
	{

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


void caesarCipher::decode(char * input, unsigned int offset) {
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


void caesarCipher::store_encoded(char *input)
{
	ofstream myfile;

	myfile.open ("encoded.txt");
	
	myfile << input;
	
	myfile.close();

	return;
}
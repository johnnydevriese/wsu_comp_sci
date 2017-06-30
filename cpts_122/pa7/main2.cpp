#include <iostream>
#include <string>
#include <time.h>
using namespace std;

int main() {
	
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
	cout << alphabet;
	return 0;
}

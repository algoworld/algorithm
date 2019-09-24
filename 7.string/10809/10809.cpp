#include <iostream>
using namespace std;
int main() {

	char word[100]; //input word
	int alphabet[26] = { -1, }; //output 

	cin >> word;

	for (int i = 0; i < 26; i++) {
		alphabet[i] = -1;
	}

	for (int i = 0; i < word[i]; i++) {
		if(alphabet[word[i] - 97]==-1)alphabet[word[i] - 97] = i;
	}
	
	for (int i = 0; i< 26; i++) {
		cout<< alphabet[i]<<" ";
	}

	return 0;

}

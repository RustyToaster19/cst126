//Name: Ethan Westcoat
#include <iostream>
#include <string>
#include <cstring>
#include <iomanip>
#include <map>
#include <fstream>

using std::cout;
using std::cin;
using std::endl;
using std::ifstream;
using std::ofstream;
using std::string;

int main() {
	char word[35];
	char dictionary[35][10000];
	int count[10000];
	int word_count = 0;
	bool same = false;
	ifstream file1;
	file1.open("mystery0.txt");
	if (file1.is_open()) {
		while (file1 >> word) {
			_strlwr_s(word);
			cout << word << endl;
			for (int i = 0; i <= 10000; i++) {
				strcmp(word);
			}
			word_count++;
		}
		file1.close();
		cout << word_count << endl;
	}

	else {
		cout << "Unable to open file!" << endl;
	}

	return 0;
}

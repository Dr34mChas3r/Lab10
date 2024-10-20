#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {

	ifstream infile("input.txt");
	if (!infile) {
		cerr << "Oops! input file not found" << endl;
		return 1;
	}

	ofstream outfile("output.txt");
	if (!outfile) {
		cerr << "Oops! output file not found" << endl;
		return 1;
	}

	string line;
	while (getline(infile, line)) {
		cout << line << endl;
	}
	infile.close();
	return 0;
}
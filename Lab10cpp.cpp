#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
	ifstream infile("input.txt");
	if (!infile) {
		cerr << "Oops! File not found" << endl;
		return 1;
	}
}
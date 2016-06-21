#include <iostream>
#include <cmath>
#include <fstream>
#include <iomanip>
#include <string>

using namespace std;

int main(int argc, char** argv) {
	int x = 26;
	ofstream outfile1("test.txt", ios::out);

	for (int i=0; i<25; i++){
		x = i*i+5*i-3;
		cout << x << endl;
		outfile1 << setw(3)<< i <<","<< setw(5)<< x << endl;
	}
	
	outfile1.close();
	
	
	return 0;
}


#include <iostream>
#include <cmath>
#include <fstream>
#include <iomanip>

using namespace std;

int main(int argc, char** argv) {
	int x = 26;
	ofstream outfile1("fileRead.txt", ios::out);
	//if (outfile1.fail())
	//	cout << "File Error!"
	/* .good()
	   .bad()
	   .clear()*/
	for (int i=0; i<3; i++){
		x = i*i;
		cout << x << endl;
		outfile1 << setw(1)<< i <<setw(3)<< ",";
		outfile1<<setw(2)<<x<<setw(4)<<","<<endl;
	}
	
	outfile1.close();
	
	
	return 0;	
}


#include <iostream>
#include <fstream>
using namespace std;
int main(){
	ofstream ofile("test.txt");
	cout<<"Enter the name:";
	
	char name[30];
	cin >> name;
	ofile<<name<<"\n";           // substituting name in file
	cout<<"Enter the age:";
	int age;
	cin >> age;
	
	ofile<<age<<"\n";            // entering age in file
	
	ofile.close();               // closing the handle with ofile
	
	ifstream ifile("test.txt");
	ifile>>name;
	ifile>>age;
	cout <<"Name is "<<name<<"\n";
	cout<<"Age is "<<age<<"\n";
	
	ifile.close();
	
	ofstream fout;
	fout.open("test.txt");
	fout<<"India\n";
	fout<<"Pakistan\n";
	fout<<"China\n";
	fout<<"My Name is Omkar\n";
	fout<<"I am 25 years old\n";
	fout<<"Trying to print alternate statements\n";
	fout<<"Another new line begins\n";
	fout.close();
	
	const int N=80;
	char line[N];
	ifstream fin;
	fin.open("test.txt");
	cout<<"Contents of test file are \n";
	int i=2;
	while(fin){
		
		fin.getline(line,N);
		if(i%2==0){
			cout<<line<<"\n";
		}
		i++;
	}
	fin.close();
	return 0;
}

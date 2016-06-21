#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;

void mysort(int &a, int &b){
	int temp;
//	cout<<a;
    if (a>b){
    	temp = a;
    	a = b;
    	b = temp;
	}
}

void underline(int x){
	for(int n=0; n<x; n++){
		cout <<"_";
	}	
	cout << endl;	
}

int main() {
	int a1=15;
	int a2=10;
	int a3=8;
	int a4=12;
//	int a=55;
//	cout<<a<<&a;
	mysort(a1,a2);
	cout << a1 <<"\t" << a2 <<"\t" << a3 <<"\t" << a4 <<"\n";
	mysort(a2,a3);
	cout << a1 <<"\t" << a2 <<"\t" << a3 <<"\t" << a4 <<"\n";
	mysort(a3,a4);
	cout << a1 <<"\t" << a2 <<"\t" << a3 <<"\t" << a4 <<"\n";
	mysort(a1,a2);
	cout << a1 <<"\t" << a2 <<"\t" << a3 <<"\t" << a4 <<"\n";
	mysort(a2,a3);
	cout << a1 <<"\t" << a2 <<"\t" << a3 <<"\t" << a4 <<"\n";
	mysort(a1,a2);	
	cout << a1 <<"\t" << a2 <<"\t" << a3 <<"\t" << a4 <<"\n";
		
	return 0;
}


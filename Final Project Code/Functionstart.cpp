#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;

int lnumb(int, int); //declaration

int main() {
	int a1=5;
	int a2=10;
	int a3=8;
	int a4=12;
	int c1, c2;
	
	/*if (a1>=a2)
	  c1 = a1;
	else
	  c1 = a2;*/
	c1 = lnumb(a1,a2);
	/*if (a3>=a4)
	  c2 = a3;
	else
	  c2 = a4;*/
	c2 = lnumb(a3,a4);
	/*if (c1>=c2)
	  cout << c1;
	else
	  cout << c2;*/
	cout << lnumb(c1,c2);
	cout << lnumb(lnumb(a1,a2),lnumb(a3,a4));
	
		
	return 0;
}

int lnumb(int a, int b){
	int c1;
	if (a>=b)
	  c1 = a;
	else
	  c1 = b;
	return c1;
}

int return2(){
	return 2;
}


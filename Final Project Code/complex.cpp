#include <iostream>
#include<complex>
using namespace std;
typedef complex<double> dcomp;
class Complex{
	private:
		dcomp comp1,comp2,addition,substraction,mult,div;
	public:
		Complex(dcomp a,dcomp b){
			comp1=a;
			comp2=b;
			cout<<"First Complex Number : ";
			cout<<comp1<<"\n";
			cout<<"Second Complex Number : ";
			cout<<comp2<<"\n\n";
			add();
		}
		Complex(){
		}
		~Complex(){}
		void add(){
			addition=comp1+comp2;
			cout<<"Addition of given complex numbers is "<<addition<<"\n\n";
			subtract();
		}
		void subtract(){
			substraction=comp1-comp2;
			cout<<"Substraction of given complex numbers is "<<substraction<<"\n\n";
			multiply();
		}
		void multiply(){
			mult=comp1*comp2;
			cout<<"Multiplication of given complex numbers is "<<mult<<"\n\n";
			divide();
		}
		void divide(){
			div=comp1/comp2;
			cout<<"Division of given complex numbers is "<<div<<"\n\n";
		}
		
};
int main(){
complex<double> com_one(1.2,3.7); 
complex<double> com_two(2.1,4.6); 
Complex(com_one,com_two);

	return 0;
}

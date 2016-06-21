#include <iostream>
using namespace std;

class Fraction{
	private:
		float numerator1,denominator1,numerator2,denominator2;
		float numeratorCalculation;
		float denominatorCalculation;
		string operation;
		void addFraction(){
			operation="add";
			simplifyFraction();
		}
		void multiplyFraction(){
			operation="multiply";
			simplifyFraction();
		}
		void divideFraction(){
			operation="divide";
			simplifyFraction();
		}
		void simplifyFraction(){
			if(operation.compare("add")==0){
				numeratorCalculation=(numerator1*denominator2)+(numerator2*denominator1);
				denominatorCalculation=denominator1*denominator2;
				cout<<"Addition of the given fractions is : "<<numeratorCalculation<<"\/"<<denominatorCalculation<<"\n";
				cout<<"The decimal equivalent value of the above fraction is : "<<numeratorCalculation/denominatorCalculation<<"\n";
				cout<<"\n";
				cout<<"\n";
			}
			else if(operation.compare("multiply")==0){
				numeratorCalculation=numerator1*numerator2;
				denominatorCalculation=denominator1*denominator2;
				cout<<"Multiplication of the given fractions is : "<<numeratorCalculation<<"\/"<<denominatorCalculation<<"\n";
				cout<<"The decimal equivalent value of the above fraction is : "<<numeratorCalculation/denominatorCalculation<<"\n";
				cout<<"\n";
				cout<<"\n";
			}
			else if(operation.compare("divide")==0){
				numeratorCalculation=numerator1*denominator2;
				denominatorCalculation=denominator1*numerator2;
				cout<<"Division of the given fractions is : "<<numeratorCalculation<<"\/"<<denominatorCalculation<<"\n";
				cout<<"The decimal equivalent value of the above fraction is : "<<numeratorCalculation/denominatorCalculation<<"\n";
				cout<<"\n";
				cout<<"\n";
			}
		}
		void displayFraction(){
			cout<<"Fraction 1 is : "<<numerator1<<"\/"<<denominator1<<"\n";
			cout<<"Fraction 2 is : "<<numerator2<<"\/"<<denominator2<<"\n";
			cout<<"\n";
			cout<<"\n";
		}
	public:
		Fraction(float a,float b,float c,float d){
			numerator1=a;
			denominator1=b;
			numerator2=c;
			denominator2=d;
			displayFraction();
			addFraction();
			multiplyFraction();
			divideFraction();
		}
};
int main(){
	int num1,denom1,num2,denom2;
	cout<<"Enter the numbers in sequence as numerator and denominator for 1st number and then the same for 2nd number \n";
	cin>>num1>>denom1>>num2>>denom2;
	Fraction(num1,denom1,num2,denom2);
}

#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;

int power(int a,int b){
int du=1;
while(b>0){
	du=du*a;
	b--;
}
	return du;
}

double power(double a,int b){
double du=1;
while(b>0){
	du=du*a;
	b--;
}
	return du;
}

double power(double a,double b){
double du=1;
while(b>0){
	du=du*a;
	b--;
}
	return du;
}
int main(){
	int cal;
	double dx;
	double dn;
	double dcal;
	double dcal2;
	int x;
	cout<<"Enter any number\n";
	cin>>x;
	int n;
	cout<<"How many times you want to multiply the above number?\n";
	cin>>n;
	cal=power(x,n);
	cout<< "Result when both arguments are int : "<<cal<<"\n";
	cout<<"Now enter the number with decimal value\n";
	cin>>dx;	
	cout<<"How many times you want to multiply this number with itself?\n";
	cin>>n;
	dcal=power(dx,n);
	cout<< "Result when one is double argument & one is int argument "<<dcal<<"\n";
	cout<<"Again enter any floating point number\n";
	cin>>dx;
	cout<<"How many times you want to multiply the number with itself(You can give floating point value if you want)\n";
	cin>>dn;
	dcal2=power(dx,dn);
	cout<< "Result when both are double arguments is : "<<dcal2<<"\n";
}


#include <iostream>
using namespace std;

class Quadrilateral {	
	public:
		double length,width,height,base1,base2;
		void set_Length(double r)	{
			length=r;
		}
		void get_Length(){
			cout<<"Length = "<<length<<"\n";
		}
		void set_Width(double r){
			width=r;
		}
		void get_Width(){
			cout<<"Width = "<<width<<"\n";
		}
		void set_Height(double r)	{
			height=r;
		}
		void get_Height(){
			cout<<"Height = "<<height<<"\n";
		}
		void set_Base1(double r)	{
			base1=r;
		}
		void get_Base1(){
			cout<<"Base1 = "<<base1<<"\n";
		}
		void set_Base2(double r)	{
			base2=r;
		}
		void get_Base2(){
			cout<<"Base2 = "<<base2<<"\n";
		}
}; // base class

class Trapezoid: public Quadrilateral{
	public:
	void cal_Area(){
		double area;
		area=((base1+base2)/2)*height;
	}
};//derive class

class Parellelogram: public Quadrilateral{
	public:
	void cal_Area(){
		double area;
		area=length*height;
		cout<<"Area of Parellelogram is "<<area<<"\n\n\n";
	}
};//derive class


class Rectangle: public Quadrilateral{
	public :
	void cal_Area(){
		double area;
		area=length*width;
		cout<<"Area of Rectangle is "<<area<<"\n\n\n";
	}
};//derive class

class Square: public Quadrilateral{
	public:
	void cal_Area(){
		double area;
		area=length*length;
		cout<<"Area of Square is "<<area<<"\n\n\n";
	}
};//derive class

int main(){
	
	Rectangle R;
	R.set_Length(5);
	R.set_Width(6);
	cout<<"Rectangle :";
	R.get_Length();
	cout<<"Rectangle :";
	R.get_Width();
	R.cal_Area();
	
	Square S;
	S.set_Length(8);
	cout<<"Square :";
	S.get_Length();
	S.cal_Area();
	
	Parellelogram P;
	P.set_Length(4);
	cout<<"Parellolgram :";
	P.get_Length();
	P.set_Height(3);
	cout<<"Parellolgram :";
	P.get_Height();
	P.cal_Area();
	
	Trapezoid T;
	T.set_Base1(3);
	cout<<"Trapezoid :";
	T.get_Base1();
	T.set_Base2(4);
	cout<<"Trapezoid :";
	T.get_Base2();
	T.set_Height(2);
	cout<<"Trapezoid :";
	T.get_Height();
	T.cal_Area();
	return 0;
}

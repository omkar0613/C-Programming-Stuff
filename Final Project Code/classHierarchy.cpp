#include <iostream>
using namespace std;

class shape{
	public:
		shape(){
			length = 10;
			width = 10;
		}
		shape(double a, double b){
			length = a;
			width = b;		
		}
		void set_length(double x){
			length = x;
		}
		double get_length(){
			return length;
		}
		void set_width(double x){
			width = x;
		}
		double get_width(){
			return width;
		}
	
	protected:
		double length;
		double width;
	private:
		double xyz;
		
};//base class

class rectangle: public shape 
{
	public:
		double area(){
			return length*width;
		}
};//derived class

class square: public shape
int main(int argc, char** argv) {
	shape square(20,20);
	cout << square.get_length() << endl;
	rectangle mysquare;
	mysquare.set_length(20);
	mysquare.set_width(10);
	cout << mysquare.area() << endl;
	return 0;
}



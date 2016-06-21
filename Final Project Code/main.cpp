#include <iostream>
#include <fstream>
#include <cstdlib>
#include <iomanip>
#include <string>
using namespace std;

class Box{
	private:
		double length,width,height;
		double weight,cost;
		string material;
		string allowed_list;
		public:
			Box(double x){
				length=x;
				width=x;
				height=x;
			}
			Box(double x,double y){
				length=x;
				width=x;
				height=y;
			}
			Box(double x,double y,double z){
				length=x;
				width=y;
				height=z;
			}
			double volume(){
				return length*width*height;
			}
			double area(){
				return 2*(length*width+width*height+length*width);
			}
};
class Length{
	private:
		int ft;
		double in;
		public :
			Length(double x){
				in=x;
				while(in>=12){
					in=in-12;
					ft=ft+1;
				}
			}
			void show(){
				cout<<"ft = "<<ft
			}
};
int main() {
	Box pizza_Box(12,2);
	cout<<"Area of pizza box is "<<pizza_Box.area();
	return 0;
}





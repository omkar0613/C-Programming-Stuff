#include <iostream>
#include <math.h>
using namespace std;
class Point{
	private:
		int xcordinate;
		int ycordinate;
		int zcordinate;
		double answer;      // magnitude value will be returned to answer variable
		double mag;         // will store the magnitude
		double angle;
		double calAngle;
		double magnitude(){
			mag=sqrt((xcordinate*xcordinate)+(ycordinate*ycordinate)+(zcordinate*zcordinate)); // magnitude calculated
			return mag;
		}
		double argument(){
			calAngle=(atan2(ycordinate,xcordinate));  // argument calculated in radians
			return calAngle;
		}
	public:
		Point(int a,int b,int c){
			xcordinate=a;    // values assigned
			ycordinate=b;
			zcordinate=c;
			answer=magnitude(); // function called
			cout<<"Magnitude of the given point is "<<answer<<"\n";
			angle=argument();
			cout<<"Argument of the given point is "<<angle<<"\n";
		}
		~Point(){}         // Destructor
};
int main(){
	int x,y,z;              // will ask user for inputs
	cout<<"Enter x cordinate - ";
	cin>>x;
	cout<<"Enter y cordinate - ";
	cin>>y;
	cout<<"Enter z cordinate - ";
	cin>>z;
	cout<<"\n";
	Point P(x,y,z);        // constructor called
}

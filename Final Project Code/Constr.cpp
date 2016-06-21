#include <iostream>
#include <cmath>
#include <fstream>
#include <iomanip>
#include <string>

using namespace std;
class Test{
	public:
		Test(){
			cout<<"Inside Default constr\n";
		}
		Test(int r){
			cout<<"Value of r is "<<r;
		}
};

int main(){
	Test t;
	Test(5);
}

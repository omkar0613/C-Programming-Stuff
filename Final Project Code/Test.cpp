#include <iostream>
#include <math.h>
using namespace std;
class Test{
	private:
		int an=5;
	int temp;
	public:
		Test(){
			cout<<"I am in default constr which is defined as private\n";
		}
		Test(int r){
			temp=r;
			display();
		}
	   void	display(){
			cout<<"I am in display\n";
			cout<<an;
			cout<<temp;
		}
};
int main(){
	int a;
	Test test;
	Test();
	Test(7);
	Test
//	test.display();
}

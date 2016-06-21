#include <iostream>
using namespace std;

class Matrix{
	
	private: //access specifiers
	float frfc,frsc,srfc,srsc;  // position of the elements is determined , frfc : first row first column
	float crossMult1,crossMult2; // will store crossmultiplications
	bool Singular;               // this will store either 1 or 0 depending upon the value of the determinant
	float determinant;
	float detInverse;            // will calculate the reciprocal of determinant for further calculations
	float a[2][2];               // original matrix
	float inv[2][2];             // inverse of a matrix
	void inverse(){	
	detInverse=(1/determinant);  // process inplemented for calculating inverse
	        inv[0][0]=detInverse*a[1][1];
			inv[1][1]=detInverse*a[0][0];
			inv[0][1]=-(detInverse*a[0][1]);
			inv[1][0]=-(detInverse*a[1][0]);
			cout<<"Inverse of the given Matrix is \t";
			for(int i=0;i<=1;i++){
				for(int j=0;j<=1;j++){
					cout<<inv[i][j]<<"\t";
				}
			}
	}
	void det(){
		crossMult1=a[0][0]*a[1][1];
		crossMult2=a[0][1]*a[1][0];
		determinant=crossMult1-crossMult2; // determinant calculated
		cout<<"Determinant of a given matrix is "<<determinant;
		Singular=isSingular();
		cout<<"\n";
		cout<<"The value for Singular variable will be 1 if the matrix is Singular otherwise it would be 0 \n";
		cout<<"Singular : "<<Singular<<"\n";
		switch(Singular){
			case 1:
				cout<<"Thus Matrix is Singular\n";
				break;
			case 0:
				cout<<"Thus Matrix is not Singular\n";
				break;
		}
		cout<<"\n";
	}
	bool isSingular(){
	if(determinant==0) // will decide whether the matrix is singular or not
		return 1;
        return 0;

	}
	void print(){	    // this function will print the user inputs
	a[0][0]=frfc;
	a[0][1]=frsc;
	a[1][0]=srfc;
	a[1][1]=srsc;
	cout<<"The given 2*2 Matrix is \t";
	for(int i=0;i<=1;i++){
		for(int j=0;j<=1;j++){
			cout<<a[i][j]<<"\t";
		}
	}
	cout<<"\n";
	}
	
	public:
		Matrix(float a,float b,float c,float d){  // constructor
			frfc=a;
			frsc=b;
			srfc=c;
			srsc=d;
			print();
			det();
			inverse();
		}
		~Matrix(){}    // destructor
	};
	
	int main(){
		float x,y,z,w;
		cout<<"Enter the elements for 2*2 matrix ROW-WISE \n";
		cin>>x>>y>>z>>w;     // inputs from user
		Matrix M(x,y,z,w);   // constructor called
		
		
	}

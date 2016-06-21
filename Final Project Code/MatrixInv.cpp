#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
float detcal(int p,int q){
float cal,rat;
cal=p-q;
rat=(1/cal);
return rat;	
}
int main(){
	float a[2][2]={3,5,-7,2};
	cout<<"The given 2*2 Matrix is \t";
	for(int i=0;i<=1;i++){
				for(int j=0;j<=1;j++){
					cout<<a[i][j]<<"\t";
				}
			}
			cout<<"\n";
			int f=a[0][0]*a[1][1];
			int s=a[0][1]*a[1][0];
			float detinv;
			detinv=detcal(f,s);
		//	cout<<detinv;
			a[0][0]=detinv*a[1][1];
			a[1][1]=detinv*a[0][0];
			a[0][1]=-(detinv*a[0][1]);
			a[1][0]=-(detinv*a[1][0]);
			cout<<"Inverse of the given Matrix is \t";
			for(int i=0;i<=1;i++){
				for(int j=0;j<=1;j++){
					cout<<a[i][j]<<"\t";
				}
			}
		}


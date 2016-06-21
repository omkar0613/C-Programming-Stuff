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
	float R[2][2]={400,300,300,500};
	float V[2][1]={0.05,0.05};
	float I[2];
	float invR[2][2];
	int f=R[0][0]*R[1][1];
	int s=R[0][1]*R[1][0];
    float detinv;
    detinv=detcal(f,s);
    invR[0][0]=detinv*R[1][1];
    invR[1][1]=detinv*R[0][0];
	invR[0][1]=-(detinv*R[0][1]);
	invR[1][0]=-(detinv*R[1][0]);
	I[0]=(invR[0][0]*V[0][0])+(invR[0][1]*V[1][0]);
	I[1]=(invR[1][0]*V[0][0])+(invR[1][1]*V[1][0]);
	cout<<"Value of the current is ";
	cout<<I[0]<<"A "<<"and "<<I[1]<<"A.";
}

#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {
int A[20];
cout<<"Enter 20 values for an array A and please press enter key after each input\n";
for(int input=0;input<20;input++){
	if(input==20){
		break;
	}
	cin>>A[input];
}
cout<<"Entered Values are\n";
for(int stored=0;stored<20;stored++){
	cout<<A[stored]<<"\t";
}
int j=1;
int temp;	
while(j<20){
	if(A[j]<A[j-1]){
		temp=A[j];
		A[j]=A[j-1];      //comparing consecutive positions
		A[j-1]=temp;
		j--;              //if swapping is done , again we have to compare remaining left side numbers
	}
	else{
	j++;                  //if left sided number is not larger than right sided, then we can move forward to compare the next element
	}  
}
cout<<"\n";
cout<<"The sequence after the insertion method is \n\n";
for(int r=0;r<=19;r++){
	cout<<A[r]<<"\t";
}
	return 0;
}	

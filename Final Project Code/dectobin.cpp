#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int dectobinary(int a){
	int r;
	int binary[7];    // for storing 0,1 values
	do{
	for(int m=6;m>=0;m--){
	
 r=a%2;
 binary[m]=r;
	a=a/2;           // input number is divided till its value becomes 1
}
}while(a!=0);
cout<<"Binary Equivalent of entered whole number is ";
for(int z=0;z<=6;z++){
	
cout<<binary[z];     // binary equivalent value is printed
}
	return r;
}
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
float dectobinary(float b){
	int realb=int(b);  //The numbers before decimal point are stored in realb
	int img[10];
	float remb=b-realb; //Numbers after decimal point are stored in remb
	int binary[7];
	int r;
	do{
	for(int m=6;m>=0;m--){
	
 r=realb%2;
 binary[m]=r;
	realb=realb/2;
}
}while(realb!=0);
cout<<"Binary Equivalent of entered decimal number is ";
for(int z=0;z<=6;z++){
	
cout<<binary[z];
}
cout<<"\.";
for(int t=0;t<3;t++){
	remb=remb*2;
if(remb<1){
	img[t]=0;  
}
else{
	img[t]=1;
	cout<<img[t];
}
cout<<img[t];
}
	return r;
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
int main(){
	int binnos;
	int input;       //for accepting input from the user
	cout<<"Enter the whole number as input \t";
	cin>>input;
	cout<<"\n";
	cout<<"Enter the number with decimal points \t";
	float fbinnos1;  //for accepting decimal value from user
	cin>>fbinnos1;
	cout<<"\n";
	float fbinnos;
	int bin[7];
	int dec;
	float fdec;
	binnos=dectobinary(input);
	cout<<"\n";
	fbinnos=dectobinary(fbinnos1);
}

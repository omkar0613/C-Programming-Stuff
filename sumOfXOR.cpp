#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>


using namespace std;


int main(){
    long n;
    int digitalAddition,count=0,countForGivenNumber=0,countForeveryInteger=0,temporaryStoreVariable,tempStoreForEveryInteger,countOfParamatersofN=0,everyIntegerParameter=0;
    int digitalAdditionToBinary[64],nToBinary[64],everyIntegerToBinary[64],xoringDigits[64];
    cin >> n;
    temporaryStoreVariable=n;
    ///// Given Number n converted to binary /////////////
    if(temporaryStoreVariable==0){
    	nToBinary[0]=0;
    	cout<<nToBinary[0]<<endl;
	}
	else if(temporaryStoreVariable==1){
		nToBinary[0]=1;
		cout<<nToBinary[0]<<endl;
	}
	else{
	
    do{
    	if(temporaryStoreVariable%2==0){
    		nToBinary[countForGivenNumber]=0;
		}
		else{
			nToBinary[countForGivenNumber]=1;

		}
    	temporaryStoreVariable/=2;
    	countForGivenNumber++;
	}while(temporaryStoreVariable!=1);
	nToBinary[countForGivenNumber]=1;
	cout<<"Given Number "<<n<<" in binary form is :"<<endl;
for(int i=countForGivenNumber;i>=0;i--){
cout<<nToBinary[i]<<"\t";
}
}
cout<<endl;
     //////////////////////////////////////////////////////
     /////// Adding all numbers to given nos and converting addition to binary digits /////
     for(int everyInteger=0;everyInteger<n;everyInteger++){
     	digitalAddition=n+everyInteger;
     	cout<<digitalAddition<<endl;        // 5+0=5 , convert addition to binary in same loop
     	if(digitalAddition==0){
     		digitalAdditionToBinary[0]=0;
		 }
		 else if(digitalAddition==1){
		 	digitalAdditionToBinary[0]=1;
		 }
		 else{
		 
     	do{
    	if(digitalAddition%2==0){
    		digitalAdditionToBinary[count]=0;
		}
		else{
			digitalAdditionToBinary[count]=1;

		}
    	digitalAddition/=2;
    	count++;
	}while(digitalAddition!=1);
	digitalAdditionToBinary[count]=1;
for(int i=count;i>=0;i--){
cout<<digitalAdditionToBinary[i]<<"\t";
}                                          // 5+0=5 is converted into binary
count=0;
}
cout<<endl;

      /////////////// Every new Integer will be converted to binary and will be xored with given n ////////////////////
      tempStoreForEveryInteger=everyInteger;
      cout<<"Every Integer in binary form : "<<endl;
      if(tempStoreForEveryInteger==0){
      	everyIntegerToBinary[0]=0;
      	cout<<everyIntegerToBinary[0]<<endl;
	  }
	  else if(tempStoreForEveryInteger==1){
	  	cout<<everyIntegerToBinary[0]<<endl;
	  }
	  else{
     do{
    	if(tempStoreForEveryInteger%2==0){
    		everyIntegerToBinary[countForeveryInteger]=0;
		}
		else{
			everyIntegerToBinary[countForeveryInteger]=1;

		}
    	tempStoreForEveryInteger/=2;
    	countForeveryInteger++;
	}while(tempStoreForEveryInteger!=1);
	everyIntegerToBinary[countForeveryInteger]=1;
for(int i=countForeveryInteger;i>=0;i--){
cout<<everyIntegerToBinary[i]<<"\t";
}                                          // 5+0=5 is converted into binary
countForeveryInteger=0;
}
}
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////// xoring the number ////////////////////
//cout<<sizeof(everyIntegerToBinary)/sizeof(int)<<endl;
   cout<<endl;  
   return 0;	
	 
}
	 
    


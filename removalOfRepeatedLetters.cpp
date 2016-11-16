#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
	string input;
	int everyChar=0;
	cin>>input;

    while(everyChar<input.size()){
	    if(input[everyChar]==input[everyChar+1]){
			input.erase(everyChar,2);
			if(input.empty()){
				cout<<"Empty String"<<endl;
				break;
			}
		}
		else{
			everyChar++;
		}

}

//cout<<input;
    return 0;
}


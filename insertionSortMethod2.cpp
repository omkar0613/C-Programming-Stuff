#include <cstdio>
#include <cstring>
#include <string>
#include <cmath>
#include <cstdlib>
#include <cassert>
#include <iostream>
using namespace std;
void insertionSort(int ar_size, int *  ar) {
int position,smallerNumber;
for(int item=1;item<ar_size;item++){
	position=1;
	while(position<=item){
		if(ar[item]<ar[item-position]){
			do{
				smallerNumber=ar[item];
				ar[item]=ar[item-position];
				ar[item-position]=smallerNumber;
				position++;
			}while(smallerNumber<ar[item-position]);
			for(int everyItem=0;everyItem<ar_size;everyItem++){
				cout<<ar[everyItem]<<"\t";
			}
			break;

		}
		else{
			for(int everyItem=0;everyItem<ar_size;everyItem++){
				cout<<ar[everyItem]<<"\t";
			}

			break;
		}
	}
//	cout<<endl;
}
}
int main(void) {
   
    int _ar_size;
    cin >> _ar_size;
    //scanf("%d", &_ar_size);
    int _ar[_ar_size], _ar_i;
    for(_ar_i = 0; _ar_i < _ar_size; _ar_i++) { 
        cin >> _ar[_ar_i];
        //scanf("%d", &_ar[_ar_i]); 
    }

   insertionSort(_ar_size, _ar);
   
   return 0;
}


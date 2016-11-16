#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <bitset>
#include <cstdio>
#include <vector>
#include <cstdlib>
#include <numeric>
#include <sstream>
#include <iostream>

using namespace std;
void insertionSort(vector <int>  ar) {
int temp=ar[ar.size()-1],tempStore;
int position=2,lastPara;
while(position<=ar.size()){
	if(temp<ar[ar.size()-position]){
		
		tempStore=ar[ar.size()-position];
		ar[ar.size()-position+1]=tempStore;
		for(int i=0;i<ar.size();i++){
			cout<<ar[i]<<"\t";
		}
		if(ar.size()==position){
			lastPara=ar[ar.size()-position];
			ar[ar.size()-position+1]=lastPara;
			ar[ar.size()-position]=temp;
			cout<<endl;
			for(int i=0;i<ar.size();i++){
			cout<<ar[i]<<"\t";
		}
		}
	}
	else{
		ar[ar.size()-position+1]=temp;
		for(int i=0;i<ar.size();i++){
			cout<<ar[i]<<"\t";
		}
		break;
	}
	cout<<endl;
	position++;
}
}
int main(void) {
    vector <int>  _ar;
    int _ar_size;
    cin >> _ar_size;
    for(int _ar_i=0; _ar_i<_ar_size; _ar_i++) {
        int _ar_tmp;
        cin >> _ar_tmp;
        _ar.push_back(_ar_tmp); 
    }

    insertionSort(_ar);
    return 0;
}

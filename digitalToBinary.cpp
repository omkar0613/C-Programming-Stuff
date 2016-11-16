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

int main() {
	int decimalNumber,count=0;
	int binaryReverseOrder[64];
//  cout<<"Enter decimal Number"<<endl;
    cin>>decimalNumber;
    do{
    	if(decimalNumber%2==0){
    		binaryReverseOrder[count]=0;
		}
		else{
			binaryReverseOrder[count]=1;

		}
    	decimalNumber/=2;
    	count++;
	}while(decimalNumber!=1);
	binaryReverseOrder[count]=1;
for(int i=count;i>=0;i--){
	cout<<binaryReverseOrder[i]<<"\t";
}
    return 0;
}


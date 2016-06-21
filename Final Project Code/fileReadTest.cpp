#include <iostream>
#include <fstream>
#include <cmath>
#include <iomanip>
#include <string>

    using namespace std;
    string weight;
    int main(){
    	int i=1;
    	string line;
    	ifstream backstory("batWiki.txt");
    	while (!backstory.eof()){
    //		cout<<i<<"\n";
  	getline(backstory,line);
  		if(line.find("kg")<400){	
        weight=line.substr(line.find("kg")-4,3);
             }  
             i++;
  }
  cout<<weight;
  backstory.close();
    	return 0;
    }

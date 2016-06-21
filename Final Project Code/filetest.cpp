#include <iostream>
#include <fstream>
#include <cmath>
#include <iomanip>
#include <string>
    using namespace std;
    
    int main(){
    	int i=1;
    	string line,area;
    	ifstream backstory("homework5.txt");
    	ofstream frontstory("dyj924.txt");
    	while (!backstory.eof())
		{
			getline(backstory,line);
			if(line.find("Area")<500){	
	frontstory<<setw(2)<<","<<setw(3)<<line.substr(line.find("Area")+7,14)<<setw(4)<<",";
             }    
			 else if(line.find("Gate Leakage")<200){
			 frontstory<<setw(5)<<line.substr(line.find("Gate Leakage")+14,15)<<"\n";
			 }   
			 else if(line.find(":")<200 & i>8){
			 	frontstory<<setw(1)<<line.substr(0,line.find(":"));
			 }
i++;
	   } 
		backstory.close();
		return 0;
	}

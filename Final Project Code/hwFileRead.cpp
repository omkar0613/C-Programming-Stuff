#include <iostream>
#include <fstream>
#include <cmath>
#include <iomanip>

    using namespace std;
    int main(){
    	string line;
    	int i=0;
    	string proc,newProc,cores,newCores,total,newTotal,leakage,newleakage,coreArea,newCoreArea;
    	string a,newA,coreLeakage,newCoreLeakage,l2s,newl2s,l2sarea,newl2sarea,l2sleakage,newl2sleakage;
    	ifstream backstory("homework5.txt");
   

		while (!backstory.eof())
		{
				getline(backstory,line);
			i++;
		
			switch(i){
				case 12:getline(backstory,proc);
						getline(backstory,a);
	        	break;
	            case 16:getline(backstory,leakage);
				break;
				case 18:getline(backstory,total);
				break;
				case 19:getline(backstory,coreArea);
				break;
				case 21:getline(backstory,coreLeakage);
				break;
				case 23:getline(backstory,l2s);
				break;
				case 24:getline(backstory,l2sarea);
				break;
				case 26:getline(backstory,l2sleakage);
				break;
			}
				
		}
		backstory.close();
		newProc = proc.substr(0, 9);
		newA=a.substr(9,21);
		newleakage=leakage.substr(16,20);
		newTotal=total.substr(2,11);
		newCoreArea=coreArea.substr(11,12);	
		newCoreLeakage=	coreLeakage.substr(19,12);
		newl2s=l2s.substr(0,11);
		newl2sarea=l2sarea.substr(10,13);
		newl2sleakage=l2sleakage.substr(18,16);
cout<<l2sleakage<<"\n";
cout<<newl2sleakage<<"\n";
ofstream frontstory("dyj924.txt");
frontstory<<setw(1)<<newProc<<setw(2)<<","<<setw(3)<<newA<<setw(4)<<","<<setw(5)<<newleakage<<"\n";
frontstory<<setw(1)<<newTotal<<setw(2)<<","<<setw(3)<<newCoreArea<<setw(4)<<","<<setw(5)<<newCoreLeakage<<"\n";
frontstory<<setw(1)<<newl2s<<setw(2)<<","<<setw(3)<<newl2sarea<<setw(4)<<","<<setw(5)<<newl2sleakage;
    return 0;
}

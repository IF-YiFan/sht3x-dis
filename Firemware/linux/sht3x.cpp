#include <fstream>
#include <iostream>

#include <unistd.h>
using namespace std;

int main(){
	int x;
	int y;
	ifstream infile;
	ifstream infile2;
	while(1){
		infile.open("/sys/class/hwmon/hwmon1/temp1_input");
		infile2.open("/sys/class/hwmon/hwmon1/humidity1_input");
		
		infile >> x;
		infile2 >> y;
		
		cout << "现在的温度:"<< x/1000 << "." << x%1000/10 << "C" << endl;
		cout << "现在的湿度:"<< y/1000 << "." << y%1000/10 << "%" << endl;
		cout << "--------------------------------------------" << endl;
		
		infile.close();
		infile2.close();
		sleep(1);
	}
	
	return 0;
}

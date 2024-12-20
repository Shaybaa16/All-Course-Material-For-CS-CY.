#include <iostream>
#include <fstream>
using namespace std;


int main()
{	
	int a[5]={10,20,30,40,50}; 
	
	ofstream fout;
	fout.open("data.txt",ios::app);
	
	for(int i=0; i<5; i++)
		fout<<a[i]<<endl;
	
	return 0;
}

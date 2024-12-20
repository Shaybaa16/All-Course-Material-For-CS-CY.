#include <iostream>
#include <fstream>

using namespace std;


int main()
{	

	int b[5]={0};
	
	ifstream fin;
	fin.open("data.txt");
	
	if (!fin)
	{
		cout<<"File could not be opened";
		return 30;
	}
	
	/*
	for(int i=0; i<5; i++)
		fin>>b[i];
	*/
	int x;
	while(fin)
	{
		fin>>x;
		cout<<x<<endl;
		
	}
	fin.clear();
	
	if(!fin)
	{
		cout<<"File in bad state";}
	
	
	return 0;
}

#include <iostream>
#include <ctime>
using namespace std;

/*
Arrays find max from 50 random values
*/

int main()
{
	const int SIZE = 50;
	int n[SIZE];
	
	srand(time(0));
	
	for(int index=0; index<SIZE; index++)
	{
		n[index] = rand() % 100;	
	}
	
	for(int index=0; index<SIZE; index++)
	{
		cout<<n[index]<<"\t";
	}
	
	int max=0;
	int loc=0;
	
	for(int index=0; index<SIZE; index++)
	{
		if (n[index] > max)
		{
			max = n[index];
			loc = index;
			
		}
	}
	
	cout<<endl;
	cout<<"Max number is :"<<max;	
	
}



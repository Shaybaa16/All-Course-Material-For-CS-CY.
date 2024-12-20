#include <iostream>
using namespace std;

/*
Arrays
*/

int main()
{
	const int SIZE = 5;
	
	//int marks1, marks2, marks3, marks4..... marks50;
	int marks[SIZE];
	
	/*
	marks[0] = 0;
	marks[1] = 0;
	marks[2] = 0;
	*/
	
	for(int i=0; i<SIZE; i++)
		marks[i] = 0;
	
	
	/*
	cout<<"Enter marks:";
	cin>>marks[0];
	
	cout<<"Enter marks:";
	cin>>marks[1];
	
	cout<<"Enter marks:";
	cin>>marks[2];
	*/
	
	for(int i=0; i<SIZE; i++)
	{
		cout<<"Enter marks:";
		cin>>marks[i];
	}
	
	int sum = 0;
	
	/*
	sum  = sum + marks[0];
	sum  = sum + marks[1];
	sum  = sum + marks[2];
	sum  = sum + marks[3];
	sum  = sum + marks[4];
	*/
	
	for(int i=0; i<SIZE; i++)
	{
		sum  = sum + marks[i];		
	}
	
	cout<<"Average marks = "<<static_cast<float>(sum)/SIZE;	
		
}



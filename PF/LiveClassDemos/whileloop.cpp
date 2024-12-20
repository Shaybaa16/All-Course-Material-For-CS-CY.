/*
Understanding while loop
*/

#include<iostream>
#include<ctime>

using namespace std;

int main()
{
	/*
	while (true)
	{
		cout<<"hello\t";
	}
	*/
	
	int size;
	cout<<"Enter size of rect: ";
	cin>>size;
	
	
	int counter = 1;
	
	while (counter<=size)
	{
		cout<<"*****"<<endl;	
		counter = counter + 1;
	}
	cout<<counter;
	return 0;		                                                                                                                                                                                                                                                                                                                                                                                                                                                                     
}

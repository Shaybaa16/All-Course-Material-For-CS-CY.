/*
Understanding while loop
*/

#include<iostream>
#include<ctime>

using namespace std;

int main()
{
	int counter = 1, table=3;
	
	while(counter<=10)
	{
		cout<<table<<" x "<<counter<<" = "<<counter*table<<endl;
		counter += 1;
	}
	return 0;		                                                                                                                                                                                                                                                                                                                                                                                                                                                                     
}

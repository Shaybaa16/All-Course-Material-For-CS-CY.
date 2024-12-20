#include <iostream>

/*
- Dynamic Memory Allocation
	+ Making dynamic arrays
	+ Passing to functions
	+ Using pointer notation or array notation
*/

using namespace std;
int addValues(const int *p, int size);
void show(const int *p, int size);
int main()
{
		
	int *p=NULL, size=0;
	
	cout<<"Enter size of array you want :";
	cin>>size;
	
	p = new int[size];
	
	//assign random values to array
	for(int i=0; i<size; i++)
		*(p+i) = rand();
	
	//send this array to a function to display
	show(p,size);
	
	//again send this array but this time use array notation
	cout<<addValues(p,size)<<endl;
	
	delete[] p;
	p = NULL;
	
	return 0;
}

void show(const int *p, int size) //const used to make sure that values are not changed
{
	for(int i=0; i<size; i++)
		cout<<*(p+i)<<endl; //using pointer notation
}

int addValues(const int *p, int size) //const used to make sure that values are not changed
{
	int sum = 0;
	for(int i=0; i<size; i++)
		sum+= p[i]; //using array notation
	return sum;
}

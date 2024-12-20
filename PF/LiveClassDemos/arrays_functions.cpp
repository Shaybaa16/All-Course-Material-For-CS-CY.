#include <iostream>
using namespace std;
void show_array(int x[], int size);
int main()
{
	int a[5]={1,2,3,4,5};	
	int b[10] = {10,20};
	
	show_array(a,5);
	show_array(b,10);
	
	
	
}

void show_array(int x[], int size)
{
	//x[4]= 420;
	for(int i=0; i<size; i++)
		cout<<x[i]<<"\t";
	cout<<endl;
}


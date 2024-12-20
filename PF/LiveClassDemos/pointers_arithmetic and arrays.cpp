#include <iostream>

/*
- Pointer arithmetic
- Relationship between Arrays and Pointers
	+ Array accessed using a pointer (1D, 2D, ...)
	+ Array accessed using pointer notation
	+ Using pointer to pass array to functions
*/

using namespace std;

void f1(int *p, int size)
{
	return;
	for(int i=0; i<size; i++)
		cout<<*(p+i)<<endl;
		//same as writing p[i]
}

int main()
{
	
	int *p1;
	int c = 100; //suppose address of c = 4000
	
	p1 = &c; //p1 will be 4000
	*p1 = *p1 + 1; //increment value of c
	
	/*illegal statement*/
	p1 = p1 + 1; //p1 will be 4000+(1*4) - multiplied by 4 because it is int pointer
	//we should not access 4004 because its not allocated for us by the OS
	/*illegal statement*/
	
	//When to use pointer arithmetic?
	int array[5]={10,20,30,40,50};
	int *pa;
	
	pa = &array[0]; 
	//or 
	pa = array;
	
	cout<<*(pa+0)<<endl; //same as array[0]
	//cout<<*(array+0)<<endl; //also try uncommenting this
	//cout<<pa[0]<<endl; //also try uncommenting this
	/*
	Note array and pointer notations:
	*(array+2) same as array[2] same as *(pa+2) same as pa[2]
	*/
	cout<<*(pa+1)<<endl;
	cout<<*(pa+2)<<endl;
	
	//Passing 1D array to function using pointers
	f1(array,5);
	
	//Try yourself if we pass 2D array to a function
	//and show all elements using pointer notation. 
	//remember row-major order
	//Read: https://dyclassroom.com/c/c-pointers-and-two-dimensional-array
	
	return 0;
	
}

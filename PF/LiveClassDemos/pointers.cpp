#include <iostream>

/*

- Using pointer for Call by Reference
- Pointer arithmetic
- Relationship between Arrays and Pointers
	+ Array accessed using a pointer (1D, 2D, ...)
	+ Array accessed using pointer notation
	+ Using pointer to pass array to functions
- Dynamic Memory Allocation
	+ Dangling pointer
	+ Memory Leak
	+ Making dynamic arrays	
*/

using namespace std;

void f(int *p)
{
	cout<<p<<endl;
	cout<<*p<<endl;
	*p = 20;
}

void f1(int *p, int size)
{
	for(int i=0; i<size; i++)
		cout<<*(p+i)<<endl;
		//same as writing p[i]
}

int main()
{
	/*PART A - BASICS OF POINTERS*/
	/*Memory Address and Data stored there*/		
	int a;
	a = 10;
	
	int *iptr; //declaring an integer pointer
	iptr = &a; //assigning address of a to iptr
	
	cout<<a<<endl; 		//value of a
	cout<<&a<<endl; 	//address of a
	cout<<iptr<<endl;	//address stored in iptr = &a
	cout<<&iptr<<endl;
	
	/*Using pointer, Dereferencing*/
	cout<<*iptr<<endl;	//value at the address pointed to by iptr
	
	//iptr = 5000; error - we cannot assign arbitray address - OS gives addresses
	*iptr = 5000; 
	cout<<a<<endl;
	
	int *b;	
	
	/*ptrA = ptrB vs *ptrA = *ptrB*/
	b = iptr; // now b also points to same location where iptr is pointing
	
	*b = a * 10; //a*10 will be assigned as value where b is pointing
	*iptr = *b+50; //value at memory where b is pointing + 50 assigned to memory where iptr is pointing
	
	cout<<a<<endl;
	/*END OF PART A*/
	
	int *p1;
	int c = 100; //suppose address of c = 4000
	
	p1 = &c; //p1 will be 4000
	*p1 = *p1 + 1; //increment value of c
	
	/*illegal statement*/
	p1 = p1 + 1; //p1 will be 4000+(1*4)
	/*illegal statement*/
	
	
	int array[5]={10,20,30,40,50};
	int *pa;
	
	pa = &array[0]; //or 
	pa = array;
	
	cout<<*(pa+0)<<endl;
	cout<<*(pa+1)<<endl;
	cout<<*(pa+2)<<endl;
	
	f1(array,5);
	
	return 20;
	
	int x = 10;
	f(&x);
	cout<<x<<endl;

	return 10;
	

	return 0;
}

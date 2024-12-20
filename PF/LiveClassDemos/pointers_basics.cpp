#include <iostream>

/*
- Pointer basics
*/

using namespace std;

int main()
{
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
	
	return 0;
}

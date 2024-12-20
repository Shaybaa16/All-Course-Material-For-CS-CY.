#include <iostream>

/*
- Using pointer for Call by Reference
*/

using namespace std;

void f(int *p)
{
	cout<<p<<endl;
	cout<<*p<<endl;
	*p = 20;
}


int main()
{	
	int x = 10;
	f(&x); //also recall call by ref using reference variables
	cout<<x<<endl;
	
	/*Notes: Pointer and reference variable is same 
	except that reference variable cannot change the
	address to which it is pointing. Pointer can point
	to a different address*/
	
	//int &ref; //error - reference must be initilized
	//int *ptr; //OK
	
	int &ref = x; //OK - we can say ref points to x
	int *ptr = &x; //Ok - same as above
	
	/*ref cannot point to any other variable 
	  ptr can be changed to point to another variable

	return 0;
}

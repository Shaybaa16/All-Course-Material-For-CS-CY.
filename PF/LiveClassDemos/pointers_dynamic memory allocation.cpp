#include <iostream>

/*
- Dynamic Memory Allocation
	+ Dangling pointer
	+ Memory Leak
*/

using namespace std;

int main()
{
	int *p;	
	
	/*a request to OS to allocate 4 bytes and give 
	  address so that we can use that memory*/
	p = new int; //p points to the newly allocated memory
			
	*p = 100; //assign some value there or cin or cout
	
	/*The above code is same as below except that 
	  the memory will be allocated on heap after the program
	  is run:
	  	{	
			int p;
			p = 100;
		}
	*/
	
	delete p; //we MUST delete memory given to us
	/*
	Failing to delete memory leads to MEMORY LEAK problem
	try to run following code and check memory in task manager 
	while(1)
		p = new double;
	You might need to restart computer
	*/

	
	//Even after delete, job is not done... (no syntax erros but..)
	//p is still pointing to that memory location
	//even though OS has taken it back after delete p;
	//so we must do the following to avoid DANGLING POINTER.
	p = NULL;

	
	return 0;
}

#include <iostream>
#include <cmath>
using namespace std;

/*
Function which divide or multiply using shift operator. 
Default argument, 
overloaded functions, 
call by reference. 
*/

int sum(int a, int b);
int sum(int a, int b, int c);

int f(int x,int n, char op);
void drawRect(int row, int=0, char ch='*');
//void drawRect(int, int=0, char='*'); //also fine
int main()
{
	/*
	cout<<f(7,3,'*')<<endl;
	cout<<f(8,3,'/')<<endl;
	
	drawRect(5,10,'+');
	cout<<"Next call"<<endl;
	drawRect(5,10);
	cout<<"Next call"<<endl;
	drawRect(5);
	*/
	cout<<sum(2,3)<<endl;	
	cout<<sum(2,3,4)<<endl;
}

int sum(int a, int b)
{
	return a+b;
}

int sum(int a, int b, int c)
{
	return a+b+c;
}

/*This function implements the following mathimatical function
f(x,n) = x * 2n [2n is 2 raise to power n]
*/
int f(int x,int n, char op)
{
	//cout<<x<<endl<<n;
	int result;
	
	if (op=='*')
		result = (x << n);
	else if (op=='/')
		result = (x >> n);
	return result;	
}

void drawRect(int row, int col, char ch)
{
	for(int i=1; i<=row; i++)
	{
		for(int j=1; j<=col; j++)
			cout<<ch;
		cout<<endl;
		//uncomment following line see what happens
		//return; //since return type is void therefore only write return
	}
}





#include <iostream>
#include <cmath>
using namespace std;

/*
Fucntionality: Draw a rectangle 
Parameters:
1. ch character is used specify the character to use in rectangle
2. col is used to specify the width of the rectangle
3. row is used to specify the height of the rectangle
Return:
void or Nothing
*/
void drawRect(char ch, int col, int row)
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

/*This function implements the following mathimatical function
f(x,n) = x * 2n [2n is 2 raise to power n]
*/
int multiply(int x,int n)
{
	//cout<<x<<endl<<n;
	int result;
	
	result = x * pow(2,n);
	return result;	
}

int sum(int a, int b)
{
	return a+b;
}

int main()
{
	//uncomment following line and see what happens
	//return 420;
	
	/*
	int col;
	
	cout<<"Tell me the col width of rectangle:";
	cin>>col;
	
	drawRect('*', col); // rect of *
	cout<<"Great"<<endl;
	drawRect('/',col+10); // rect of /
	//drawRect();
	//drawRect(,);
	//drawRect(65,'*'); 
	*/
	
	/*
	int x=8, n=2;
	
	int y = multiply(x,n);
	cout<<y<<endl;
	
	cout<<sum(2,3);
	
	return 10; //writing return 0 is not necessary
	*/
	
}



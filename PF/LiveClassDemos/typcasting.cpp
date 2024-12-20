/*
Understanding typecasting
*/

#include<iostream>

using namespace std;

int main()
{
	float f1=5.3, f2=2.5;
	
	int c;
	
	c = static_cast<int>(f1) % static_cast<int>(f2);
	
	cout<<c<<endl; 
	
	cout<<f1;
	
	return 0;		                                                                                                                                                                                                                                                                                                                                                                                                                                                                     
}

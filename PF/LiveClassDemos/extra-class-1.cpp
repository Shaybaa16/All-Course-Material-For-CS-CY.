/*
Special Class
*/

#include<iostream>
#include<cmath>


using namespace std;

int getDigits(int);

int main()
{
	int original = 12321;
	int s,e;
	int n = original;
	
	int digits;
	digits = getDigits(original);
	
	int denom;
	denom = pow(10,digits-1);
	
	while(n>0)
	{
		e = n%10;
		s = n/denom;
		
		if (s!=e)
		{
			cout<<"Not Palindrome";
		}
		
		n = n%denom;
		n = n/10;
		
		denom = denom/100;
	}
	
			
	return 0;		                                                                                                                                                                                                                                                                                                                                                                                                                                                                     
}


int getDigits(int n)
{
	int sum=0;
	while(n>0)
	{
		n = n/10;
		sum++;
	}
	return sum;
}

/*

*/

#include<iostream>
//#include<conio.h>
#include<math.h>

using namespace std;

int main()
{
	for(int i=1; i<=1000; i++)
	{
		int original=i;
			
		//1. find number of digits in the number
		int digits=0;
		int n = original;
		while(n>0)
		{
			n = n/10;
			digits++;
		}
		
		//2. separate digits
		int d;
		n = original;
		int sum=0;
		while (n>0)
		{
			d = n%10;
			n = n/10;			
			//2.1 take power of digit
			//2.2 take sum of power of digits
			int power=1;
			//power  = pow(d,digits);
			for(int i=1; i<=digits; i++)
				power = power * d;
				
			sum = sum + power;			
		}		
		//compare sum with original number to check armstrong?
		if (sum==original)
			cout<<original<<"\t";		
	}
	
	return 0;		                                                                                                                                                                                                                                                                                                                                                                                                                                                                     
}

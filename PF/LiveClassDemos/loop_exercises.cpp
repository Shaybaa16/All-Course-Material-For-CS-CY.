/*
Understanding loops
*/

#include<iostream>
#include<ctime>

using namespace std;

int main()
{
	/*
	get integers from user until -1 is entered 
	and display their sum. 
		
	int a=0, sum=0;
	while (a!=-1)
	{
		sum = sum + a;		
		cout<<"Enter an integer (-1 to exit):";
		cin>>a;		
	}	
	cout<<"sum = "<<sum;
	*/
	
	/*
	Sum of all numbers in user defined range
	
	int start, end, sum=0;
	cout<<"Enter starting number :";
	cin>>start;
	
	cout<<"Enter ending number :";
	cin>>end;
	
	//if (start%2!=0)
	//	start+=1;
	
	while (start<=end)
	{
		cout<<start<<"+";
		sum = sum + start;
		start = start + 2;
	}
	cout<<" = "<<sum;
	*/
	
	/*sum of all digits of a number
	int sum=0, n;
	cout<<"Enter a number :";
	cin>>n;
	
	while(n!=0)
	{
		sum = sum + (n%10);
		n = n/10;
	}
	cout<<"sum = "<<sum;
	*/
	
	/*is prime*/
	int n = 17, factor=0;
	int denominator=1;
	
	while (denominator <= n)
	{
		if (n%denominator==0)
			factor+=1;
		denominator +=1;
		if (factor>2)
			break;
	}
	if (factor==2)
		cout<<n<<" is a prime number";
	else 
		cout<<n<<" is not a prime number";	
	
	return 0;		                                                                                                                                                                                                                                                                                                                                                                                                                                                                     
}

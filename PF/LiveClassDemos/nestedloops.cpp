/*

*/

#include<iostream>
#include<conio.h>

using namespace std;

int main()
{
	/*
	Display all numbers which are ______ 
	(prime, perfect square, etc.)
	*/
	
	for(int i=1; i<=100; i++)
	{
		//is prime
		int n = i, factor=0;
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
			cout<<n<<"\t";
		
	}
	
	/*	
	for(int j=1; j<=5; j++)
	{	
		for(int i=1; i<=10; i++)
			cout<<"*";
		cout<<endl;
	}
	*/
	/*
	for(int j=1; j<=4; j++)
	{	
		int end = j;
		for(int i=1; i<=end; i++)
			cout<<"*";
		cout<<endl;
	}*/
	
	/*
		int send = 3;
		int aend = 1;
	
	for(int k =1 ; k<=4; k++)	
	{
		for(int i=1; i<=send; i++)
			cout<<" ";
		for(int j=1; j<=aend; j++)
			cout<<"+";
		cout<<endl;
		
		send--;
		aend++;
	
	}

	*/
	return 0;		                                                                                                                                                                                                                                                                                                                                                                                                                                                                     
}

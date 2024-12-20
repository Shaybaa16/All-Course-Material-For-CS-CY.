/*

*/

#include<iostream>
#include<conio.h>

using namespace std;

int main()
{
	/*
	char option;
	do
	{
		cout<<"Hello"<<endl;
		cout<<"Continue? (Any key to continue, esc to exit)";
		option = getch(); //used conio.h in include
		
	}while(option!=27);
	
	
	/*
	int speed1, speed2;
	
	do{
		cout<<"Enter Speed1 (multiple of 10) :";
		cin>>speed1;
	}while(speed1%10!=0);
	
	cin>>speed2;

	cout<<"KPH\t:\tMPH"<<endl;		
	for(int i=speed1; i<=speed2; i+=5)
	{
		cout<<i<<"\t:\t"<<i * 0.6214<<endl;
	}
	*/
	
	/*
	for (int j=0, k=9; j<7,k>5;  j++,k--)
	{
		cout << j * j <<endl;
		cout<< k*k <<endl;
	}
	*/
	
	/*
	int i=200;
	
	//Check scope of variables
	for (i=0; i<7;  i++)
	//for (int i=0; i<7;  i++)
	{
		cout << i <<endl;
	}
	
	cout<<"After loop:"<<i;
	*/
	
	/*
	//break statement
	int n=1;
	
	while (n!=0)
	{
		cout<<"Enter value of n :";
		cin>>n;
		if (n==0)
		{
			cout<<"Invalid value"<<endl;
			break;
		}
		cout<<15.0/n<<endl;
	}
	cout<<"I have successfully reached here...";
	*/
	
	//continue use
	int n;
	int EvenSum=0; 
	while(1)
	{
		 cin>>n;
		 if(n==0)
		 	break;
		 	
		 if(n%2==1)
			continue;
		 EvenSum = EvenSum + n;
	}
	cout<<EvenSum;

	
	return 0;		                                                                                                                                                                                                                                                                                                                                                                                                                                                                     
}

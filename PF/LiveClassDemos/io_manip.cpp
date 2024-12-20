#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	
	//use of IO manipulators
	/*
	int x = 10;
	cout << x <<endl;
	cout << oct << x << endl; 
	cout << hex << x << endl; 
	cout << dec << x << endl; 
	*/
	
	//use of IO manipulators
	/*
	cout<<setw(10)		
		//<<setbase(16) //8, 16 or 10 - works for integer values
		<<setprecision(1)
		<<fixed //or scientific
		<<setfill('*')
		<<right
		<<34.267
		<<endl; 
	*/
	
	//decimal, octal and hexa-decimal values
	
	/*
	int a;
	cout<<"Decimal\t\tOctal\t\tHexadecimal"<<endl;
	a = 52;
	cout<<dec<<a<<"\t\t"<<oct<<a<<"\t\t"<<hex<<a<<endl;
	
	a = 052;
	cout<<dec<<a<<"\t\t"<<oct<<a<<"\t\t"<<hex<<a<<endl;
	
	a = 0x52;
	cout<<dec<<a<<"\t\t"<<oct<<a<<"\t\t"<<hex<<a<<endl;
  	*/
  	
  	
  	//cin.get vs cin for character input
  	/*
	char ch;
    cout<<"Enter value of ch : ";
  	cin>>ch;
  	cout<<"Your entered character is:"<<ch<<endl;  	
	cout<<"*****"<<endl;
	
	cout<<"Enter value of ch : ";
  	cin.get(ch);
  	cout<<"Your entered character is:"<<ch<<endl;
	cout<<"*****"<<endl; 
	*/
	
	return 0;
}



#include <iostream>
using namespace std;

/*
Making strings: char array
Output using cout
Input using cin.get
String length
String copy, copy n characters
String compare, compare n characters
String concatenate
*/



int main()
{
	/*
	char chList[5] = {'H', 'e', 'l', 'l', 'o'};//initialized with list of char values
	//char chList[6] = "Hello";
	cout<<chList;	
	*/
	
	/*	
	char city[ ] = "Lahore";
	cout << city<<endl;  //Correct

	int marks [ ] = {20,65,30};
	cout << marks <<endl;  //Wrong
	*/
	
	char name[50];
	cin.get(name,50);
	cout<<name;
	
	int i=0;
	int counter=0;
	while(name[i]!='\0')
	{
		counter++;
		i++;
	}
	cout<<"String Length is "<<counter;
	
	
	
	
	return 0;
	
	int a[5]={1,2,3,4,5};
	char str[1000] = "Hell";
	//char c[5] = {'H','e',};
	
	cout<<a<<endl;
	cout<<str<<endl;
//	cout<<strlen(str)<<endl;
	
	//cin>>a; error
	//cin.getline(str,1000,static_cast<char>(27); to be fixed
	cout<<str<<endl;
	
}



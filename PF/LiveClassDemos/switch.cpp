/*
Understanding selection control
*/

#include<iostream>

using namespace std;

int main()
{	
	char ch;
	//cin>>ch;

	/*
	if (ch=='a')
	 cout<<"vowel";
	
	else if (ch=='e')
	 cout<<"vowel";
	
	else if (ch=='i')
	 cout<<"vowel";
	
	else if (ch=='o')
	 cout<<"vowel";
	
	else if (ch=='u')
	 cout<<"vowel";
	
	else 
		cout<<"consonent";
	*/
	
	/*	
	switch(ch)
	{	
		case 'a':	
		case 'e':
		case 'i':
		case 'o':
		case 'u':
			cout<<"vowel";
			break;	
					
		default:
			cout<<"Consonent";	
			
	}
	*/
	int a=10;
	
	if (a>15)
		cout<<"a is greater\n";
	else
		cout<<"a is less\n";
	
	
	(a>15) ? cout<<"a is greater\n" : cout<<"a is less\n";
	int c = (a>15) ? 100 : 200;

		
	return 0;		                                                                                                                                                                                                                                                                                                                                                                                                                                                                     
}

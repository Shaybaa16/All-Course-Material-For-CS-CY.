/*
Understanding selection control
*/

#include<iostream>

using namespace std;

int main()
{	
	char ch;
	cin>>ch;

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
	
	switch(ch)
	{
		case 'a':
			cout<<"vowel";
			break;
			
		case 'e':
			cout<<"vowel";
			break;
			
		case 'i':
			cout<<"vowel";
			break;
			
		case 'o':
			cout<<"vowel";
			break;
			
		case 'u':
			cout<<"vowel";
			break;
		
		default:
			cout<<"Consonent";
			
	}

		
	return 0;		                                                                                                                                                                                                                                                                                                                                                                                                                                                                     
}

/*
Understanding bitwise operators
*/

#include<iostream>
#include<bitset>

using namespace std;

int main()
{
	int n = 13;
	bitset<16> binary;
	binary = n;

	cout<<binary<<endl;
	
	
	n = n >> 3; //shift 3 bits to right
	binary = n;
	cout<<binary<<endl;
	
	n =13;
	n = n << 2; //shift 3 bits to left
	cout<<n<<endl;
	binary = n;
	
	cout<<binary<<endl;
		
	return 10;
	
	int a=2,b=5;
	
	cout<<(a||b)<<endl;
	cout<<(a|b)<<endl;
	
	cout<<(a&&b)<<endl;
	cout<<(a&b)<<endl;
	cout<<(a^b)<<endl;
	
	int c = ~b;
	binary = b;
	cout<<binary<<endl;
	
	binary = c;
	cout<<binary<<endl;
	
			
	return 0;		                                                                                                                                                                                                                                                                                                                                                                                                                                                                     
}

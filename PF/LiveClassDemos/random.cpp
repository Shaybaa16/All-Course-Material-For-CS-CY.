/*
Understanding random function
*/

#include<iostream>
#include<ctime>

using namespace std;

int main()
{
	//cout<<time(0)<<endl;
	srand(time(0));
	//min + rand() % (max+1-min)
	
	cout<<30+rand()% (130+1-30) <<endl;	
	cout<<30+rand()% (130+1-30) <<endl;	
	cout<<30+rand()% (130+1-30) <<endl;	
	cout<<30+rand()% (130+1-30) <<endl;	
	cout<<30+rand()% (130+1-30) <<endl;	
	cout<<30+rand()% (130+1-30) <<endl;	
	cout<<30+rand()% (130+1-30) <<endl;	
	cout<<30+rand()% (130+1-30) <<endl;	
	
	cout<<1+rand()%6<<endl;	
	cout<<1+rand()%6<<endl;	
	cout<<1+rand()%6<<endl;	
	cout<<1+rand()%6<<endl;	
	cout<<1+rand()%6<<endl;		
	//cout<<rand()<<endl;	
	return 0;		                                                                                                                                                                                                                                                                                                                                                                                                                                                                     
}

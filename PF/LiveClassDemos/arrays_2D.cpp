#include <iostream>
#include<ctime>
using namespace std;

/*
Using 2D array - example + how its stored in memory Row-Major-Order
locating/accessing 2D array element
Initialize with declaration
Accessing all 2D array elements
Passing 2D array to function

3D array with example
*/

void calculateGpa(int marks[][5], float gpa[], int rows, int cols)
{
	float gp = 0;

	for(int j=0; j<rows; j++)
	{
		for(int i=0; i<cols; i++)
			gp += marks[j][i];
		gpa[j]=gp/500*4.0;
	}
	
}

float getClassAvg(int m[][5],int row, int col)
{
	float avg = 0;
	for(int r=0; r<row; r++)
		for(int c=0; c<col; c++)
			avg += m[r][c];		
	avg = avg/250;
	return avg;	
}

int main()
{		
	/*
	
	67, 77, 85, 45, 94
	77, 65, 54, 98, 12 
	89, 88, 99, 100, 23
	.
	.
	*/
	int marks[50][5] = { {67} , 
						 {77, 65, 54, 98, 12} ,
						 {89, 88, 99, 100, 23}
						};
	float gpa[50]={0};
						
	srand(time(0));

	for(int r=0; r<50; r++)
	{
		cout<<"Marks of Student "<<r+1<<":";
		for(int c=0; c<5; c++)
		{
			marks[r][c] = rand()%101;
			cout<<marks[r][c]<<"\t";
		}
		cout<<endl;
	}
	
	float avg = getClassAvg(marks,50,5);
	cout<<"Average marks: "<<avg<<endl;
	
	cout<<gpa[0]<<"\t"<<gpa[1]<<"\t"<<endl;
	calculateGpa(marks, gpa, 50, 5);
	cout<<gpa[0]<<"\t"<<gpa[1]<<"\t"<<endl;
}

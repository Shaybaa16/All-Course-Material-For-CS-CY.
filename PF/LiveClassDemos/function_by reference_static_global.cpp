int gvar = 0; //global variable

void sum_avg(int a, int b, int &rsum, float &ravg)
{
	static int x = 10; //initialized only first time
	x =+ 5; //retains value. Adds 5 to previous value of x
	rsum = a + b;
	ravg = rsum/2.0;
}

int main() {
	int a = 100, b = 200 , sum=0;
	float avg=0;
	gvar = 10;
	sum_avg(a,b,sum,avg);
	return 0;
}

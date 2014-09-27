#include <stdio.h>
#include <time.h>


#define N 45

long fib (int);

int main(void)
{
	int i;
	long l;
	
	clock_t begin, end;
	double time_spent;
	begin = clock();

	for (i = 0; i < N; i++)
	{
		l = fib(i);
		printf("%4d %20ld\n", i, l);
	}
	
	end = clock();	
	time_spent = (double) (end - begin) / CLOCKS_PER_SEC;
	printf("%f sec\n", time_spent);

	return 0;
}

/*

long fib (int i)
{	
	long l;

	if (i == 1)
	{
		l = 1;
		return l;
	}
	
	else if (i == 0)
	{
		l = 0;
 		return l;
 	}

	else
	{
		l = fib(i-1) + fib(i-2);
		return l;
	}   
}

*/

#include <math.h>
long fib(int i)
{
	long l;
	l = (long)1/( pow(2.,i) * sqrt(5.) ) * ( pow(1. + sqrt(5.), i )- pow(1. - sqrt(5.), i) );
	return l;
}


















	


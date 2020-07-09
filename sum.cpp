#include "sum.h"

int sum(int n)
{
	int i=1;
	int sum=0;

	for(; i<=n; i++)
	{
		sum+=i;
	}

	return sum;
}

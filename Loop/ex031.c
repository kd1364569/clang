#include<stdio.h>
main()
{
	int i,n;
	n = 0;
	for (i = 1; i <= 10; i++)
	{
		n += i;
		printf("1から%dまでの和=%d\n", n, i );
	}
}
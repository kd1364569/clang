#include<stdio.h>
main()
{
	int i,n;
	n = 0;
	for (i = 1; i <= 10; i++)
	{
		n += i;
		printf("1����%d�܂ł̘a=%d\n", n, i );
	}
}
#include<stdio.h>
main()
{
	int a,i=0, sum,num=0;
	printf("®”:");
	sum = scanf("%d", &a);
	while (sum != EOF)
	{
		i += a;
		num++;
		printf("®”:");
		sum = scanf("%d", &a);
	}
	printf("‡Œv=%d •½‹Ï=%.‚Qf\n", sum, num);
}
#include<stdio.h>
main()
{
	int s,i;
	printf("”‚ÍH");
	scanf("%d", &s);
	do
	{
		i = 0;
		do 
		{
			printf("*");
			i++;
		} while (i < 5);
		printf("\n");
		s--;
	} while (s > 0);

}
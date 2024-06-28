#include<stdio.h>
main()
{
	int n, i, s;
	printf("”‚Í?");
	scanf("%d", &n);
	
	for (s = 0,i=0; n!=-999;i++)
	{
		s += n;
		printf("”‚ÍH");
		scanf("%d", &n);

		
	}
	printf("‡Œv=%d    •½‹Ï=%.2f\n", s, (float)s / i);
}
#include<stdio.h>
main()
{
	int n, i, s;
	printf("数は?");
	scanf("%d", &n);
	
	for (s = 0,i=0; n!=-999;i++)
	{
		s += n;
		printf("数は？");
		scanf("%d", &n);

		
	}
	printf("合計=%d    平均=%.2f\n", s, (float)s / i);
}
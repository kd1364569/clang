#include<stdio.h>
main()
{
	int n, i, s;
	printf("����?");
	scanf("%d", &n);
	
	for (s = 0,i=0; n!=-999;i++)
	{
		s += n;
		printf("���́H");
		scanf("%d", &n);

		
	}
	printf("���v=%d    ����=%.2f\n", s, (float)s / i);
}
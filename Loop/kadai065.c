#include<stdio.h>
main()
{
	int n,s,i;
	
	n = 0;
	s = 0;
	i = 0;
	do
	{
		s += n;
		i++;
		printf("����(-999�ŏI��)?");
		scanf("%d", &n);
	}while(n!=-999);
	i-;
	printf("���v=%d\n����=%.2f\n", s, (float)s / i);
}
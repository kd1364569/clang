#include<stdio.h>
main()
{
	char data[80];
	int i,j;
	printf("�񐔂ƕ��������� ");
	scanf("%d%s", &i, data);
	for (j = 0; j < i; j++)
	{
		printf("%s\t", data);
	}
}
#include<stdio.h>
main()
{
	char data[80];
	int i,j;
	printf("回数と文字列を入力 ");
	scanf("%d%s", &i, data);
	for (j = 0; j < i; j++)
	{
		printf("%s\t", data);
	}
}
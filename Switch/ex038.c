#include<stdio.h>
main()
{
	int i;
	
	printf("整数を入力:");
	scanf("%d", &i);
	if (i >= 10 && i <=49)
	{
		switch (i/10)
		{
		case 1:printf("10点台です");
			break;
		case 2:printf("20点台です");
			break;
		case 3:printf("30点台です");
			break;
		case 4:printf("40点台です");
			break;


		}
	else
	{
		printf("エラーです");
	}
	}
	
	
}
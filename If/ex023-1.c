#include<stdio.h>
main()
{
	int a, b, c;

	printf("秒数を入力:");
	scanf("%d", &a);
	if (a <= 5000)
	{
		if (a >= 0)
		{
			b = a / 3600;
			c = (a % 3600) / 60;
			a = a % 60;

			printf("%d時間%d分%d秒です\n", b, c, a);
		}
		else
		{
			printf("エラー\n");
		}
		

		
	}
	
	else
	{
		printf("エラー\n");
	}
}
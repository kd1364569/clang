#include<stdio.h>
main()
{
	int num, i;
	i = 0;
	while(1)
	{
		
		printf("数を入れて:");
		scanf("%d", &num);
		if (num == -999)
		{
			break;
		}
		i += num;
	} 
	printf("合計=%d\n", i);
}
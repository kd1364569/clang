#include<stdio.h>
main()
{
	int num, i;
	i = 0;
	while(1)
	{
		
		printf("��������:");
		scanf("%d", &num);
		if (num == -999)
		{
			break;
		}
		i += num;
	} 
	printf("���v=%d\n", i);
}
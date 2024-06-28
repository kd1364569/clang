#include<stdio.h>
main()
{
	int num, i;
	i = 0;
	while(1)
	{
		
		printf("”‚ğ“ü‚ê‚Ä:");
		scanf("%d", &num);
		if (num == -999)
		{
			break;
		}
		i += num;
	} 
	printf("‡Œv=%d\n", i);
}
#include<stdio.h>
main()
{
	int a,b,c;

	printf("�b�������:");
	scanf("%d", &a);
	if (a < 5000)
	{
		
		b= a / 3600;
		c = (a % 3600) / 60;
		a = a % 60;
	
		printf("%d����%d��%d�b�ł�\n",b,c,a);
	}
	else 
	{
		printf("�G���[\n");
	}
}
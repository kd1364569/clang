#include<stdio.h>
main()
{
	float h,x[3][2];
	int i, j;
	for (i = 0; i < 3; i++)
	{
		for (h=0,j = 0; j < 2; j++)
		{
			printf("x[%d][%d]=", i, j);
			scanf("%f", &x[i][j]);
			h += x[i][j];
		}
		printf("%ds–Ú‚Ì•½‹Ï=%.2f\n", i, h / 2);
	}

}
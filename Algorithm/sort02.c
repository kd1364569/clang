#include<stdio.h>
#define SIZE 5
main()
{
	int d[SIZE] = { 30,7,25,16,10 };
	int i, j, w;

	printf("�o�u���\�[�g\n");
	printf("\n�\�[�g�O\n");
	for (i = 0; i < SIZE; i++)
	{
		printf("d[%d]:%d ", i, d[i]);
	}
	printf("\n");
	
	for (i = SIZE - 1; i > 0; i--)
	{
		for (j = 0; j < i; j++)
		{
			if (d[j] > d[i])
			{
				w = d[i];
				d[i] = d[j];
				d[j] = w;
			}
		}
	}
	printf("�\�[�g��\n");
	for (i = 0; i < SIZE; i++)
	{
		printf("d[%d]:%d ", i, d[i]);
	}
	printf("\n");
}
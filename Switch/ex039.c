#include<stdio.h>
main()
{
	char i;
	int d1,d2,d3;
	printf("���������:");
	scanf("%c", &i);
	printf("���������:");
	scanf("%d%d%d", &d1,&d2,&d3);
	
	switch (i)
	{
	case 'd':case 'D':
		if(d1>d2)
		{ 
			if (d1 > d3)
			{
				printf("�ő�l��%d�ł�\n", d1);
			}
			else
			{
				printf("�ő�l��%d�ł�\n", d3);
			}
		}
		else
		{
			if (d2 > d3)
			{
				printf("�ő�l��%d�ł�\n", d2);

			}
			else
			{
				printf("�ő�l��%d�ł�\n", d3);
			}
		}
		break;

	case 's':case 'S':
		if (d1 < d2)
		{
			if (d1 < d3)
			{
				printf("�ŏ��l��%d�ł�\n", d1);
			}
			else
			{
				printf("�ŏ��l��%d�ł�\n", d3);
			}
		}
		else
		{
			if (d2 < d3)
			{
				printf("�ŏ��l��%d�ł�\n", d2);

			}
			else
			{
				printf("�ŏ��l��%d�ł�\n", d3);
			}
		}
	break;
	case 'g':case 'G':
		printf("���v�l%d�ł�\n", d1 + d2 + d3);
		break;
	case 'h':case 'H':
		printf("���ς�%.2f\n", (float)(d1 + d2 + d3) / 3);
		break;
	default:("�����G���[:(d:�ő�l�@s:�ŏ��l�@g:���v�@h:����)\n");
	}
}
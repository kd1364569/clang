#include<stdio.h>
#define DCNT 8
main()
{
	int d[DCNT] = { 70,60,80,50,40,20,30,10 };
	int i, j, w,gop;
	gop = DCNT / 2;
	while (gop > 0)
	{
		for (i = gop; i < DCNT; i++)
		{
			for (j = i - gop; j >= 0; j -= gop)
			{
				//�m�F�p�ɕ\��
				int k;
				for (k = 0; k < DCNT; k++)
				{
					printf("%d ", d[k]);
				}
				printf("\n");

				if (d[j + gop] < d[j])
				{
					//j+gop�Ԗڂ�j�ԖڂƔ�r
					//d[j]��d[j+gop]�̓���ւ�
					w = d[j];
					d[j] = d[j+gop];
					d[j + gop] = w;
				}
				else { break; }
				
			}
		}
		gop = gop / 2;	//��r�Ԋu�𔼕��ɂ���
		printf("-------------------------\n");
	}
	//���ʕ\��
	for (i = 0; i < DCNT; i++)
	{
		printf("%d ", d[i]);
	}
	
}
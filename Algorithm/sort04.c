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
				//確認用に表示
				int k;
				for (k = 0; k < DCNT; k++)
				{
					printf("%d ", d[k]);
				}
				printf("\n");

				if (d[j + gop] < d[j])
				{
					//j+gop番目とj番目と比較
					//d[j]とd[j+gop]の入れ替え
					w = d[j];
					d[j] = d[j+gop];
					d[j + gop] = w;
				}
				else { break; }
				
			}
		}
		gop = gop / 2;	//比較間隔を半分にする
		printf("-------------------------\n");
	}
	//結果表示
	for (i = 0; i < DCNT; i++)
	{
		printf("%d ", d[i]);
	}
	
}
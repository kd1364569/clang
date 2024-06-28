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
				//Šm”F—p‚É•\Ž¦
				int k;
				for (k = 0; k < DCNT; k++)
				{
					printf("%d ", d[k]);
				}
				printf("\n");

				if (d[j + gop] < d[j])
				{
					//j+gop”Ô–Ú‚Æj”Ô–Ú‚Æ”äŠr
					//d[j]‚Æd[j+gop]‚Ì“ü‚ê‘Ö‚¦
					w = d[j];
					d[j] = d[j+gop];
					d[j + gop] = w;
				}
				else { break; }
				
			}
		}
		gop = gop / 2;	//”äŠrŠÔŠu‚ð”¼•ª‚É‚·‚é
		printf("-------------------------\n");
	}
	//Œ‹‰Ê•\Ž¦
	for (i = 0; i < DCNT; i++)
	{
		printf("%d ", d[i]);
	}
	
}
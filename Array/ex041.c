#include<stdio.h>
main()
{
	float box[3] , j;
	int i;
	
	for (i = 0,j=0;i < 3; i++)
	{
		printf("実数を入力:");
		scanf("%f", &box[i]);
		
		j += box[i];
		
	}
	printf("合計は%.2f\t平均%.2f", j, j / 3);

}
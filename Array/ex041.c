#include<stdio.h>
main()
{
	float box[3] , j;
	int i;
	
	for (i = 0,j=0;i < 3; i++)
	{
		printf("ŽÀ”‚ð“ü—Í:");
		scanf("%f", &box[i]);
		
		j += box[i];
		
	}
	printf("‡Œv‚Í%.2f\t•½‹Ï%.2f", j, j / 3);

}
#include<stdio.h>
main()
{
	float box[3] , j;
	int i;
	
	for (i = 0,j=0;i < 3; i++)
	{
		printf("���������:");
		scanf("%f", &box[i]);
		
		j += box[i];
		
	}
	printf("���v��%.2f\t����%.2f", j, j / 3);

}
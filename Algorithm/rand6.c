#include<stdio.h>
#include<stdlib.h>
#include<time.h>
main()
{
	int i, j;
	srand(time(0));
	rand();
	printf("(1:グー 2:チョキ 3:パー)>");
	scanf("%d", &i);
	j = rand() % 3;
	switch (i)
	{
		case 1:
			printf("プレイヤーは、グーです\n");
			break;
		case 2:
			printf("プレイヤーは、チョキです\n");
			break;
		case 3:
			printf("プレイヤーは、パーです\n");
		
	}
	switch (j)
	{
	case 0:
		printf("コンピューターは、グーです\n");
		break;
	case 1:
		printf("コンピューターは、チョキです\n");
		break;
	case 2:
		printf("コンピューターは、パーです\n");
	
	}switch (((i - 1) - j + 3) % 3)
	{
	case 0:
		printf("あいこです\n");
		break;
	case 1:
		printf("コンピューターの勝ちです\n");
		break;
	case 2:
		printf("プレイヤーの勝ちです\n");
	}
}
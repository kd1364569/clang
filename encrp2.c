#include<stdio.h>
#include<stdlib.h>
#include<time.h>
main()
{
	char s[50];
	int i, n, k[20];
	srand(time(0));
	rand();
	printf("文字列を入力して下さい＞");
	scanf("%s", s);
	for (i = 0; s[i] != '\0'; i++)
	{
		k[i] = rand() % 6;
		s[i] = s[i] + k[i];
	}
	printf("\n暗号化文字列は、%s\n", s);
	printf("暗号化キーは、");
	for (n = 0; n < i; n++)
	{
		printf("%d", k[n]);
	}
	printf("\n");
}
#include<stdio.h>

main()
{
	char s[20];
	int i, k;

	printf("文字列を入力して下さい＞");
	scanf("%s", s);
	for (i = 0; s[i] != '\0'; i++)
	{
		printf("s[%d]の複合化キー＞",i);
		scanf("%d",&k);
		s[i] = s[i] - k;
	}
	printf("複合化済み文字列は、%s\n",s);


}
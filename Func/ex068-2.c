#include<stdio.h>
main()
{
	/*char a[256];
	while (gets(a) != NULL)
	{
		gets(a);
	}*/
	char dummy[256];
	char* cp;
	printf("文字列入力＞");
	cp = gets(dummy);

	while (cp != NULL)
	{
		printf("入力されたのは%s\n", cp);
		printf("文字列入力＞");
		cp = gets(dummy);
	}
}
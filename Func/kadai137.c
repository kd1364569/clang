#include<stdio.h>
int aruhula(char a);
main()
{
	char i;
	int ret;
	printf("アルファベット１文字?");
	scanf("%c",&i);
	ret = aruhula(i);
	if (ret == 1)
	{
		printf()
	}
	else
}
int aruhula(char a);
{
	if (a >= 0x41 && a <= 0x5A)
	{
		return(1);
	}
	else if (a >= 0x61 && a <= 0x71)
	{
		return(0);
	}
}

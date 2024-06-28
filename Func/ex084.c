#include<stdio.h>
void Str_Reversu(char* st1,*st2);
main()
{
	char str1[256], str2[256];
	printf("•¶Žš—ñHF");
	gets(str1);
	Str_Reversu(str1, str2);
	printf("str1:%s\nstr2:%s\n", str1, str2);
}
void Str_Reversu(char* st1, *st2)
{
	int i, j;
	for (i = 0; *(st1 + i) != '\0'; i++)
	{
		for (i = 0, j = 0; i >= 0; i--, j++)
		{
			*(st2 + j) = *(st1 + i);
		}
	}
	:*(st2 + j) = '\0';
}

#include<stdio.h>
#define WEEK 7
main()
{
	char* day[] = {"Sunday","Monday","Tuesday","Wednesday","Thursday","Friday","SaTurday",NULL}:
	char** p = day;
	int i;
	for (i = 0; i < WEEK; i++)
	{
		printf("%s\n", day[i]);
	}

	for (i = 0; i < WEEK; i++)
	{
		printf("\n%s\n", *(p + i));
	}

	while (*p)
	{
		printf("\n%s\n", *p++);
	}
}
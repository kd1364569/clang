#include<stdio.h>
void cat(char *p_a, char *p_b);
main()
{
	char a[256], b[256];

	printf("�z�� a:");
	gets(a);
	printf("�z�� b:");
	gets(b);
	cat(a, b);
	printf("�z�� a:%s\n", a);
}
void cat(char *p_a, char *p_b)
{
	int i, j;
	for (i = 0; *(p_a + i) != '\0'; i++);
	for (j = 0; *(p_a + i) = *(p_b + j); i++, j++);
	
}
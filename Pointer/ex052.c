#include<stdio.h>
main()
{
	int a, b, w;
	int* p_a=&a, * p_b=&b;
	a = 100, b = 200;
	printf("���s�O�Fa=%d	b=%d\n", *p_a, *p_b);
	w = *p_a;
	*p_a = *p_b;
	*p_b = w;
	printf("���s��Fa=%d	b=%d\n", a, b);

}
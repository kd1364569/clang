#include<stdio.h>
void calculate(int a, int c, int* p_sun, float* p_avc);
main()
{
	int a, c, s;
	float g;
	printf("������2����:");
	scanf("%d%d", &a, &c);

	calculate(a, c, &s, &g);
	printf("���v��%d�A�@���ς�%.2f", s, g);
}
void calculate(int a, int c, int* p_sun, float* p_avc)
{
	*p_sun = a + c;
	*p_avc = (a + c) / 2.0;
	return;
}
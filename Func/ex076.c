#include<stdio.h>
void calculate(int a, int c, int* p_sun, float* p_avc);
main()
{
	int a, c, s;
	float g;
	printf("整数を2つ入力:");
	scanf("%d%d", &a, &c);

	calculate(a, c, &s, &g);
	printf("合計は%d、　平均は%.2f", s, g);
}
void calculate(int a, int c, int* p_sun, float* p_avc)
{
	*p_sun = a + c;
	*p_avc = (a + c) / 2.0;
	return;
}
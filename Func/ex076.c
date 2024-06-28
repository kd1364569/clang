#include<stdio.h>
void calculate(int a, int c, int* p_sun, float* p_avc);
main()
{
	int a, c, s;
	float g;
	printf("®”‚ğ2‚Â“ü—Í:");
	scanf("%d%d", &a, &c);

	calculate(a, c, &s, &g);
	printf("‡Œv‚Í%dA@•½‹Ï‚Í%.2f", s, g);
}
void calculate(int a, int c, int* p_sun, float* p_avc)
{
	*p_sun = a + c;
	*p_avc = (a + c) / 2.0;
	return;
}
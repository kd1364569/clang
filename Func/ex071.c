#include<stdio.h>
int gokei(int a, int b, int c);
float heikin(int a, int b, int c);
main()
{
	int a, b, c;

	printf("整数を３つ入力：\n");
	scanf("%d%d%d", &a, &b, &c);
	printf("合計は%d、平均は%.2f\n", gokei(a,b,c), heikin(a,b,c));
}
int gokei(int a , int b, int c)
{
	return a + b + c;
}
float heikin(int a, int b, int c)
{
	return (a + b + c)/3.0;
}

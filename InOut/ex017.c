#include<stdio.h>
main()
{
	float a,b,c;
	printf("一つ目の実数:");
	scanf("%f", &a); 
	printf("一つ目の実数:");
	scanf("%f", &b);
	printf("一つ目の実数:");
	scanf("%f", &c);
	printf("合計=%.2f 平均=%.2f", a + b + c, (a + b + c)/ 3);
}
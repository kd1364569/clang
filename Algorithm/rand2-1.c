#include<stdio.h>
#include<stdlib.h>
#include<time.h>
main()
{
	int a, b, c,i;

	srand(time(0));
	rand();
	for (i = 0; i < 10; i++)
	{
		a = (rand() % 99) + 1;
		b = (rand() % 40+1)  +10;
		c = (rand() % 300+1) - 100;
		printf("a=%d,b=%d,c=%d\n", a, b, c);
	}
	
}
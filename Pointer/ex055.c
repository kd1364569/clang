#include<stdio.h>
main()
{
	int a[] = { 11,22,33,44,55,66 };
	float b[] = { 11.1,22.2,33.3,44.4 };
	float sum=0, ave;
	int i, * p_a;
	float* p_b;
	
	p_a = a;
	p_b = b;

	for (i = 0; i < 6; i++)
	{
		sum += *p_a;
		p_a++;

	}
	ave = sum / i;
	printf("zña	v=%f\t½Ï=%.3f\n", sum, ave);

	for (i = 0; i <4 ; i++)
	{
		sum += *p_b;
		p_b++;

	}
	ave = sum / i;
	printf("zñb	v=%f\t½Ï=%.3f\n", sum, ave);


}
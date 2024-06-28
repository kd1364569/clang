#include<stdio.h>
main()
{
	int i, s, d[10]={10,5,30,77,16,3,47,29,37,33};
	printf("’Tõ’ls‚ğ“ü—Í");
	scanf("%d", &s);
	for (i = 0; i < 10; i++)
	{
		if (s == d[i])
		{
			break;
		}
	}
	if (i == 10)
	{
		printf("Œ©‚Â‚©‚ç‚È‚©‚Á‚½\n");
	}
	else
	{
		printf("’Tõ’l%d‚ÍAd[%d]‚Å”­Œ©\n",s, i);
	}


}
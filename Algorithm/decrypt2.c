#include<stdio.h>

main()
{
	char s[20];
	int i, k;

	printf("•¶š—ñ‚ğ“ü—Í‚µ‚Ä‰º‚³‚¢„");
	scanf("%s", s);
	for (i = 0; s[i] != '\0'; i++)
	{
		printf("s[%d]‚Ì•¡‡‰»ƒL[„",i);
		scanf("%d",&k);
		s[i] = s[i] - k;
	}
	printf("•¡‡‰»Ï‚İ•¶š—ñ‚ÍA%s\n",s);


}
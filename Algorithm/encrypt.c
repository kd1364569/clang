#include<stdio.h>
main()
{
	char s[50];
	int i;
	
	printf("•¶Žš‚ð“ü—Í");
	scanf("%s", &s[0]);
	i = 0;
	while (s[i] != '\0')
	{
		s[i]++;
		i++;
	}
	printf("%s\n", &s[0]);

}
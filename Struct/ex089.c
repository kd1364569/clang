#include<stdio.h>
struct profile
{
	char name[20];
	int birth[3];
	char blood[5];
}data;
main()
{
	printf("–¼‘O‚ğ“ü—Í:");
	gets(data.name);

	printf("¶”NŒ“ú‚ğ‹ó”’‚Å‹æØ‚Á‚Ä“ü—ÍF");
	scanf("%d%d%d", &data.birth[0], &data.birth[1], &data.birth[2]);

	printf("ŒŒ‰tŒ^‚ğ“ü—ÍF");
	gets(data.blood);
	//scanf("%s",data.blood);

	printf("%s[[%d”N%dŒ%d“ú¶ŒŒ‰tŒ^[%sŒ^", data.name, data.birth[1], data.birth[2], data.birth[3], data.blood);
}
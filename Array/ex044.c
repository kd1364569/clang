#include<stdio.h>
main()
{
	char data1[80], data2[80], i[80];
	int j;
	printf("•¶Žš—ñ 1 ‚ð“ü—Í:");
	scanf("%s", &data1[0]);
	printf("•¶Žš—ñ 2 ‚ð“ü—Í");
	scanf("%s", &data2[0]);

	printf("moji1=%s\tmoji2=%s\n\n", data1, data2);
	printf("“ü‚ê‘Ö‚¦‚é‚Æ\n");
	for (j = 0; i[j] = data1[j]; j++);
	for (j = 0; data1[j] = data2[j]; j++);
	for (j = 0; data2[j] = i[j]; j++);
	printf("moji1=%s\tmoji2=%s\n", data1, data2);
}
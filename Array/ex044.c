#include<stdio.h>
main()
{
	char data1[80], data2[80], i[80];
	int j;
	printf("文字列 1 を入力:");
	scanf("%s", &data1[0]);
	printf("文字列 2 を入力");
	scanf("%s", &data2[0]);

	printf("moji1=%s\tmoji2=%s\n\n", data1, data2);
	printf("入れ替えると\n");
	for (j = 0; i[j] = data1[j]; j++);
	for (j = 0; data1[j] = data2[j]; j++);
	for (j = 0; data2[j] = i[j]; j++);
	printf("moji1=%s\tmoji2=%s\n", data1, data2);
}
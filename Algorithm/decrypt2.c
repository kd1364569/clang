#include<stdio.h>

main()
{
	char s[20];
	int i, k;

	printf("���������͂��ĉ�������");
	scanf("%s", s);
	for (i = 0; s[i] != '\0'; i++)
	{
		printf("s[%d]�̕������L�[��",i);
		scanf("%d",&k);
		s[i] = s[i] - k;
	}
	printf("�������ςݕ�����́A%s\n",s);


}
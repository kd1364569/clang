#include<stdio.h>
main()
{
	/*char a[256];
	while (gets(a) != NULL)
	{
		gets(a);
	}*/
	char dummy[256];
	char* cp;
	printf("��������́�");
	cp = gets(dummy);

	while (cp != NULL)
	{
		printf("���͂��ꂽ�̂�%s\n", cp);
		printf("��������́�");
		cp = gets(dummy);
	}
}
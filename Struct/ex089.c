#include<stdio.h>
struct profile
{
	char name[20];
	int birth[3];
	char blood[5];
}data;
main()
{
	printf("���O�����:");
	gets(data.name);

	printf("���N�������󔒂ŋ�؂��ē��́F");
	scanf("%d%d%d", &data.birth[0], &data.birth[1], &data.birth[2]);

	printf("���t�^����́F");
	gets(data.blood);
	//scanf("%s",data.blood);

	printf("%s�[�[%d�N%d��%d�������t�^�[%s�^", data.name, data.birth[1], data.birth[2], data.birth[3], data.blood);
}
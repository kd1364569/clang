#include<stdio.h>
#include<stdlib.h>
#include<time.h>
main()
{
	int i, j;
	srand(time(0));
	rand();
	printf("(1:�O�[ 2:�`���L 3:�p�[)>");
	scanf("%d", &i);
	j = rand() % 3;
	switch (i)
	{
		case 1:
			printf("�v���C���[�́A�O�[�ł�\n");
			break;
		case 2:
			printf("�v���C���[�́A�`���L�ł�\n");
			break;
		case 3:
			printf("�v���C���[�́A�p�[�ł�\n");
		
	}
	switch (j)
	{
	case 0:
		printf("�R���s���[�^�[�́A�O�[�ł�\n");
		break;
	case 1:
		printf("�R���s���[�^�[�́A�`���L�ł�\n");
		break;
	case 2:
		printf("�R���s���[�^�[�́A�p�[�ł�\n");
	
	}switch (((i - 1) - j + 3) % 3)
	{
	case 0:
		printf("�������ł�\n");
		break;
	case 1:
		printf("�R���s���[�^�[�̏����ł�\n");
		break;
	case 2:
		printf("�v���C���[�̏����ł�\n");
	}
}
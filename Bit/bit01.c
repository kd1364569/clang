#include<stdio.h>
enum BitStata
{
	Base = 0,			//00000000 í èÌ
	Poison = 1 << 0,	//00000001 ì≈
	Sleep = 1 << 1,		//00000010 ÇÀÇﬁÇË
	Paralysus = 1 << 2,	//00000100 ñÉ·É
	Burn = 1 << 3,		//00001000 Ç‚ÇØÇ«
	AtkUp = 1 << 4,		//00010000 çUåÇóÕUp
	AtkDown = 1 << 5	//00100000 çUåÇóÕDown
};
typedef unsigned int UINT;
void DisplayStatus(UINT s);
void ChangeFlag(UINT* s);
void ClearFlag(UINT* s);
main()
{
	UINT MyState = Base;
	ChangeFlag(&MyState);
	DisplayStatus(MyState);
	ClearFlag(&MyState);
	DisplayStatus(MyState);
}
void DisplayStatus(UINT s)
{
	printf("åªç›ÇÃèÛë‘\n");
	if (s & Poison)
	{
		printf("ì≈\n");
	}
	if (s & Sleep)
	{
		printf("êáñ∞\n");
	}
	if (s & Paralysus)
	{
		printf("ñÉ·É\n");
	}
	if (s & Burn)
	{
		printf("Ç‚ÇØÇ«\n");
	}
	if (s & AtkUp)
	{
		printf("çUåÇóÕÉAÉbÉv\n");
	}
	if (s & AtkDown)
	{
		printf("çUåÇóÕÉ_ÉEÉì\n");
	}
	if (s == Base)
	{
		printf("èâä˙èÛë‘a");
	}
}
void ChangeFlag(UINT* s)
{
	int a;
	while (1)
	{
		printf("Ç«ÇÃèÛë‘Ç…ÇµÇ‹Ç∑Ç©ÅH\n");
		printf("1:ì≈Å@2:êáñ∞ 3:ñÉ·É 4:âŒèù 5:çUåÇÅ™ 6:çUåÇÅ´ 0:ì¸óÕèIóπ>");
		scanf("%d", &a);
		if (a == 0)
		{
			break;
		}
		switch (a)
		{
		case 1:
			*s |= Poison;
			break;
		case 2:
			*s |= Sleep;
			break;
		case 3:
			*s |= Paralysus;
			break;
		case 4:
			*s |= Burn;
			break;
		case 5:
			*s |= AtkUp;
			break;
		case 6:
			*s |= AtkDown;
			break;
		default:
			break;

		}
	}
}
void ClearFlag(UINT* s)
{
	int a;
	while (1)
	{
		printf("Ç«ÇÃèÛë‘Ç…ÇµÇ‹Ç∑Ç©ÅH\n");
		printf("1:ì≈Å@2:êáñ∞ 3:ñÉ·É 4:âŒèù 5:çUåÇÅ™ 6:çUåÇÅ´ 0:ì¸óÕèIóπ>");
		scanf("%d", &a);

		if (a == 0)
		{
			break;
		}

		switch (a)
		{
		case 1:
			*s &= ~Poison;
			break;
		case 2:
			*s &= ~Sleep;
			break;
		case 3:
			*s &= ~Paralysus;
			break;
		case 4:
			*s &= ~Burn;
			break;
		case 5:
			*s &= ~AtkUp;
			break;
		case 6:
			*s &= ~AtkDown;
			break;
		case 7:
			*s = Base;
			break;
		default:
			break;
		}
	}
}
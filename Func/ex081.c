#include<stdio.h>
int Get_max(int* array, int size);
int Get_min(int* array, int size);
main()
{
	int data[8] = { 6,10,8,2,9,5,1,7 };
	printf("�ő�l=%d\n", Get_max(data[8]));
	printf("�ŏ��l=%d\n", Get_min(data[8]));
}
int Get_max(int* array, int size)
{
	int max,i;
	for (max = *array, i = 1; i < size; i++)
	{
		if (max < *(array + i))
		{
			max = *(array + i);
		}
	}
	return max;

}
int Get_min(int* array, int size)
{
	int min, i;
	for (min = *array, i = 1; i < size; i++)
	{
		if (min > *(array + i))
		{
			min = *(arraay + i);
		}
	}
	return min;
}
#include<stdio.h>
struct syohin_data {
	char name[20];
	int tanka;
}syohin = {"ƒPƒVƒSƒ€",50};
void display3(struct  syohin_data *syohin);

main()
{	
	display3(&syohin);
}

void display3(struct syohin_data *syohin)
{
	printf("%s  %d\n", syohin->name, syohin->tanka);
}
#include <stdio.h>
#define DATA_END -1
struct ken {
	int code;
	char name[20];
	struct ken* next;
}ken_data[] = { {1,"�k�C��",NULL}, {2,"�X��",NULL},{3,"��茧",NULL},{4,"�{�錧",NULL},
 {5,"�H�c��",NULL},{6,"�R�`��",NULL},{7,"������",NULL},{DATA_END,"",NULL},{28,"���Ɍ�",NULL}}, * p, * wp;
void display(struct ken ken_data[]);
void addition(struct ken ken_data[]);
void sakujo(struct ken ken_data[]);

main()
{
	display(ken_data);
	
}
void display(struct ken ken_data[])
{
	p = wp = ken_data;
	do {
		p++;
		wp->next = p;
		wp = p;
	} while (p->code != DATA_END);

	ken_data[8].next = ken_data[0].next;
	ken_data[0].next = &ken_data[8];

	for (p = ken_data; p->code != DATA_END; p = p->next)
	{
		printf("%d\t%s\n", p->code, p->name);
	}
}
void addition(struct ken ken_data[])
{

}
void sakujo(struct ken ken_data[])
{

}

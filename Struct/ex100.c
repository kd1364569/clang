#include <stdio.h>
#define DATA_END -1
struct ken {
	int code;
	char name[20];
	struct ken* next;
}ken_data[] = { {1,"–kŠC“¹",NULL}, {2,"ÂXŒ§",NULL},{3,"ŠâŽèŒ§",NULL},{4,"‹{éŒ§",NULL},
 {5,"H“cŒ§",NULL},{6,"ŽRŒ`Œ§",NULL},{7,"•Ÿ“‡Œ§",NULL},{DATA_END,"",NULL},{28,"•ºŒÉŒ§",NULL}}, * p, * wp;
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

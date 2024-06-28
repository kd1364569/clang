#include<stdio.h>
#define NIN 5
struct day
{
	int nen;
	int tuki;
	int hi;
};
struct profile
{
	char name[20];
	struct day data ;
	char blood[5];
}data[NIN] = { {"a",2004,8,14,"AB"},{"b",1980,3,20,"O"},{"c",1990,4,6,"A"},
			 {"rina",2002,2,20,"AB"},{"kanami",1970,2,17,"A"} }, * p;
main()
{
	int i;
	for (p = data, i = 0; i < NIN; i++, p++)
	{
		if (p->data.tuki == 2)
		{
			printf("%s[[%d”N%02dŒŽ%02d“ú¶‚Ü‚ê ŒŒ‰tŒ^[ %sŒ^\n",
				p->name, p->data.nen, p->data.tuki, p->data.hi, p->blood);
		}

	}
}
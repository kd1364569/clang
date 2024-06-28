#include<stdio.h>
main()
{
	char data[15] = "Language";
	char* p_data,ch;
	int i;
	
	
	printf("data[]=%s\n", p_data);
	printf("ŒŸõ•¶š‚ÍH@");
	scanf("%c", &ch);
	printf("ŒŸõŒ‹‰Ê‚ÍA");
	for (p_data = data, i = 0; *(p_data + 1) != '\0'; i++)
	{
		if (ch == *(p_data + i))
			printf(" % d", i + 1);
	}
	printf("•¶š–Ú‚Å‚·\n");
}
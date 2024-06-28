#include<stdio.h>
main()
{
	int a = 100, b ;
	int 	*p_a;	//ポインタの宣言
	p_a = &a;	//aのアドレスをp_aに入れる
	b = *p_a;	//p_a番地の中身をaに入れる

	printf("a=%d &a=%d p_a=%d *p_a=%d &p_a=%d\n", a, &a,p_a,*p_a,&p_a);


}
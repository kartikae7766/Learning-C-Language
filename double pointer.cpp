#include<Stdio.h>
int main()
{
	int a=10;
	int *p,**pp;
	p=&a;
	pp=&p;
	printf("%d\n",p);
	printf("%d\n",pp);
	printf("%d\n",*p);
	printf("%d\n",**pp);
	return 0;
}
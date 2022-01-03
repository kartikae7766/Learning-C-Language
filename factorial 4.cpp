#include<stdio.h>
int fac(int);
int main()
{
	int n,x;
	printf("enter the value of number whose factorial you want : ");
	scanf("%d",&n);
	x=fac(n);
	printf("factorial of %d is %d",n,fac);
	return 0;
}
int fac(int n)
{
	int i;
	int fac=1;
	for(i=1;i<=n;i++)
	fac=fac*i;
	return (fac);
}


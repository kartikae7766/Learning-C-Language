#include<stdio.h>
#include<conio.h>
main()
{
	int a,b,temp;
	printf("enter numbers:");
	scanf("%d%d",&a,&b);
	printf("\nbefore swapping...\na=%d,b=%d",a,b);
	temp=a;
	a=b;
	b=temp;
	printf("\nafter swapping....\na=%d,b=%d",a,b);
	getch();
}

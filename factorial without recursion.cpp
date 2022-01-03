#include<stdio.h>
int fact(int);
int main()
{
 int num;
 int y;
 printf("\n Enter a number : ");
 scanf("%d",&num);
 y=fact(num);
 printf("Factorial is %d=%d\n",num,y);
 return 0;	
}
int fact(int num)
{
	int i;
	int factorial=1;
	for(i=1;i<=num;i++)
	factorial=factorial*i;
	return(factorial);
}

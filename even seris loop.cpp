#include<stdio.h>
int main()
{
int num ,i,sum=0;
printf("enter a number");
scanf("%d",&num);
for(i=0;i<=num;i+=5)
{
  sum+=2;
  }
printf("%d",sum);
	return 0;

}

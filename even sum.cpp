#include<stdio.h>
int main()
{ int i,num,sum;
printf("enter a positive number : ");
scanf("%d",&num);
for(i=1;i<=num;i++)
{sum+=i;
printf("sum=%d\n",sum);
}
return 0;
}

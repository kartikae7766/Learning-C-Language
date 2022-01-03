#include<stdio.h>
int fact(int);

int main()
{
int n,f;
printf(" enter the value of n : ");
scanf("%d",&n);
f=fact(n);

printf("factorial is : ");
scanf("%d",&f);}

int fact(int n)
{if(n==0||n==1)
{return 1;
}
else {return n*fact(n-1);
}
}






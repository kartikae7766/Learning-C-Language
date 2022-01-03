#include<stdio.h>
int fact(int);
int main()
{int n,F;
printf("enter the value for factorial");
scanf("%d",n);
F=fact(n);
printf("factorial is %d",F);
return 0;
}
int fact(int n)
{if(n==1)
{return 1;
}
else {return n*fact(n-1);
}
}

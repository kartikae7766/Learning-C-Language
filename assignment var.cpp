#include<stdio.h>
main()
{
int a=5,b=6,r;
float c=11.2,d=12.5,m;
r=b;
printf("r=%d\n",r);

a-=b;
printf("a=%d\n",a);
r=r/a;
printf("r=%d\n",r);
r=r%b;
printf("r=%d\n",r);
m=d;
printf("m=%f\n",m);
m=m-c;
printf("m=%f\n",m);
return 0;
}

#include<stdio.h>
main()
{
int a,b,c,d,e,f;
float average;
printf("enter a value of a");
scanf("%d",&a);
printf("enter a value of b");
scanf("%d",&b);
printf("enter a value of c");
scanf("%d",&c);
printf("enter a value of d");
scanf("%d",&d);
printf("enter a value of e");
scanf("%d",&e);
average=(float)(a+b+c+d+e)/5;
printf("average of marks %d,%d,%d,%d,%d is %.2f",a,b,c,d,e,average);
return 0;
}

#include <stdio.h>
#include <conio.h>
main()
{
int a,b;
printf("Amount Of Milk In Kgs");
scanf("%d",&a);
printf("Number Of Persons?");
scanf("%d",&b);
a%=b;
printf(" Amount Each One Will Get= \n%d",a);
return 0;
}

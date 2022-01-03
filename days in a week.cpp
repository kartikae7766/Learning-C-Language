#include<stdio.h>
int main()
{
char ch;
printf("enter a character");
scanf("%c",&ch);
switch(ch)
{
case 'A':
printf("First day of week is monday");
break;
case 'B':
printf("First day of week is tuesday");
break;
case 'C':
printf("First day of week is wednesday");
break;
case 'D':
printf("First day of week is thursday");
break;
case 'E':
printf("First day of week is friday");
break;
case 'F':
printf("First day of week is saturday");
break;
case 'G':
printf("First day of week is sunday");
break;
default:
printf("there is no such number of days");
}
return 0;	
}

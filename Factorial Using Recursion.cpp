#include <stdio.h>
int csk(int);
int main()
{
int n,f;
printf("Enter the Number");
scanf("%d",&n);

f = csk(n);
printf("The Factorial is equal to = %d",f);
return 0;
}
int csk(int n)
{
if(n==0)
{
return 0;
}
else if(n==1)
{
return 1;
}
else
{
return n*csk(n-1);
}
}
 

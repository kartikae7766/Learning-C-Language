#include <stdio.h>
int sum();
int main()
{
int a,b,c,d,e,f;
    f=sum();
    printf("%d",f);
  return 0;
}
int sum()
{
	int a,b,c,d,e,f;
	printf("Write Any Five Numbers");
	scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);
	f=(a+b+c+d+e)/5;
	printf("The Average Of these Numbers= %d",f);
	
}

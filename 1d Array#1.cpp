#include <stdio.h>
int main()
{
int num[26],temp;
num[0] = 100 ;
num[26]=200;
temp=num[26];
num[26]=num[0];
num[0]=temp;
printf("%d\n%d\n",num[0],num[26]);
return 0;
}

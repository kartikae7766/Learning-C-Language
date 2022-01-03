#include <stdio.h>
int main()
{
int stud[4][2]={{1,2},{3,4},{5,6},{7,8}};
int i,j;
for(i=0;i<=3;i++)
{
for(j=0;j<=1;j++)
{
	printf("Value of %d\n",stud[i][j]);
}
}
return 0;
}

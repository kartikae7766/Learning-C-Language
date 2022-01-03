/*demo : 2d array is an array of arrays*/
#include<stdio.h>
int main()
{
	int s[4][2]={
                    {1234,56},{345,89},{678,89},{678,89}};
	int i,j;
	for(i=0;i<=3;i++)
	for(j=0;j<=1;j++)
	printf("Address of %dth array =%u\n",i,s[i][j]);
	return 0;
}

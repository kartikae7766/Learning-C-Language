#include<stdio.h>
int main()
{
	int janvi[4][2];
	int i,j;
	for(i=0;i<=3;i++)
	{
		printf("Enter roll number and marks: ");
		scanf("%d %d",&janvi[i][0],&janvi[i][1]);
	}
	for(i=0;i<=3;i++)
	printf("%d %d\n",janvi[i][0],janvi  [i][1]);
	return 0;
}


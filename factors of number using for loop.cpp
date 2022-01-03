#include<stdio.h>
int main()
{
	int i,num;
	printf("enter the number you want to find factors : ");
	scanf("%d",&num);
	
	printf("Factors of number are: ");
	for(i=1;i<=num;i++)
	{
		if(num%i==0)
		{
		
		printf("\n\n%d\n",i);
	}
	}
	return 0;
}

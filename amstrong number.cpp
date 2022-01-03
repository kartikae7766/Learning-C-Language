#include<stdio.h>
int main()
{
	int num,r,sum=0,temp;
	printf("Please enter a number to find amstrong number : ");
	scanf("%d",&num);
	temp=num;
	while(num>0)
{
		r=num%10;
	    sum=sum+(r*r*r);
	    num=num/10;
	}
	
	if(temp==sum)
	printf("\n The number is amstrong number",temp);
	else
	printf("\n The number is not amstrong number ",temp);
	return 0;
}
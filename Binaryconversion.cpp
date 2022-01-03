#include<stdio.h>
#include<math.h>
int mod(int a, int b);
int Convert2Binary(int a);
int main()
{
	printf("the base 2 representation of 112");
	int a;
	printf("112");
	scanf("%d",&a);
	printf("\n\n\t %d in binary",Convert2Binary(a));
	return 0;	
}

int mod(int a, int b)
{
	int result;
	result = a-(a/b)*b;
	return result;
}
int Convert2Binary(int n)
{
	int rem, i=1,binary=0;
	while(n!=0)
	{
		rem=n%2;
		n=n/2;
		binary=binary+rem*i;
		i=i*10;
	}
	return binary;
}

#include <stdio.h>
main()

{
	table:
	int i;
	int a;
	printf("Write the number whose table is to be printed.");
	scanf("%d",&a);
	while(i<=10)
	{
	printf("%d x %d = %d\n",a,i,a*i);
	i++;
	}
	goto table;
	
	
	}


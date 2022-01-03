#include<stdio.h>

add()
{int a,b,c;
printf("enter a number : ");
scanf("%d%d",&a,&b);
c=a+b;
printf("sum is %d\n",c);
}

multiply()
{int a,b,c;
printf("enter a number : ");
scanf("%d%d",&a,&b);
c=a*b;
printf("product is %d\n",c);
}

subtraction()
{int a,b,c;
printf("enter a number : ");
scanf("%d%d",&a,&b);
c=a-b;
printf("difference is %d\n",c);
}

division()
{int a,b,c;
printf("enter a number : ");
scanf("%d%d",&a,&b);
c=a/b;
printf("division is %d\n",c);
}


greaterthan ()
{int a,b,c;
printf("enter a number : ");
scanf("%d%d",&a,&b);
if(a>b)
printf("A is greater\n");
else
printf("B is greater\n");
}

lessthan ()
{int a,b,c;
printf("enter a number : ");
scanf("%d%d",&a,&b);
if(a<b)
printf("A is smaller than B");
else
printf("B is smaller than A");
}
main()
{add();
multiply();
subtraction();
division();
greaterthan();
lessthan();
 return 0;
}

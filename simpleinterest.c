#include<stdio.h>
#include<conio.h>
  main()
{
float SI,P,N,R;
printf("enter values of P,N,R:");
scanf("%f%f%f", &P,&N,&R);
SI=(P*N*R)/100;
printf("simple interest= :%6.2f",SI);
getch();
}

#include<stdio.h>
#include<conio.h>
  main()
{
   float AREA,B,H;
   printf("Enter Base & height:");
   scanf("%f%f",&B,&H);
   AREA=0.5*B*H;
   printf("AREA OF GIVEN VALUES ARE:%6.2f",AREA);
   getch();
}

#include<stdio.h>
#include<conio.h>
  main()
{
  int roll_no,m1,m2,m3,total;
  float average;
  printf("enter roll no:");
  scanf("%d",&roll_no);
  printf("enter marks1:");
  scanf("%d",&m1);
  
  printf("enter marks2:");
  scanf("%d",&m2);
  printf("enter marks3:");
  scanf("%d",&m3);
  total=m1+m2+m3;
  average=total/3.0;
  printf("\nstudent roll no: %d",roll_no);
  printf("\nm1: %d",m1);
  printf("\nm2: %d",m2);
  printf("\nm3: %d",m3);
  printf("\ntotal: %d",total);
  printf("\naverage: %d",average);
  getch();
  
  
  
  
  
  
}

#include<stdio.h>
main()
{
    int num;
 printf("Enter the number");
 scanf("%d",&num);
 switch(num %2 == 0)
 {
 
  case 1:
  printf("Number is even number");
  break;
  case 0:
  printf("Number is odd number");
  break;
  default:
  printf("Bhaagoooo");
}
  return 0;
}


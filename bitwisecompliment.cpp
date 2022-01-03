#include <stdio.h>


int main()
{
    printf("Output = %d\n",~35);
    printf("Output = %d\n",~-12);
     int NextPowerOfTwo(5);
     printf("Output = %u \n",5);
     int x;
     printf("enter number");
     scanf("%d",&x);
	 int int WhichpPowerofTwo (unsigned int x);
    return ;
}
  
 //int isPowerOfTwo (unsigned int x){
 //while (((x & 1) == 0) && x > 1) /* While x is even and > 1 */
  // x >>= 1;
 //return (x == 1);
//}
int whichPowerOfTwo (unsigned int x)
{
  /* First x in the below expression is for the case when x is 0 */
  return x && (!(x&(x-1)));
}


int NextPowerofTwo (unsigned int x)
{
 unsigned int powerOfTwo = 1;

 while (powerOfTwo < x && powerOfTwo < 16)
   powerOfTwo *= 2;
 return (x == powerOfTwo);
}

/*exchange names using 2D array of characters*/
#include<stdio.h>
int main()
{
	char name[][20]={
	                     "janvi","kartikae","raman",
	                     "srinivas","gopal","rakesh"};
	                     
	 int i;
	 char t;
	 printf("original : %s %s\n",&name[2][0],&name[3][0]);
	 for(i=0;i<=19;i++)
	 {
	 	t=name[2][i];
	 	name[2][i]=name[3][i];
	 	name[3][i]=t;
						}                   
	                  printf("New: %s %s \n",&name[2][0],&name[3][0]);
					  return 0;   
}

#include <stdio.h>
void printarray(char *arr)
{
printf("enter the elements: \n");
for(int i=0;i<5;i++)
{
	printf("%c", arr[i]);
}
}
int main()
{
char arr[5]={'A','B','C','D','E'};
printarray(arr);
return 0;
}
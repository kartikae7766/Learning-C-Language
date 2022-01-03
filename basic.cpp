#include<stdio.h>
#include<string.h>
struct emp{
	int eno;
	char ename[20];
	float esal;
};
main()
{
struct emp k{1001,"janvi",50000 };	
printf("emp details\n");
printf("eno : %d\n",k.eno);
printf("ename : %s\n",k.ename);
printf("esal : %f\n",k.esal);
printf("size of structure : %d",sizeof(struct emp));
return 0;
}
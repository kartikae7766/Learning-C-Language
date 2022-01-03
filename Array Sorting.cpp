 #include <stdio.h>
int main()
{
int a,b,c;
int k[3];
printf("Write Any three elemnets");
scanf("%d%d%d",&k[0],&k[1],&k[2]);
for(a=0;a<3;a++)
{
	for(b=a+1;b<3;b++)
	{
		if(k[b]>k[a])
		{c=k[a];
		k[a]=k[b];
		k[b]=c;
		}
	}
}
printf("Elemnts after sorting ; ");
for(a=0;a<3;a++)
{
	printf("%d\n",k[a]);
}
}

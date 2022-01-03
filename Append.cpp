#include <stdio.h>
#include <stdlib.h>
int main()
{
	int a;
	FILE *fptr;
	fptr = fopen("Aamya.txt","w");

	if((fptr == NULL)){
	printf("Cannot Find The File");
	exit(1);
		
	}
	printf("Enter the Chararcter");
	scanf("%d",&a);
	fscanf(fptr,"%d",&a);
	fprintf(fptr,"%d",a);
	fclose(fptr);
	return 0;
	
}

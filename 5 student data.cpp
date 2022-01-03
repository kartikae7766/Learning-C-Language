#include<stdio.h>
#include<string.h>
struct student{
	int rollno;
	char name[100];
	float marks;
};
main()
{
	struct student k{ 10,"janvi",100};	
printf("student details\n");
printf("roll no. : %d\n",k.rollno);
printf("name : %s\n",k.name);
printf("marks : %f\n\n",k.marks);

struct student l{11,"kartikae",67 };	

printf("roll no. : %d\n",l.rollno);
printf("name : %s\n",l.name);
printf("marks : %f\n\n",l.marks);

struct student n{12,"raman",78 };	

printf("roll no. : %d\n",n.rollno);
printf("name : %s\n",n.name);
printf("marks : %f\n\n",n.marks);

struct student m{13,"harman",56 };	

printf("roll no. : %d\n",m.rollno);
printf("name : %s\n",m.name);
printf("marks : %f\n\n",m.marks);


struct student o{14,"tapasaya",73 };	

printf("roll no. : %d\n",o.rollno);
printf("name : %s\n",o.name);
printf("marks : %f\n\n",o.marks);
return 0;
}
#include<stdio.h>	
#include<conio.h>
#include<string.h>

struct Employee
{
	int id;
	char name[20];
	float salary;
};
struct Employee empData();

int main()
{
	struct Employee e[5];
	int i;
	for(i=0;i<5;i++)
		e[i]=empData();
		
	getch();
}

struct Employee empData()
{
	struct Employee e1;
	static int i=1;
	printf("Enter id, name and salary for employee - %d: ",i);
	scanf("%d",&e1.id);
	fflush(stdin);
	fgets(e1.name,20,stdin);	
	e1.name[strlen(e1.name)-1]='\0';
	scanf("%f",&e1.salary);		
	i++;
	return e1;
}

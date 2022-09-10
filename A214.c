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
void highSalaryEmp(struct Employee [],int);

int main()
{
	struct Employee e[10];
	int i;
	for(i=0;i<10;i++)
		e[i]=empData();
		
	highSalaryEmp(e,10);	
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

void highSalaryEmp(struct Employee e[],int size)
{
	int i,j;
	struct Employee temp;
	for(i=1;i<=size-1;i++)
	{
		for(j=0;j<=size-1-i;j++)
		{
			if(e[j].salary<e[j+1].salary)
			{
				temp=e[j];
				e[j]=e[j+1];
				e[j+1]=temp;
			}
		}
	}
	printf("The highest paid employee is %s",e[0].name);
}

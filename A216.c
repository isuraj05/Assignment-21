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
void sortByName(struct Employee [],int);
void display(struct Employee);
int main()
{
	int n,i;
	printf("Enter how many employee's data you want to store: ");
	scanf("%d",&n);
	struct Employee e[n];
	
	for(i=0;i<n;i++)
		e[i]=empData();
		
	sortByName(e,n);
	for(i=0;i<n;i++)
		display(e[i]);
		
	getch();
}

struct Employee empData()
{
	struct Employee e1;
	static int i=1;
	printf("\nEnter id, name and salary for employee - %d: ",i);
	scanf("%d",&e1.id);
	fflush(stdin);
	fgets(e1.name,20,stdin);	
	e1.name[strlen(e1.name)-1]='\0';
	scanf("%f",&e1.salary);		
	i++;
	return e1;
}

void sortByName(struct Employee e[],int size)
{
	int i,j,k;
	struct Employee temp;
	for(i=0;i<size-1;i++)
	{
		for(j=i;j<size-1;j++)
		{
			for(k=0;e[i].name[k];k++)
			{
				if(e[i].name[k]==e[j+1].name[k])
					continue;
				else if(e[i].name[k]>e[j+1].name[k])
				{
					temp=e[i];
					e[i]=e[j+1];
					e[j+1]=temp;
					break;
				}
				else
					break;	
			}
		}
	}
}

void display(struct Employee e)
{
	printf("\n%d  %s  %f",e.id,e.name,e.salary);
}

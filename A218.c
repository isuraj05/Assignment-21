#include<stdio.h>	
#include<conio.h>
#include<string.h>

struct Students
{
	char name[20];
	int roll_no;
};
struct Students stdData();
void display(struct Students);
int main()
{
	struct Students s[10];
	int i;
	for(i=0;i<10;i++)
		s[i]=stdData();
		
	for(i=0;i<10;i++)
		display(s[i]);	
	getch();
}

struct Students stdData()
{
	struct Students s1;
	static int i=1;
	printf("\nEnter name and roll no for student - %d: ",i);
	fflush(stdin);
	fgets(s1.name,20,stdin);
	s1.name[strlen(s1.name)-1]='\0';
	scanf("%d",&s1.roll_no);	
	i++;
	return s1;
}

void display(struct Students s2)
{
	printf("\n%s  %d",s2.name,s2.roll_no);
}

#include<stdio.h>	
#include<conio.h>
#include<string.h>

struct Marks
{
	char name[20];
	int roll_no;
	int chem_marks;
	int maths_marks;
	int phy_marks;
};
struct Marks stdData();
void display(struct Marks);
int main()
{
	struct Marks s[5];
	int i;
	for(i=0;i<5;i++)
		s[i]=stdData();
		
	for(i=0;i<5;i++)
		display(s[i]);	
	getch();
}

struct Marks stdData()
{
	struct Marks s1;
	static int i=1;
	printf("\nEnter name,roll no, marks of chemistry, maths and physics out of 100 for student - %d: ",i);
	fflush(stdin);
	fgets(s1.name,20,stdin);
	s1.name[strlen(s1.name)-1]='\0';
	scanf("%d",&s1.roll_no);
	scanf("%d",&s1.chem_marks);
	scanf("%d",&s1.maths_marks);
	scanf("%d",&s1.phy_marks);	
	i++;
	return s1;
}

void display(struct Marks s2)
{
	float pct;
	pct=(s2.chem_marks+s2.maths_marks+s2.phy_marks)*100.0f/300.0f;	
	printf("\n%s  %d  %f%%",s2.name,s2.roll_no,pct);
}

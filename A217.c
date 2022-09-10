#include<stdio.h>	
#include<conio.h>
#include<string.h>

struct Time
{
	int hrs;
	int mins;
	int secs;
};
struct Time timeData();
void difBetweenTime(struct Time,struct Time);
int main()
{
	struct Time start,end;
	start=timeData();
	end=timeData();
		
	difBetweenTime(start,end);	
	getch();
}

struct Time timeData()
{
	struct Time t;
	
	printf("\nEnter time as H:M:S format: ");
	scanf("%d:%d:%d",&t.hrs,&t.mins,&t.secs);
	
	return t;
}

void difBetweenTime(struct Time start,struct Time end)
{
	struct Time timeDif;
	if((end.mins<start.mins) && (end.secs<start.secs))
	{
		timeDif.hrs=(end.hrs-1)-start.hrs;
		timeDif.mins=(end.mins-1+60)-start.mins;
		timeDif.secs=(end.secs+60)-start.secs;
		printf("\nThe time difference between the time periods is  %d:%d:%d",timeDif.hrs,timeDif.mins,timeDif.secs);
	}
	
	else if(end.mins<start.mins)
	{
		timeDif.hrs=(end.hrs-1)-start.hrs;
		timeDif.mins=(end.mins+60)-start.mins;
		timeDif.secs=end.secs-start.secs;
		printf("\nThe time difference between the time periods is  %d:%d:%d",timeDif.hrs,timeDif.mins,timeDif.secs);
	}
	
	else if(end.secs<start.secs)
	{
		timeDif.hrs=(end.hrs)-start.hrs;
		timeDif.mins=(end.mins-1)-start.mins;
		timeDif.secs=(end.secs+60)-start.secs;
		printf("\nThe time difference between the time periods is  %d:%d:%d",timeDif.hrs,timeDif.mins,timeDif.secs);
	}
	
	else
	{
		timeDif.hrs=end.hrs-start.hrs;
		timeDif.mins=end.mins-start.mins;
		timeDif.secs=end.secs-start.secs;
		printf("\nThe time difference between the time periods is  %d:%d:%d",timeDif.hrs,timeDif.mins,timeDif.secs);
	}
}

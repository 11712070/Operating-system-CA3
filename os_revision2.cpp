#include<stdio.h>
int main()
{
	int n,i,c,t,flag=0;
	printf("\n Enter number of process");
	scanf("%d",&n);
	int bt[n],at[n],tq=3,p[n],tat=0,wt=0,rt[n],r=n;
	for(i=0;i<n;i++){
		p[i]=i;
		printf("\nEnter Arrival Time of p[%d] process",i+1);
		scanf("%d",&at[i]);
		printf("Enter Burst Time of p[%d] process",i+1);
		scanf("%d",&bt[i]);
		rt[i]=bt[i];
	}
	printf("\nProcess\t|Turnaround Time|Waiting Time\n");
	for(t=0,c=0;r!=0;)
	{
		if(rt[c]<=tq&&rt[c]>0)
		{
			t=t+rt[c];
			rt[c]=0;
			flag=1;
		}
		else if(rt[c]>0)
		{
		rt[c]-=tq;
		t=t+tq;
		}
	}
}

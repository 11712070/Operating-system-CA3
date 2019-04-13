#include<stdio.h>
int main()
{
	int n,i;
	printf("\n Enter number of process-");
	scanf("%d",&n);
	int burst_time[n],arrival_time[n],process[n];
	for(i=0;i<n;i++){
		process[i]=i;
		printf("\nEnter Arrival Time of p[%d] process-",i+1);
		scanf("%d",&arrival_time[i]);
		printf("Enter Burst Time of p[%d] process-",i+1);
		scanf("%d",&burst_time[i]);
	}
}

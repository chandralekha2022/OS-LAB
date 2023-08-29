#include<stdio.h>
int main()
{
	int i,n,bt[20],wt[20],tat[20],k,temp,p[20];
	float wtavg,tatavg;
	printf("Enter the no of process --");
	scanf("%d",&n);
	for(i=0;i<n;i++)
{
	p[i]=i;
	printf("Enter burst time for process %d --",i);
    scanf("%d",&bt[i]);
}
    for(i=0;i<n;i++)
    for(k=i+1;k<n;k++)
    if(bt[i]>bt[k])
    {
    	temp=bt[i];
    	bt[i]=bt[k];
    	bt[k]=temp;
    	temp=p[i];
    	p[i]=p[k];
    	p[k]=temp;
	}
    wt[0]=wtavg=0;
    tat[0]=tatavg=bt[0];
    for(i=1;i<n;i++)
    {
    	wt[i]=wt[i-1]+bt[i-1];
    	tat[i]=tat[i-1]+bt[i];
    	wtavg=wtavg+wt[i];
    	tatavg=tatavg+tat[i];
	}
	printf("\tPROCESS\tBURST TIME\tWAITING TIME\tTURN AROUND TIME");
	for(i=0;i<n;i++){
	
	printf("\n\t %d \t\t %d \t %d\t\t %d\n",i,bt[i],wt[i],tat[i]);
}
	printf("\n average waiting time --%f",wtavg/n);
	printf("\n avearge turnaround time --%f",tatavg/n);
}

	
	


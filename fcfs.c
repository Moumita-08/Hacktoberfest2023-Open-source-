#include<stdio.h>
int main()
{
	int n,i;
	printf("Enter the number of process: ");
	scanf("%d",&n);
    int arr[n],w[n],ta[n];
	for(i=1;i<=n;i++)
	{
		printf("Enter the burst time for %d: ",i);
		scanf("%d",&arr[i]);
	}
	printf("Process    Burst Time    Waiting Time    Turn Around Time\n");	
	int a=0,p=0,tat,wt;
	for(i=1;i<=n;i++)
	{
        //Turn Around Time
		a=a+arr[i];
		ta[i]=a;
		w[i]=ta[i]-arr[i];  	//Waiting Time
		printf("%4d %15d %15d %15d\n",i,arr[i],w[i],ta[i]);
	}
	a=0;
	for(i=1;i<=n;i++)
	{
        a=a+ta[i];
		p=p+w[i];
	}	
	wt=p/n;
	tat=a/n;
	printf("Avg Waiting Time: %d",wt);
	printf("Avg Turn Around Time: %d",tat);
	return 0;
}

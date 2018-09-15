#include<stdio.h>
void main()
{
int a[20],n,i,p[20],l,pr[20],j,k,t[20],w[20],aw=0,at=0;
printf ("\nEnter no. of processes : ");
scanf("%d",&n);
for(i=0;i<n;i++)
{
    printf("\nEnter burst time of process %d : ",i+1);
        scanf("%d",&a[i]);
        printf("\n Enter the priority of process %d : ",i+1);
        scanf("%d",&pr[i]);
        p[i]=i+1;
}

for(i=0;i<n-1;i++)
{
  for(j=i+1;j<n;j++)
  {
    if(pr[i]>pr[j])
    {
      int temp1,temp2,temp3;
      temp1=pr[i];
      pr[i]=pr[j];
      pr[j]=temp1;

      temp2=p[i];
      p[i]=p[j];
      p[j]=temp2;

      temp3=a[i];
      a[i]=a[j];
      a[j]=temp3;
    }
  }
}

for(i=0;i<n;i++)
{t[i]=0;
    for(j=i;j>=0;j--)
    {
    t[i]=t[i]+a[j];
    }
}
w[0]=0;
for(i=1;i<n;i++)
{
w[i]=0;
    for(k=i-1;k>=0;k--)
    {
    w[i]=w[i]+a[k];
    }
}
for(i=0;i<=n;i++)
{
printf("\n");
printf("         Process  \t  Burst Time  \t  Priority  \t  Turnaround Time  \t  Waiting Time  ");
for(i=0;i<n;i++)
{
  printf("\n\tP%d    \t   \t    %d    \t  \t    %d    \t  \t  %d    \t  \t    %d",p[i],a[i],pr[i],t[i],w[i]);   
}
printf("\n");
}
for(l=0;l<n;l++)
{
aw=aw+w[l];
at=at+t[l];
}
printf("\nAvg waiting time : %d",aw/n);
printf("Avg turnaround time : %d",at/n);
}

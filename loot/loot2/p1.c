#include<stdio.h>
void main()
{
int d,n,i,j,avt=0,awt=0,ch;

int a1[10],a2[10]={0},a3[10]={0},a[20],b,p[20],l,k,t[20],w[20],aw=0,at=0;
do
{
printf("menu \n 1.FCFS algorithm \n2.SJF algorithm \n3round algorithm \n 4.Priority algorithm \n enter the choice:");
scanf("%d",&ch);
switch(ch)
{
case 1:  printf("FCFS");
         printf("enter the no of process");
         scanf("%d", &n);
         for(i=0;i<n;i++)
         { 
          printf("enter the burst time");
          scanf("%d",&a1[i]);  
         }
        
        for(i=0;i<n;i++)
        { 
        for (j=0;j<=i;j++)
        {
        a2[i]+=a1[j];}
        printf("\nturn around time is %d is %d \n" , i+1,a2[i]);
        avt+=a2[i];
        }
        printf("\naverage turn around time %d \n",avt/n);
        for(i=0;i<n;i++)
        {
        for (j=0;j<i;j++)
        {
        a3[i]+=a1[j];
        printf("\nwaiting time for processes %d is %d \n",i+1, a3[i]);
         awt+=a3[i];
        }
printf("process\tburst time\twaiting time\tTAT\n");
for(i=0;i<n;i++)
printf("P[%d]\t %d \t \t %d \t\t %d \n",i+1,a1[i],a3[i],a2[i]);
printf("\naverage waiting time %d \n",awt/n);
}
break;


case 2:
printf ("\nEnter no. of processes : ");
scanf("%d",&b);
printf("\nEnter burst time of processes in SJF : ");
for(i=0;i<b;i++)
{
    scanf("%d",&a[i]);
    p[i]=i+1;
}

for(i=0;i<b-1;i++)
{
  for(j=i+1;j<b;j++)
  {
    if(a[i]>a[j])
    {
      int temp1,temp2;
      temp1=a[i];
      a[i]=a[j];
      a[j]=temp1;

      temp2=p[i];
      p[i]=p[j];
      p[j]=temp2;
    }
  }
}

for(i=0;i<b;i++)
{t[i]=0;
    for(j=i;j>=0;j--)
    {
    t[i]=t[i]+a[j];
    }
}
w[0]=0;
for(i=1;i<b;i++)
{
w[i]=0;
    for(k=i-1;k>=0;k--)
    {
    w[i]=w[i]+a[k];
    }
}
for(i=0;i<b;i++)
{
printf("\n");
printf("         Process  \t  Turnaround Time  \t  Waiting Time  ");
for(i=0;i<b;i++)
{
  printf("\n\tP%d    \t   \t    %d    \t  \t    %d",p[i],t[i],w[i]); 
}
printf("\n");
}
for(l=0;l<b;l++)
{
aw=aw+w[l];
at=at+t[l];
}
printf("\nAvg waiting time : %d",aw/n);
printf("\nAvg turnaround time : %d",at/n);
}

break;

default : printf("invalid choice");

}
printf("enter 1 if u want to continue");
scanf("%d" ,&d);

}while(d==1);
}



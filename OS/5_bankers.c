#include<stdio.h>
int required[100],allocate[100],need[100];

void main()
{
    int n;
    int max=12,allocateCount=0;

    printf("Enter the number of processes:\n");
    scanf("%d",&n);

    printf("Enter the required resource for each process: \n");
    for(int i=0; i<n; i++)
    {
        printf("Requirement for Process %d:",i+1);
        scanf("%d",&required[i]);
    }

     printf("\nEnter the Allocated resource for each process: \n");
     for(int i=0; i<n; i++)
    {
        printf("Allocated for process %d:",i+1);
        scanf("%d",&allocate[i]);
        allocateCount+=allocate[i];
        need[i]=required[i]-allocate[i];
    }
                                                                                                                          
    int available=max-allocateCount;
    int count=n,sequence=0;
    int ans[n],ind=0;
    for(int i=0; i<n; i++)
    {
       for(int j=0; j<n; j++)
       {
           if(need[j]!=0)
           {
               if(need[j]>available)
               {
                   continue;
               }
               else
               {
                   ans[ind++]=j+1;
                   sequence++;
                   count--;
                   available+=need[j];
                   need[j]=0;
               }
           }
       }

    }
    if(sequence<n)
    {
        printf("\nThe system is in a unsafe state!!\n");
    }
    else
    {
        printf("\nThe system is in a safe state!!\n");
        for(int i=0; i<n; i++)
        {
            printf("p%d->",ans[i]);
        }
    }
    
}
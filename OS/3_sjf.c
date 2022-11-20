#include <stdio.h>

int arrival_t[100], burst_t[100], ct[100],temp[100];
int main() 
{
      int i, smallest, count = 0,j, n;
      double avg_wt = 0, avg_tat = 0, end;

      printf("\nEnter the Total Number of Processes: ");
      scanf("%d", &n); 

      printf("\nEnter Details of %d Processes\n", n);
      for(i = 0; i < n; i++)
      {
            printf("\nEnter Arrival Time for P%d: ",i+1);
            scanf("%d", &arrival_t[i]);
            printf("Enter Burst Time for P%d: ",i+1);
            scanf("%d", &burst_t[i]); 
            temp[i]=burst_t[i];
      }
      burst_t[99] = 1000;  
      for(i = 0; count != n; i++)
      {
            smallest = 99;
            for(j = 0; j < n; j++)
            {
                  if(arrival_t[j] <= i && burst_t[j] < burst_t[smallest] && burst_t[j] > 0)
                  {
                        smallest = j;
                  }
            }
            burst_t[smallest]--;
            if(burst_t[smallest] == 0)
            {
                  count++;
                  ct[smallest]=i+1;
                 
            }
      }
      
      for(i=0; i<n; i++)
        {
           int TAT=ct[i]-arrival_t[i];
           avg_tat+=TAT;
           avg_wt+=TAT-temp[i];
        }      
        printf("\nAverage Turn Arround Time: %lf\n",avg_tat/n);
        printf("\nAverage Waiting time: %lf\n",avg_wt/n);
      return 0;
}
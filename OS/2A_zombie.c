#include<stdio.h>
#include<unistd.h>
#include<sys/types.h>
#include<sys/wait.h>

void bubbleSort(int arr[],int n){
    for (int i = 0; i < n - 1; i++)
        for (int j = 0; j < n - i - 1; j++)
            if (arr[j] > arr[j + 1]){
              int temp = arr[j];
              arr[j] = arr[j+1];
              arr[j+1] = temp;
            }
    printf("\nSorted array by Bubble sort in child process = ");
    for(int i = 0;i<n;i++){
      printf("%d ",arr[i]);
    }
    printf("\n");
}

void selectionSort(int arr[], int n){
 int  min_idx;
    for (int i = 0; i < n-1; i++){
        min_idx = i;
        for (int j = i+1; j < n; j++)
        if (arr[j] < arr[min_idx])
            min_idx = j;
        if(min_idx!=i){
            int temp = arr[min_idx];
            arr[min_idx] = arr[i];
            arr[i] = temp;
        }
    }
    printf("\nSorted array by Selection sort in parent process = ");
    for(int i = 0;i<n;i++){
      printf("%d ",arr[i]);
    }
    printf("\n");
}

int main(){
  pid_t pid;
  int n;
  printf("Enter the number of Elements = ");
  scanf("%d",&n);
  int arr[n];
  printf("Enter the array = ");
  for(int i = 0;i<n;i++) scanf("%d",&arr[i]);
  pid = fork();
  if(pid==0){
  printf("\n****** CHILD PROCESS ********\n");
    printf("\nIt is child process with pid = %d and ppid = %d \n",getpid(),getppid());
    bubbleSort(arr,n);
    printf("\n ***** CHILD PROCESS TERMINATED *****");
  }
  else{
  wait(NULL);
     printf("\n\n\n****** Parent PROCESS ********\n");
    printf("\nIt is parent process with pid = %d and ppid = %d \n",getpid(),getppid());
    selectionSort(arr,n);
    printf("\n ***** PARENT PROCESS TERMINATED *****");
  }
}
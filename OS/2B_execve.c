#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>
#include <string.h>
#define MAX 20

void bubbleSort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    printf("\nSorted Array = ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
}

int main()
{
    char *argc[MAX];
    char str[MAX];
    int n;
    printf("Enter the size of elements = ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements = ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    bubbleSort(arr, n);

    for (int i = 0; i < MAX; i++)
    {
        argc[i] = NULL; // Assign arguments to NULL
    }
    for (int i = 0; i < n; i++)
    {
        sprintf(str, "%d", arr[i]); // To convert integer to string
        argc[i] = strdup(str);
    }
    execve("reverse", argc, NULL);
}
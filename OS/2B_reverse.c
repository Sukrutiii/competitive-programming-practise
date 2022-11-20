#include <stdio.h>

int main(int argc, char *argv[])
{
    printf("\nReversing the array in reverse file = ");
    for (int j = argc - 1; j >= 0; j--)
    {
        printf("%s ", argv[j]);
    }
    printf("\n");
}

#include <stdio.h>
#include <stdlib.h>

void main()
{
    int arr[3][2] = {
        {1, 2},
        {3, 4},
        {5, 6}};

    int i,j;

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 2; j++)
        {
            printf("%d,", arr[i][j]);
        }
        printf("\n");
    }
    
}

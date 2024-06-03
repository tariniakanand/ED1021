#include <stdio.h>
int main()
{
    int arr[10][10], at[10][10], a, b, i=0, j=0;
    printf("Enter rows and columns: ");
    scanf_s("%d %d", &a, &b);
    for (int i = 0; i < a; i++)
        for (int j = 0; j < b; j++)
        {
            printf("a[%d][%d]: ", i, j);
            scanf_s("%d", &arr[i][j]);
        }
    printf("\nGiven Matrix is \n");
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            printf("%d  ", arr[i][j]);
            if (j == b - 1)
                printf("\n");
        }
    }
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            at[j][i] = arr[i][j];
        }
    }
    printf("\nTranspose of the matrix is\n");
    for (int i = 0; i < b; ++i)
        for (int j = 0; j < a; ++j) 
        {
            printf("%d  ", at[i][j]);
            if (j == a - 1)
                printf("\n");
        }
    if (arr[i][j] == at[i][j])
        printf("Matrix is symmetric");
    else
        printf("Matrix is not symmetric");
}
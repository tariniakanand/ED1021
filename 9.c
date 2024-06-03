#include <stdio.h>
int main()
{
    int a[10][10], b[10][10], c[10][10], m, n, i = 0, j = 0, k;
    printf("Enter the size of matrix a: ");
    scanf_s("%d %d", &m, &n);
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
        {
            printf("a[%d][%d]: ", i, j);
            scanf_s("%d", &a[i][j]);
        }
    printf("Enter the size of matrix b: ");
    scanf_s("%d %d", &m, &n);
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
        {
            printf("a[%d][%d]: ", i, j);
            scanf_s("%d", &b[i][j]);
        }
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
        {
            c[i][j] = 0;
            for (k = 0; k < n; k++)
                c[i][j] += a[i][k] * b[k][j];
            
        }
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
        {
            printf("%d\t", c[i][j]);
        }
    printf("\n");
}
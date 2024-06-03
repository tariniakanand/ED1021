#include<stdio.h>
#include<math.h>
int main()
{
    float n, x, a, b, sum, i;
    printf("Enter the values of n, a and b: ");
    scanf_s("%f %f %f", &n, &a, &b);
    sum = 0;
    for (x = a; x <= b; x += 0.2) //for-for
    {
        printf("For x= %f, ", x);
        for (i=0; i<=n; i++)
        {
            sum = sum + pow(x, i);
        }
        printf("Sum= %f\n", sum);
    }
}
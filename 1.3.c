#include<stdio.h>
#include<math.h>
int main()
{
    float n, x, a, b, sum, i;
    printf("Enter the values of n, a and b: ");
    scanf_s("%f %f %f", &n, &a, &b);
    sum = 0;
    x = a;
    do //do while-do while
    {
        i = 0;
        printf("For x= %f, ", x);
        do
        {
            sum = sum + pow(x, i);
            i++;
        } while (i <= n);
        printf("Sum= %f\n", sum);
        x = x + 0.2;
    } while (x <= b);
}
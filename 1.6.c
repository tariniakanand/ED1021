#include <stdio.h>
#include <math.h>
int main()
{
	float n, x, a, b, sum, i;
	printf("Enter the values of n, a and b: ");
	scanf_s("%f %f %f", &n, &a, &b);
	sum = 0;
	x = a;
	while (x <= b) //while-for
	{
		printf("For x= %f, ", x);
		for (i = 0; i <= n; i++)
		{
			sum = sum + pow(x, i);
		}
		printf("Sum= %f\n", sum);
		x = x + 0.2;
	}
}
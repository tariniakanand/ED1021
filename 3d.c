#include <stdio.h>
int main()
{
	int n, i, j, a, b;
	printf("Enter the value of n: ");
	scanf_s("%d", &n);
	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= n - i; j++)
			printf("  ");
		for (a = 1; a <= i; a++)
			printf("%d ", a);
		for (b = i - 1; b >= 1; b--)
		{
			printf("%d ", b);
		}
		printf("\n");
	}
}
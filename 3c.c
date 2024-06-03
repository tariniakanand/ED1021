#include <stdio.h>
int main()
{
	int n, i, j;
	printf("Enter the value of n: ");
	scanf_s("%d", &n);
	for (i = 1; i <= n; i++)
	{
		for (j = i; j >= 1; j--)
		{
			printf("%d ", j);
		}
		printf("\n");
	}
}
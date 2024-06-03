#include <stdio.h>
int main()
{
	int n, i, j;
	printf("Enter the value of n: ");
	scanf_s("%d", &n);
	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= i; j++)
		{
			printf("1 ");
		}
		printf("\n");
	}
}
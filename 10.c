#include <stdio.h>
int main()
{
	int n, F, F0, F1, i;
	printf("Enter integer n: ");
	scanf_s("%d", &n);
	F0 = 0;
	F1 = 1;
	F = F0 + F1;
	printf("%d\n", F0);
	printf("%d\n", F1);
	for (i = 3; i <= n; ++i)
	{
		printf("%d\n", F);
		F0 = F1;
		F1 = F;
		F = F0 + F1;
	}
}
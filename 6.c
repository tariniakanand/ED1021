#include <stdio.h>
int main()
{
	int arr[100], n, i, p;
	int* d;
	printf("Enter size of array (<100): ");
	scanf_s("%d", &n);
	printf("Enter the value of p: ");
	scanf_s("%d", &p);
	for (i = 0; i < n; i++)
	{
		printf("a[%d]= ", i);
		scanf_s("%d", &arr[i]);
	}
	for (i = 0; i < n; i++)
	{
		d = arr + i;
		if ((i + 1) % p == 0 && i != 0)
		{
			*d = 0;
		}
		printf("%d ", *d);
	}
}
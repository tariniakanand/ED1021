#include <stdio.h>
int main()
{
	int arr[1000], n, i;
	printf("Enter size of array (<1000): ");
	scanf_s("%d", &n);
	for (i = 0; i < n; i++)
	{
		printf("a[%d]= ", i);
		scanf_s("%d", &arr[i]);
	}
	for (i = n - 1; i >= 0; i--)
	{
		printf("%d ", arr[i]);
	}
}
#include <stdio.h>
void swap(float* a, int n)
{
	int i = 0, t = 0;
	for (i = 0; i < n/2; i++)
	{
		t = a[i];
		a[i] = a[n - 1 - i];
		a[n - 1 - i] = t;
	}
}
int main()
{
	float a[100];
	int n;
	printf("enter size of array: ");
	scanf_s("%d", &n);
	printf("\nEnter array elements:\n");
	for (int i = 0; i < n; i++)
	{
		printf("a[%d]= ", i);
		scanf_s("%f", &a[i]);
	}
	swap(a, n);
	printf("\nb) After swapping:\n");
	for (int i = 0; i < n; i++)
	{
		printf("%f\t", a[i]);
	}
}
#include <stdio.h>
void swap(float* a, int n)
{
	int i = 0, t = 0;
	for (i = 0; i < n; i+=2)
	{
		t = a[i];
		a[i] = a[i+1];
		a[i+1] = t;
	}
}
int main()
{
	float a[100];
	int n;
	printf("enter size of array: ");
	scanf_s("%d", &n);
	if (n % 2 != 0)
		printf("Array elements should be even\n");
	else
	{
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
}

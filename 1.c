#include <stdio.h>
int csum(int* a, int* b, int n)
{
	int sum[100];
	for (int i = 0; i < n; i++) {
		sum[i] = a[i] + b[i];
		return sum[i];
	}
}
int csub(int* a, int* b, int n)
{
	int sub[100];
	for (int i = 0; i < n; i++) {
		sub[i] = a[i] - b[i];
		return sub[i];
	}
}
int cmul(int* a, int* b, int n)
{
	int mul[100];
	for (int i = 0; i < n; i++) {
		mul[i] = a[i] * b[i];
		return mul[i];
	}
}
int cdiv(int* a, int* b, int n)
{
	int div[100];
	for (int i = 0; i < n; i++) {
		div[i] = a[i] / b[i];
		return div[i];
	}
}
int main()
{
	int a[100], b[100], add[100], sub[100], mul[100], div[100], n, i;
	printf("Enter size of array (<100): ");
	scanf_s("%d", &n);
	for (i = 0; i < n; i++)
	{
		printf("a[%d]= ", i);
		scanf_s("%d", &a[i]);
	}
	printf("\n");
	for (i = 0; i < n; i++)
	{
		printf("b[%d]= ", i);
		scanf_s("%d", &b[i]);
	}
	for (i = 0; i < n; i++)
	{
		add[i] = csum(a, b, n);
		sub[i] = csub(a, b, n);
		mul[i] = cmul(a, b, n);
		div[i] = cdiv(a, b, n);
		printf("Sum= %d\n", add[i]);
		printf("Difference= %d\n", sub[i]);
		printf("Product= %d\n", mul[i]);
		printf("Quotient= %d\n", div[i]);
	}
	
}
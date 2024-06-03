#include <stdio.h>
void csum(int a[], int b[])
{
	int n, sum[100];
	for (int i = 0; i < n; i++)
		sum[i] = a[i] + b[i];
	return sum[i];
}
void csub(int a[], int b[])
{
	int n, sub[100];
	for (int i = 0; i < n; i++)
		sub[i] = a[i] - b[i];
	return sub[i];
}
void cmul(int a[], int b[])
{
	int n, mul[100];
	for (int i = 0; i < n; i++)
		mul[i] = a[i] * b[i];
	return mul[i];
}
void cdiv(int a[], int b[])
{
	int n, div[100];
	for (int i = 0; i < n; i++)
		div[i] = a[i] / b[i];
	return div[i];
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
	for (int i = 0; i < n; i++)
	{
		printf("Sum= %d\n", csum(a[i], b[i]));
		printf("Difference= %d\n", csub(a[i], b[i]));
		printf("Product= %d\n", cmul(a[i], b[i]));
		printf("Quotient= %d\n", cdiv(a[i], b[i]));
	}
}



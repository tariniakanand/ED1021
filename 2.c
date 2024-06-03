#include <stdio.h>
void swapA(int x, int g_a)
{
	int t;
	t = x;
	x = g_a;
	g_a = t;
	printf("inside swapping\na=%d, b=%d\n", x, g_a);
}
void swapB(int g_a, int g_b)
{
	int t;
	t = g_a;
	g_a = g_b;
	g_b = t;
	printf("inside swapping\na=%d, b=%d\n", g_a, g_b);
}
void swapC(int x, int* y)
{
	int t;
	t = x;
	x = *y;
	*y = t;
	printf("inside swapping\na=%d, b=%d\n", x, *y);
}
void swapD(int* x, int* y)
{
	int t;
	t = *x;
	*x = *y;
	*y = t;
	printf("inside swapping\na=%d, b=%d\n", *x, *y);
}
int main()
{
	int a = 10, g_a = 20;
	printf("Call by value and global variable\n");
	printf("Before swapping\na=%d, b=%d\n", a, g_a);
	swapA(a, g_a);
	printf("After swapping\na=%d, b=%d\n\n", a, g_a);
	int g_b = 30;
	printf("Global variable\n");
	printf("Before swapping\ng_a=%d, g_b=%d\n", g_a, g_b);
	swapB(g_a, g_b);
	printf("After swapping\ng_a=%d, g_b=%d\n\n", g_a, g_b);
	int b = 40;
	printf("Call by value and call by refernce\n");
	printf("Before swapping\na=%d, b=%d\n", a, b);
	swapC(a, &b);
	printf("After swapping\na=%d, b=%d\n\n", a, b);
	printf("Call by value and call by refernce\n");
	printf("Before swapping\na=%d, b=%d\n", a, b);
	swapD(&a, &b);
	printf("After swapping\na=%d, b=%d\n\n", a, b);
}


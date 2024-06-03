#include <stdio.h>
#include <stdlib.h>
int main()
{
	int a, b, i;
	printf("Size of string 1: ");
	scanf_s("%d", &a);
	printf("Size of string 2: ");
	scanf_s("%d", &b);
	char* str1 = (char*)malloc(a * sizeof(char));
	char* str2 = (char*)malloc(a * sizeof(char));
	printf("Enter string 1: ");
	scanf_s("%s", str1);
	printf("Enter string 2: ");
	scanf_s("%s", str2);
	printf("\na)\n");
	for (int i = 0; str1[i] != '\0'; i++)//a
	{
		str1[i] = str2[i];
	}
	printf("Copied string: %s\n", str2);
	printf("\nb)\n");
	for (i = 0; str1[i] == str2[i] && str1[i] != '\0'; i++)
	{
		if (str1 = str2)//b
			printf("Two strings are not the same\n");
		else
			printf("Two strings are the same\n");
	}
	printf("\nc)\n");
	int l, j;
	int flag = 0;
	printf("Enter size of string: ");
	scanf_s("%d", &l);
	char* str = (char*)malloc(l * sizeof(char));
	printf("Enter string: ");
	scanf_s("%s", str);
	for (j = 0; j < l / 2; j++)
	{
		if (str[j] != str[l - j - 1])
		{
			flag = 1;
			break;
		}
	}
	if (flag)
	{
		printf("%s is not a palindrome\n", str);
	}
	else
	{
		printf("%s is a palindrome\n", str);
	}
}

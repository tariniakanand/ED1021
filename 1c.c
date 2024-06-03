#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
typedef struct AccountDetails
{
	char name[30];
	float num;
	float bal;
	struct AccountDetails* next;
}AD;
void add(AD* head, int n)
{
	AD* ptr1 = head;
	AD* ptr2 = (AD*)malloc(sizeof(AD));
	printf("Enter name, number and balance respectively:\n");
	scanf("%s %d %f", ptr2->name, ptr2->num, ptr2->bal);
	ptr2->next = NULL;
	n--;
	while (n != 1)
	{
		ptr1 = ptr1->next;
		n--;
	}
	ptr2->next = ptr1->next;
	ptr1->next = ptr2;
}
void display(AD* ptr)
{
	AD* p = NULL;
	p = ptr;
	while (p != NULL)
	{
		printf("\n%s\n%f\n%f\n", p->name, p->num, p->bal);
		p = p->next;
	}
}
int main()
{
	int n;
	AD* ptr = (AD*)malloc(sizeof(AD));
	printf("Enter name, number and balance respectively:\n");
	scanf("%s %d %f", ptr->name, ptr->num, ptr->bal);
	ptr->next = NULL;
	AD* ptr1 = (AD*)malloc(sizeof(AD));
	printf("Enter name, number and balance respectively:\n");
	scanf("%s %d %f", ptr1->name, ptr1->num, ptr1->bal);
	ptr1->next = NULL;
	ptr->next = ptr1;
	ptr1 = (AD*)malloc(sizeof(AD));
	printf("Enter name, number and balance respectively:\n");
	scanf("%s %d %f", ptr1->name, ptr1->num, ptr1->bal);
	ptr1->next = NULL;
	ptr->next->next = ptr1;
	add(ptr, 1);
	display(ptr);
}
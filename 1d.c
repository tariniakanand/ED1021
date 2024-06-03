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
void del(AD* head)
{
	AD* temp = head;
	head = head->next;
	free(temp);
	temp = NULL;
	return;
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
	del(ptr);
	display(ptr);
}

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
typedef struct AccountDetails
{
    char name[20];
    int num;
    float bal;
    struct AccountDetails* next;
}AD;
void insert(AD* head, int N)
{
    AD* temp, * ptr, * ptr1;
    temp = head;
    int count = 1;
    while (count < N - 1)
    {
        temp = temp->next;
        count++;
    }
    ptr = (AD*)malloc(sizeof(AD));
    printf("Enter name, number and balance respectively:\n");
    scanf("%s %d %f", &ptr->name, &ptr->num, &ptr->bal);
    ptr->next = temp->next;
    temp->next = ptr;
}
void display(AD* head)
{
    AD* temp;
    temp = head;
    printf("\n");
    while (temp->next != NULL)
    {
        printf("%s,%d,%f", temp->name, temp->num, temp->bal);
        printf("\n");
        temp = temp->next;
    }
    printf("%s,%d,%f", temp->name, temp->num, temp->bal);
    printf("\n");
}
int main()
{
    int acc, count, n;
    AD* hptr, * ptr, * temp;
    printf("Enter the no of nodes in linked list\n");
    scanf("%d", &acc);
    hptr = (AD*)malloc(sizeof(AD));
    hptr->next = NULL;
    printf("Enter name, number and balance respectively:\n");
    scanf("%s %d %f", &hptr->name, &hptr->num, &hptr->bal);
    count = 1;
    temp = hptr;
    while (count < acc)
    {
        ptr = (AD*)malloc(sizeof(AD));
        ptr->next = NULL;
        temp->next = ptr;
        temp = ptr;
        printf("Enter name, number and balance respectively:\n");
        scanf("%s %d %f", &temp->name, &temp->num, &temp->bal);
        count++;
    }
    printf("\nOriginal List\n");
    display(hptr);
    printf("\nposition to insert node\n");
    scanf("%d", &n);
    insert(hptr, n);
    display(hptr);
}

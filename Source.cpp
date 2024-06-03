#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
typedef struct AccountDetails
{
    int StudentID;
    char name[50];
    int age;
    float cgpa;
    struct AccountDetails* next;
}AD;
void insert(AD* head, int N)//1
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
    printf("Enter student ID, name, age and cgpa respectively:\n");
    scanf("%d %s %d %f", &ptr->StudentID, &ptr->name, &ptr->age, &ptr->cgpa);
    ptr->next = temp->next;
    temp->next = ptr;
}
void del(AD* head, int p)//2
{
    AD* temp = head;
    AD* prev = head;
    if (p == 1)
    {
        head = temp->next;
        free(temp);
        temp = NULL;
    }
    else
    {
        while (p != 1)
        {
            prev = temp;
            temp = temp->next;
            p--;
        }
        prev->next = temp->next;
        free(temp);
        temp = NULL;
    }
}
void display(AD* head)//4
{
    AD* temp;
    temp = head;
    printf("\n");
    while (temp->next != NULL)
    {
        printf("%d, %s, %d, %f", temp->StudentID, temp->name, temp->age, temp->cgpa);
        printf("\n");
        temp = temp->next;
    }
    printf("%d, %s, %d, %f", temp->StudentID, temp->name, temp->age, temp->cgpa);
    printf("\n");
    return;
}
int main()
{
    int acc, count, n;
    AD* hptr, * ptr, * temp;
    ptr = (AD*)malloc(sizeof(AD));
    printf("Enter the no of nodes in linked list\n");
    scanf("%d", &acc);
    hptr = (AD*)malloc(sizeof(AD));
    hptr->next = NULL;
    printf("Enter student ID, name, age and cgpa respectively:\n");
    scanf("%d %s %d %f", &hptr->StudentID, &hptr->name, &hptr->age, &hptr->cgpa);
    count = 1;
    temp = hptr;
    while (count < acc)
    {
        ptr = (AD*)malloc(sizeof(AD));
        ptr->next = NULL;
        temp->next = ptr;
        temp = ptr;
        printf("Enter student ID, name, age and cgpa respectively:\n");
        scanf("%d %s %d %f", &temp->StudentID, &temp->name, &temp->age, &temp->cgpa);
        count++;
    }
    printf("\nOriginal List\n");
    display(hptr);
    int x;
    do
    {
        printf("\n\nSelect which operation do you want to perform:\n");
        printf("0:Exit\n1:Add a student\n2:Remove a Student\n3:Edit a Student\n4:Display\n\n");
        scanf("%d", &x);
        switch (x)
        {
        case 1:
            insert(hptr, 1);
            break;
        case 2:
            printf("Position of node to be deleted: ");
            scanf("%d", &n);
            del(hptr, n);
            break;
        case 3:
            printf("Enter the node to edit: ");
            scanf("%d", &n);
            insert(hptr, n);
            del(hptr, n + 1);
            break;
        case 4:
            display(hptr);
            break;
        case 0:
            printf("The program is ended\n");
            break;
        default:
            printf("Enter a valid input\n");
        }
    } while (x != 0);

}
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

struct StudentDetail
{
    char* name;
    int rollnum;
    float* marks;
};
typedef struct StudentDetail SD;
SD acc1;
int main()
{
    int a, l, M;
    a = 0; 
    M =0;
    printf("Length of string: ");
    scanf("%d", &l);
    printf("Name: ");
    acc1.name = (char*)malloc(a * sizeof(char));
    scanf("%s", acc1.name);
    printf("Marks: ");
    acc1.marks = (float*)malloc(M * sizeof(float));
    scanf("%f", acc1.marks);
    printf("\n\nOutput\n");
    printf("%s\n", acc1.name);
    printf("%f\n", acc1.marks);
}

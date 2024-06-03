#include <stdio.h>
struct student
{
	char name[10];
	int age;
	float marks;
};
typedef struct student stu;
int main()
{
	stu s2, s3, s1;
	printf("Enter Name Age and Marks respectively\n");
	printf("\nStudent 1:\n");
	scanf_s("%s %d %f", s1.name, &s1.age, &s1.marks);
	printf("\nStudent 2:\n");
	scanf_s("%s %d %f", s2.name, &s2.age, &s2.marks);
	printf("\nStudent 3:\n");
	scanf_s("%s %d %f", s3.name, &s3.age, &s3.marks);
	printf("\n");
	char* d1n = s1.name;
	int* d1a = &s1.age;
	float* d1m = &s1.marks;
	char* d2n = s2.name;
	int* d2a = &s2.age;
	float* d2m = &s2.marks;
	char* d3n = s3.name;
	int* d3a = &s3.age;
	float* d3m = &s3.marks;
	printf("Output:\n");
	printf("%s(%d)  %d(%d)  %f(%d)\n", s1.name, d1n, s1.age, d1a, s1.marks, d1m);
	printf("%s(%d)  %d(%d)  %f(%d)\n", s2.name, d2n, s2.age, d2a, s2.marks, d2m);
	printf("%s(%d)  %d(%d)  %f(%d)\n", s3.name, d3n, s3.age, d3a, s3.marks, d3m);
}

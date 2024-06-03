#include <stdio.h>
struct student
{
	char name[10];
	int age;
	float marks;
};
typedef struct student stu;
struct student change(struct student x)
{
	x.age = 2 * x.age;
	x.marks = 2 * x.marks;
}
int main()
{
	stu s2, s3, s1;
	printf("Enter Name Age and Marks respectively\n");
	printf("\nStudent 1:\n");
	scanf("%s %d %f", s1.name, &s1.age, &s1.marks);
	printf("\nStudent 2:\n");
	scanf("%s %d %f", s2.name, &s2.age, &s2.marks);
	printf("\nStudent 3:\n");
	scanf("%s %d %f", s3.name, &s3.age, &s3.marks);
	printf("\n");
	s1 = change(s1);
	s2 = change(s2);
	s3 = change(s3);
	printf("Changed values:\n");
	printf("%s  %d  %f\n", s1.name, s1.age, s1.marks);
	printf("%s  %d  %f\n", s2.name, s2.age, s2.marks);
	printf("%s  %d  %f\n", s3.name, s3.age, s3.marks);
}

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
	stu s[3];
	printf("Enter Name Age and Marks respectively\n");
	for (int i = 0; i < 3; i++)
	{
		printf("\nStudent %d:\n", (i + 1));
		scanf_s("%s %d %f", s[i].name, &s[i].age, &s[i].marks);
	}
	printf("\n");
	printf("Output:\n");
	for (int i = 0; i < 3; i++)
	{
		printf("%s  %d  %f\n", s[i].name, s[i].age, s[i].marks);
	}
	printf("\n");
	s[0] = change(s[0]);
	s[1] = change(s[1]);
	s[2] = change(s[2]);
	printf("Changed values:\n");
	for (int i = 0; i < 3; i++);
	{
		int i=0;
		printf("%s  %d  %f\n", s[i].name, s[i].age, s[i].marks);
	}
}

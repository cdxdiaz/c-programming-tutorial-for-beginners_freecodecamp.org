#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Student
{
    char name[50];
    char major[50];
    int age;
    double gpa;
};

int main()
{
    struct Student student1;
    student1.age = 22;
    student1.gpa = 3.2;
    //it cant use equal like student1.name == "jim";
    strcpy(student1.name, "Jim");
    strcpy(student1.major, "Business");

    struct Student student2;
    student2.age = 24;
    student2.gpa = 2.2;
    //it cant use equal like student1.name == "jim";
    strcpy(student2.name, "Jame");
    strcpy(student2.major, "Marketing");


    printf("student1\n");
    printf("%s\n", student1.name);
    printf("%s\n", student1.major);
    printf("%d\n", student1.age);
    printf("%f\n", student1.gpa);
    printf("\n");
    printf("student2\n");
    printf("%s\n", student2.name);
    printf("%s\n", student2.major);
    printf("%d\n", student2.age);
    printf("%f\n", student2.gpa);
    return (0);
}

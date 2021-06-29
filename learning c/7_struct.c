#include<stdio.h>
#include<stdlib.h>

struct Student{
    char name[50];
    char major[50];
    int age;
    double gpa;
};

void main(){

    struct Student student1;

    student1.age = 20;
    student1.gpa = 3.9;
    strcpy(student1.name, "Reet");
    strcpy(student1.major, "Computer Science");

    printf("%s\n%s\n%d\n%f\n", student1.name, student1.major, student1.age, student1.gpa);
}
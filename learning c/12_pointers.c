#include<stdio.h>
#include<stdlib.h>

void main() {
    int age = 30;
    // int * pAge;
    // pAge = &age; 
    // age = 30
    // &age = 101cff
    int * pAge = &age;
    int gpa = 3.8;
    int * pGpa = &gpa;
    char grade = "A";
    char * pGrade = &grade;

    printf("The memory address of the following are:\nAge: %p\ngpa: %p\ngrade: %p", &age, &gpa, &grade);
    printf("\n%p", pAge);
    printf("\n%d", *pAge);
    printf("\nDereferencing pointer: %d", *&age);
}
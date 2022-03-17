#include<stdlib.h>
#include<stdio.h>

void main() {
    int age = 10;
    int gpa = 4;
    char fname = "R";

    printf("Age: %p\ngpa: %p\nfname: %p", &age, &gpa, &fname); 
}
// Understading fgets to print entire line 

#include<stdio.h>
void main() {
    printf("Enter Name: ");
    char name[20];
    fgets(name, 20, stdin);
    printf("Your name is: %s", name); 
    printf("Your name is: %s njni", name); // anything after fgets prints in next line 
}
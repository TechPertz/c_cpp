// switch case

#include<stdio.h>

void main(){
    char grade;
    printf("Give a character: ");
    scanf("%c", &grade);
    
    switch (grade)
    {
    case 'A':
        printf("You did great!");
        break;
    case 'B':
    printf("You did okay");
    break;
    default:
    printf("Invalid Character.");
    }
}
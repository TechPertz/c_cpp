#include<stdio.h>

// This is called prototyping 

int cube(int num){
    int answer = num * num * num;
    return answer;
}

void main() {
    int num;
    printf("Enter the Nos of which u want a cube of: ");
    scanf("%d", &num);
    printf("\nThe cube of %d is: %d", num, cube(num));
}
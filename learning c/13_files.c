#include<stdio.h>
#include<stdlib.h>

void main() {
    FILE *fpointer = fopen("employees.txt", "w");

    fprintf(fpointer, "Jim, Salesman\nPam, Receptionist\nOscar, Accounting");
    fclose(fpointer);

    fpointer = fopen("employees.txt", "a");

    fprintf(fpointer, "\nallo, Customer Service");
    fclose(fpointer);

    char line[255];
    fpointer = fopen("employees.txt", "r");

    while ((fgets(line, 255, fpointer))!=NULL)
    {
        printf("%s", line);
    }
    
    fclose(fpointer);
}
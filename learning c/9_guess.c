#include <stdio.h>
#include <stdlib.h>

void main()
{

    int secretnos = 5;
    int guess;
    int guesslimit = 3;
    int guesscount = 0;
    int outofguess =0;

    while (guess != secretnos)
    {
        if (guesscount < guesslimit)
        {
            printf("Enter a nos: ");
            scanf("%d", &guess);
            guesscount++;
        }else{
            break;
        }
    }

    if (guess == secretnos)
    {
        printf("You got it!");
    }
    else
    {
        printf("Out of guesses!");
    }
    
}
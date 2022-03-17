#include<stdio.h>
add(int a, int b, int sum){
    sum = a +b;
    return sum;
}
minus(int a, int b, int diff){
    if(a>=b){
        diff = a-b;
    }
    else{
        diff = b-a;
    }
    return diff;
}
void main(){
    int a, b, sum, diff;
    printf("enter two nos:\n");
    scanf("%d %d", &a, &b);
    add(a,b,sum);
    minus(a,b,diff);
    printf("\n the summation of both the numbers is %d", sum);
    printf("\n the dffernece of both the numbers is %d", diff);
}
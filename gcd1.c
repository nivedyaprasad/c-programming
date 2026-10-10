#include <stdio.h>


int main()
{
    int a,b,factor;

    printf("enter a number: ");
    scanf("%d", &a);
    printf("enter another number: ");
    scanf("%d", &b);

    factor = (a<b)?a:b;
    while(!(a%factor==0 && b%factor==0)){
        --factor;
    }
    printf("gcd : %d\n", factor);

}
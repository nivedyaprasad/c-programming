#include <stdio.h>


int main()
{
    int a,b,s=0,x;
    printf("enter a no: ");
    scanf("%d", &x);
    a=x;

    while(a>0){
        b= a%10;
        s = (10*s) + b;
        a=a/10;

    }
    printf("%d", s);
    if (s==x){
        printf("yes it is a palindrome");
    }
    else{
        printf("no it isnt");
    }
}
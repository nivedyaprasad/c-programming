#include <stdio.h>


int main()
{
    int i,sum=0, a;
    printf("enter a number: ");
    scanf("%d", &a);
    
    for (i=0; i<=a; i++){
        sum+=i;

    }
    printf("%d", sum);
}
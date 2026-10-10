#include <stdio.h>


int main()
{
    int a,b;
    printf("enter any number: ");
    scanf("%d", &a);
    printf("enter another no: ");
    scanf("%d", &b);

    printf("a/b = %d\n",a/b);
    printf("a%%b = %d",a%b);
    return 0;
}
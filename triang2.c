#include <stdio.h>


int main()
{

    int a,b,c, sum=0;
    printf("enter side 1: ");
    scanf("%d", &a);
    printf("enter side 2: ");
    scanf("%d", &b);
    printf("enter side 3: ");
    scanf("%d", &c);

    if(a==b) sum++;
    if(b==c) sum++;
    if(c==a) sum++;

   

    switch(sum)
    {

        case 1:
        printf("isosceles");
        break;

        case 3:
        printf("equi");
        break;

        case 0:
        printf("scalene");
        break;

        default:
        printf("error");
        break;
    }




}
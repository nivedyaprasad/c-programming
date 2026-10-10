#include <stdio.h>


int main()
{
    int a;
    printf("enter a year: ");
    scanf("%d", &a);

    if (a%4==0 & (!(a%100==0)) | a%400==0){
        printf("yes its a leap year");
    }
    else{
        printf("nah it aint");
    }
}
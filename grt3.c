#include <stdio.h>


int main()
{
    int a,b,c;
    printf("enter a no: ");
    scanf("%d", &a);
    printf("enter a no: ");
    scanf("%d", &b);
    printf("enter a no: ");
    scanf("%d", &c);

    if (a>b){
        if(a>c){
            printf("%d is greatest", a);
        }
        else{
            printf("%d is greatest", c);
        }
    }
    else{
        if(b>c){
            printf("%d is greatest", b);
        }
        else{
            printf("%d is greatest", c);
        }
    }

}

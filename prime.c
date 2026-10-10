#include <stdio.h>


int main()
{
    int a, flag=0, i;
    printf("enter a no: ");
    scanf("%d", &a);

    if (a<=1){
        flag=1;

    }
    else{
        for (i=2; i<a/2; i++){
            if(a%i==0){
                flag=1;
                break;
            }

            

            }
        }

    if (flag==1){
        printf("not prime");
    }
    else{
        printf("is prime");
    }
}

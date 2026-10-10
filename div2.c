#include <stdio.h>


int main()
{
    int a,n,c=0;
    printf("enter a no: ");
    scanf("%d", &a);

    while(a!=0){
        n = a%10;
        if (n%2==0){
            c+=1;
        }
        a = a/10;
        


    }
    printf("%d", c);
    return 0;

    
}
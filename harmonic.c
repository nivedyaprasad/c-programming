#include <stdio.h>


int main()
{
    float n,i,sum=0;
    printf("enter a no: ");
    scanf("%f", &n);

    for (i=1; i<=n; i++){
        sum += 1/i;
        
        
    }

    printf("%f", sum);
}
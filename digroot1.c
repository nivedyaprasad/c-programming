#include <stdio.h>


int main()
{
    int n = 1729;
    int s;
    while(n>=10){
        s=0;
        while(n>0){
                    s += n%10;
                    n=n/10 ;
                }
                n=s;
    }
    printf("sum: %d", n);
    
}

#include <stdio.h>


int main()
{
    int a,i,j=1;
    printf("enter a no: ");
    scanf("%d", &a);

    /*for (i=0; i<a; i++){
        
        for(j=1;j<=i+1; j++ ){
            printf("%d", j);
        }
        printf("\n");
    }*/

    /*while (i<=a){
        j=1;
        while(j<=i){
            printf("%d",j);
            j++;
        }
        printf("\n");
        i++;
    }*/

    /*do
    {
        j=1;
        do{
            printf("%d",j);
            j++;
        }
        while(j<=i);

        printf("\n");
        i++;
    }
    while (i<=a);*/

    for (i=1; i<=a; i++){
        j=1;
        while(j<=i){
            printf("%d",j);
            j++;
        }
        printf("\n");
    }

}
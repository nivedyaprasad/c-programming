#include <stdio.h>


int main()
{
    int a,sum=0,i=0;
    printf("enter a no: ");
    scanf("%d", &a);

   /*
   for(i=1; i<=a;i++){
        sum+=i;
    }

    printf("%d", sum);
   

   while(i<=a){
    sum+=i;
    i++;
   }
   printf("%d", sum);
   */ 

   do{
    sum+=i;
    i++;
   }while(i<=a);

   printf("%d", sum);
}
#include <stdio.h>


int main()
{
    int a,b;
    printf("enter a no: ");
    scanf("%d", &a);
    printf("enter a bit pos: ");
    scanf("%d", &b);

    //if ((a|(1<<b))==a){
    if(((a>>b) & 1)==1){
        printf("yes it is set");
    }
    else{
        printf("no it is not");
    }
}
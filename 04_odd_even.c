#include <stdio.h>
int main()
{
    int i;
    printf("Even numbers:\n");
    for(i=1;i<=100;i++)
    {
        if(i%2==0){
            
            printf("%d ",i);
        }
    }
    printf("\n");
    printf("Odd numbers:\n");
    for(i=1;i<=100;i++)
    {
        if(i%2!=0){
            
            printf("%d ",i);
        }
    }
    return 0;
}

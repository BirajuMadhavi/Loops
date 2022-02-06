#include <stdio.h>
int main()
{
    int a,b;
    char c;
    printf("Enter option(a/s):\n");
    scanf("%c",&c);
    switch(c){
        case 'a':
        {
        printf("Enter two numbers\n");
        scanf("%d %d",&a,&b);
        printf("sum is %d",a+b);
        break;
        }
        case 's':
        {
        printf("Enter two numbers\n");
        scanf("%d %d",&a,&b);
        printf("diff is %d",a-b);
        break;
        }
        default:
        printf("No action");
        break;
    }
    return 0;
}

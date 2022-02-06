#include<stdio.h>
int main()
{
    int i,sum=0;
    int num;
    for(i=0;i<10;i++)
    {
        printf("Enter number:");
        scanf("%d",&num);
        if(num<0)
        continue;
        else if(num==0)
        break;
        else
        sum=sum+num;
    }
    printf("sum is %d",sum);
    return 0;
}

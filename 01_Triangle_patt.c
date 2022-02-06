#include <stdio.h>
int main() {
    int m=5,n=6;
    int i,j;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=10;j++)
        {
            if(j==m)
            printf("%c",47);
            else if(j==n)
                printf("%c",92);
            else if(i==5)
                printf("_");
            else
            printf(" ");
        }
        printf("\n");
        m--;
        n++;
    }
    return 0;
}

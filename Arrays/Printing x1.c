//printing x in matrix
#include<stdio.h>
int main()
{
    int a[10][10],b[10][10],c[10][10],i,j,p,q,k;

    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }

    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            printf("%5d",a[i][j]);
        }
        printf("\n");
    }

    printf("\nPRINTING IN X\n");

    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            if(i!=j && i!=(4-j))
            {
                printf(" ");
            }
            else
            {
                 printf("%d",a[i][j]);
            }
        }
        printf("\n");
    }
}

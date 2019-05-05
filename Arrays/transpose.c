//transpose of a matrix
#include<stdio.h>
int main()
{
    int i,j,a[10][10],c[10][10];
    printf("ENTER THE ELEMENTS\n");

    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%5d",a[i][j]);
        }
        printf("\n");
    }

    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            c[i][j]=a[j][i];
        }
    }

    printf("TRANSPOSE\n");

    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%5d",c[i][j]);
        }
        printf("\n");
    }
return 0;
}

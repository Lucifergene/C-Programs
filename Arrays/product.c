//product of matrix

#include<stdio.h>
int main()
{
    int a[10][10],b[10][10],c[10][10],i,j,p,q,k;

    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }

    printf("\nMATRIX A\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%5d",a[i][j]);
        }
        printf("\n");
    }

    printf("MATRIX B\n");

    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%5d",b[i][j]);
        }
        printf("\n");
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            c[i][j]=0;
            {
                for(k=0;k<3;k++)
                {
                    c[i][j]=c[i][j]+(a[i][k]*b[k][j]);//IMPORTANT
                }
            }

        }
    }
    printf("THE PRODUCT OF A & B IS\n");

    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%5d",c[i][j]);
        }
        printf("\n");
    }
    }

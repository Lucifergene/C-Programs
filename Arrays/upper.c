//upper with +1, lower with -1 & diagonal with 0
#include<stdio.h>
int main()
{
    int a[10][10]={1,2,3,4,5,1,2,3,4,5,4,3,4,2,2,2,2,3,2,4,4,2,5,4,6,4,3,4,3,3,2,3,2,2,3,4,3,2,2,3,4,4,2,2,2};
    int i,j,k;

    for(i=0;i<5;i++)
        {
        for(j=0;j<5;j++)
        {
            printf("%4d",a[i][j]);
        }
        printf("\n");
    }

    printf("\nTHE REQUIRED MATRIX\n");

     for(i=0;i<5;i++)
        {
            for(j=0;j<5;j++)
                {
                   if(i==j || i==4-j)
                   {
                       printf(" 0\t");
                   }

                   else if(j>i)
                   {
                       printf("-1\t");
                   }
                   else
                   {
                       printf("+1\t");
                   }

                }

        printf("\n");
    }

}

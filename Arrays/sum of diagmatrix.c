//SUM OF DIAGONALS
#include<stdio.h>
int main()
{
    int a[10][10]={1,2,3,4,5,1,2,3,4,5,4,3,4,2,2,2,2,3,2,4,4,2,5,4,6,4,3,4,3,3,2,3,2,2,3,4,3,2,2,3,4,4,2,2,2};
    int i,j,k,sum1=0,sum2=0;

    for(i=0;i<5;i++)
        {
        for(j=0;j<5;j++)
        {
            printf("%4d",a[i][j]);
        }
        printf("\n");
        }

    for(i=0;i<5;i++)
        {
        for(j=0;j<5;j++)
        {
            if(i==j || i==4-j)//takes common no. only once..
            {
                sum1+=a[i][j];
            }
        }
        }

   /* for(i=0;i<5;i++)
        {
        for(j=0;j<5;j++)
        {
            if(i==4-j)
            {
                sum2+=a[i][j];
            }
        }
        }*/

    printf("\nSUM OF DIAGONAL A=  %d",sum1);
   /* printf("\nSUM OF DIAGONAL B=  %d",sum2);*/
}

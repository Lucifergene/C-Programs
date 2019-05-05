//NUMBER PATTERNS
#include<stdio.h>
int main()
{
    int num,i,j;
   /*
      1
    1 2 1
  1 2 3 2 1
1 2 3 4 3 2 1
    */

    for(i=1;i<=4;i++)
    {
        for(j=4;j>i;j--)
        {
            printf("  ");
        }
        for(j=0;j<i;j++)
        {
            printf("%2d",j+1);
        }
        for(j=i-1;j>=1;j--)
        {
            printf("%2d",j);
        }
        printf("\n");
    }
        printf("\n");
        printf("\n");
    /*
    1
    0 1
    1 0 1
    0 1 0 1
    1 0 1 0 1
    0 1 0 1 0 1
*/

    for(i=1;i<=6;i++)
    {
        for(j=1;j<=i;j++)
        {
            if((i+j)%2==0)
            {
                printf("1");
            }
            else
            {
                printf("0");
            }
        }
        printf("\n");
    }

    printf("\n");
    printf("\n");

    //pg 165 pattern

    for(i=1;i<=8;i++)
    {
        for(j=8;j>i;j--)
        {
            printf(" ");
        }
        for(j=i;j>0;j--)
        {
            printf("%d",j-1);
        }
        for(j=0;j<i-1;j++)
        {
            printf("%d",j+1);
        }
        printf("\n");
    }








}

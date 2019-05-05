//ALPHABET TRIANGLE

#include<stdio.h>
int main()
{
/*
    A
   BCD
  EFGHI
 JKLMNOP
QRSTUVWXY
 */

 int i,j,k,m,n,num=65;

 for(i=1;i<=5;i++)
    {
        for(j=5;j>i;j--)
        {
            printf(" ");
        }
        for(k=1;k<=2*i-1;k++)
        {
            printf("%c",num);
            num++;
        }
        printf("\n");
    }


        printf("\n");
        printf("\n");
/*
         A
       B A B
     C B A B C
   D C B A B C D
 E D C B A B C D E
*/


for(i=1;i<=5;i++)
    {
        for(j=5;j>i;j--)
        {
            printf(" ");
        }
        for(j=i;j>1;j--)
        {
            printf("%c",j+64);
        }
        for(j=1;j<=i;j++)
        {
            printf("%c",j+64);
        }

        printf("\n");
    }

        printf("\n");
        printf("\n");
   /*
        A
      A B A
    A B C B A
  A B C D C B A
A B C D E D C B A

    */
    for(i=1;i<=5;i++)
    {
        for(j=5;j>i;j--)
        {
            printf(" ");
        }
        for(j=1;j<i;j++)
        {
            printf("%c",j+64);
        }
        for(j=i;j>=1;j--)
        {
            printf("%c",j+64);
        }

        printf("\n");
    }
            printf("\n");
            printf("\n");

/*
    AAAAAAAAA
     BBBBBBB
      CCCCC
       DDD
        E
*/
    num=65;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<i;j++)
        {
            printf(" ");
        }
        for(j=2*i-1;j<=9;j++)
        {
            printf("%c",num);

        }
        num++;
        printf("\n");

    }

}


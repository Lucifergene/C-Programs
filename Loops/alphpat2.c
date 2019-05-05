//ALPHABET PATTERN 2

#include<stdio.h>
int main()
{
    int i,j,num=69;
/*
E
E D
E D C
E D C B
E D C B A
*/
    for(i=1;i<=5;i++)
    {
        num=69;
        for(j=1;j<=i;j++)
            {
                printf("%c",num);
                num--;
            }
            printf("\n");
    }
/*
E D C B A
E D C B
E D C
E D
E
*/

    printf("\n");
    printf("\n");
    for(i=1;i<=5;i++)
    {
        num=69;
        for(j=5;j>=i;j--)
            {
                printf("%c",num);
                num--;
            }
            printf("\n");


    }
}

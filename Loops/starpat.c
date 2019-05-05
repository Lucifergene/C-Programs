#include<stdio.h>
int main()
{
    int i,j,k;
    for(i=0;i<=7;i++)
    {
        for(j=7;j>=i;j--)
            {
            printf(" ");
            }
        for(k=0;k<i+1;k++)
            {
            printf("*");
            }
    printf("\n");
    }
    return 0;
}

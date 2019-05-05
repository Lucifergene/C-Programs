
#include<stdio.h>
#include<math.h>
int main()
{
    int i,sum=0;

    printf("1");

    for(i=2;i<10;i++)
    {
        sum=0;
        sum+=pow(2,i)-1;
        printf("%6d",sum);
    }




}

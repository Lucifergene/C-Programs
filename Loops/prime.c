//identifying prime numbers

#include<stdio.h>
int main()
{
    int num,i,count=0;

    printf("ENTER THE NUMBER\n");
    scanf("%d",&num);
//for non-primes
        printf("FACTORS\n");
    for(i=1;i<=num;i++)
    {
        if(num%i==0)
        {
            printf("%4d",i);
            count++;
        }
    }
        printf("\n");
    if(num==1)
    {
        printf("UNIQUE");
    }
    else
    {
        if(count==2)
        {
            printf("THE NUMBER IS PRIME");
        }
        else
        {
            printf("THE NUMBER IS NOT PRIME");
        }
    }
}

//perfect number
#include<stdio.h>
int main()
{
    int num,temp,sum=0,i;

    printf("ENTER THE NUMBER\n");
    scanf("%d",&num);

    for(i=1;i<num;i++)
    {
        if(num%i==0)
        {
            sum+=i;
        }
    }

    if(sum==num)
    {
        printf("PERFECT\n");
    }
    else
    {
        printf("not PERFECT\n");
    }

    printf("\n");
    printf("PERFECT NUMBERS FROM 1 TO 10000 ARE:\n");

    for(num=1;num<=10000;num++)
    {
        sum=0;
    for(i=1;i<num;i++)
    {
        if(num%i==0)
        {
            sum+=i;
        }
    }

    if(sum==num)
    {
        printf("%d\n",num);
    }

    }

}

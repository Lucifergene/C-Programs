//Armstrong number
#include<stdio.h>
#include<math.h>
int main()
{

    int num,rem,num1,sum=0,count=0;

    printf("ENTER THE NUMBER\n");
    scanf("%d",&num);


    num1=num;

    while(num1!=0)
    {
        count++;
        num1/=10;
    }

    printf("THE NUMBER OF DIGITS IS %d\n",count);

        num1=num;

    while(num1!=0)
    {
        rem=num1%10;
        sum+=(int)pow(rem,count);
        num1/=10;
    }

    printf("THE SUM OF POWERS IS %d\n",sum);


    if(num==sum)
    {
        printf("IT IS AN ARMSTRONG NUMBER");
    }
    else
    {
        printf("IT IS NOT");
    }
    return 0;
}

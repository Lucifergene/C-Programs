//Armstrong numbers from 1 to 1000
#include<stdio.h>
#include<math.h>
int main()
{

    int num=1,rem,num1,sum=0,count=0;

    printf("FROM 1 TO 1000, THERE ARE:\n");
    scanf("%d",&num);

    while(num<=1000)
    {
        count=0;
        sum=0;

    num1=num;

    while(num1!=0)
    {
        count++;
        num1/=10;
    }

        num1=num;

    while(num1!=0)
    {
        rem=num1%10;
        sum+=(int)pow(rem,count);
        num1/=10;
    }

    if(num==sum)
    {
        printf("%d",num);
    }
        num++;
    }

    return 0;
}

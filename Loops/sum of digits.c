//sum of digits
#include<stdio.h>
int main()
{
    int num,i,temp,sum=0;
    printf("ENTER THE NUMBER\n");
    scanf("%d",&num);


    while(num!=0)
    {
        temp=num%10;
        num=num/10;
        sum=sum+temp;
    }
    printf("%d",sum);
}

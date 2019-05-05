//palindrome
#include <stdio.h>

int main()
{
    int num,pal,num1,temp,count=0,sum=0;


    /*printf("ENTER NUMBER\n");
    scanf("&d",&num);*/

    num1=num=121;

    while(num1!=0)
    {
        temp=num1%10;
        sum=sum*10+temp;
        num1/=10;
    }

    if(sum==num)
        printf("IT IS A PALINDROME");
    else
        printf("IT IS NOT");
}

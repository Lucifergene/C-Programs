//prime numbers from 1 to 100
#include<stdio.h>
int main()
{
    int num=1,i,count=0;
    printf("1");

   while(num<=100)
    {
        count=0;
    for(i=1;i<=num;i++)
    {
        if(num%i==0)
        {
            count++;

        }
    }

        if(count==2)
        {
            printf("%3d",num);
        }

        num++;
    }



}

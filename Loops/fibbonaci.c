//FIBONACCI SERIES
#include<stdio.h>
int main()
{
    int num,count=0,fib1,fib2,fib,i;
    printf("ENTER THE LAST NUMBER\n");
    scanf("%d",&num);


    fib1=0;
    fib2=1;
    printf("%d",fib2);
    for(i=1;i<num;i++)
    {
        fib=fib1+fib2;
        fib1=fib2;
        fib2=fib;
        printf("%4d",fib);
    }
}

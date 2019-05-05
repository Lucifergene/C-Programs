//FIBONACCI SERIES
#include<stdio.h>
int main()
{
    int num,i,fib,fib1=0,fib2=1;
    printf("ENTER THE LAST NUMBER\n");
    scanf("%d",&num);

    printf("%d\n",fib2);

    for(i=1;i<=num;i++)
    {
        fib=fib1+fib2;
        fib1=fib2;
        fib2=fib;
        printf("%d\n",fib);
    }
}

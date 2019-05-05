//fibonacci series recursive
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int num,y=1,c;
    printf("ENTER THE NUMBER: ");
    scanf("%d",&num);
    for(c=1;c<=num;c++)
    {
        printf("%2d",fib(y));
        y++;
    }

}

int fib(int i)
{
    if(i==0||i==1)
        return (i);
    else
        return(fib(i-1)+fib(i-2));
}

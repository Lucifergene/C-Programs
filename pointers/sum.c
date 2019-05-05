//WAP to add two numbers using pointers.
#include<stdio.h>
int main()
{
    int a,b,*x,*y;
    int sum=0,diff=0,product=0,division=0,remainder=0;
    printf("ENTER VALUES OF A & B: ");
    scanf("%d %d",&a,&b);
    x=&a;
    y=&b;
    sum=*x+*y;
    diff=*x-*y;
    product=*x* *y;
    division=*x/ *y;
    remainder=*x % *y;
    printf("THE SUM IS: %d\nTHE DIFFERENCE IS: %d\nTHE PRODUCT IS: %d\nTHE DIVISION IS: %d\nTHE REMAINDER IS: %d\n",sum,diff,product,division,remainder);
}



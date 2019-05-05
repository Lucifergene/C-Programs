//WAP to operate two numbers using pointers using functions
#include<stdio.h>
int* func(int *x,int *y)
{
    int sum=0,diff=0,product=0,division=0,remainder=0,i;
    sum=*x+*y;
    diff=*x-*y;
    product=*x* *y;
    division=*x/ *y;
    remainder=*x % *y;

    int arr[10]={sum,diff,product,division,remainder};

    return arr;
}






int main()
{
    int a,b,i;
    int y;
    int *ptr;
    printf("ENTER VALUES OF A & B: ");
    scanf("%d %d",&a,&b);
    ptr=func(&a,&b);

    printf("ENTER THE OPERATION: ");
    scanf("%d",&y);

    if(y==1)
        printf("%d",*(ptr));
    /*else if(y=='-')
        printf("%d",*(ptr+1));
    /*else if(y=='*');
        printf("%d",*(ptr+2));
    /*else if(y=='*')
        printf("%d",*(ptr+3));
    else if(y=='%')
        printf("%d",*(ptr+4));*/
    else
        printf("ERROR");

}

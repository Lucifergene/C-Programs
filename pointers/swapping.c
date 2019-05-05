//WAP to swap two numbers using call by reference.

#include<stdio.h>

void func(int *p,int *q)
{
    int t;
    t=*p;
    *p=*q;
    *q=t;

}

int main()
{
    int a,b;
    printf("ENTER THE 2 NUMBERS: ");
    scanf("%d %d",&a,&b);
    printf("\nTHE NUMBERS BEFORE SWAPPING: %d %d",a,b);
    func(&a,&b);
    printf("\nTHE NUMBERS AFTER SWAPPING: %d %d",a,b);
}

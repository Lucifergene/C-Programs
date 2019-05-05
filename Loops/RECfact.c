#include<stdio.h>


int main()
{
    int num;
    printf("ENTER THE NUMBER: ");
    scanf("%d",&num);
    printf("THE FACTORIAL IS:%d ",fact(num));
}

int fact(int i )
{
    if(i==0)
        return 1;
    else
        return i*fact(i-1);
}

//ISBN
#include<stdio.h>
int main()
{
    int a[10],i,sum=0,checkdig;

    for(i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
    }

    for(i=0;i<9;i++)
    {
        sum=sum+i*a[i];
    }

    checkdig=sum%11;

    (checkdig==a[10])? printf("True"): printf("False");

}



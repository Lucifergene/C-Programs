//SWAPPING ADJACENT NUMBERS IN ARRAY
#include<stdio.h>
int main()
{
    int a[10]={1,2,3,4,5,6,7,8,9,0};
    int i,temp;

    for(i=0;i<10;i++)
    {
        printf("%2d",a[i]);
    }

    printf("\n");

    for(i=0;i<10;i++)
    {
        temp=a[i];
        a[i]=a[i+1];
        a[i+1]=temp;
        i++;
    }

    for(i=0;i<10;i++)
    {
        printf("%2d",a[i]);
    }
}

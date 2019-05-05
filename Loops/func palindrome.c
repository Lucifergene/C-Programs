#include<stdio.h>

int rev(int x)
{
    int temp,rev=0;
    while(x)
    {
        temp=x%10;
        rev=rev*10+temp;
        x/=10;
    }
    printf("\nREVERSE NUMBER= %d",rev);
    return rev;
}

int ispal(int num)
{
    if(num==rev(num))
        {
            return 1;
        }
    else
        {
            return 0;
        }

}

int main()
{
    int num;
    printf("ENTER THE NUMBER= ");
    scanf("%d",&num);
    printf("\nTHE NUMBER IS %d",num);

    if(ispal(num))
    {
        printf("\nPALINDROME");
    }
    else
    {
        printf("\nNOT A PALINDROME");
    }

    return 0;
}

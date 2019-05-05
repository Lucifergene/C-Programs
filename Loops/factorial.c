//FACTORIAL
#include<stdio.h>
 int main()
{

    int num,i,fac=1;

    printf("ENTER THE NUMBER\n");
    scanf("%d",&num);

    for(i=1;i<=num;i++)
    {
        fac=fac*i;
    }
    printf("%d",fac);
}


//GCD/HCF
#include<stdio.h>
int main()
{
    int num1=12,num2=18,gcd,i;

    for(i=1;i<=num1 && i<=num2;i++)
    {
        if(num1%i==0 && num2%i==0)
            gcd=i;
    }
     printf("%d",gcd);
}


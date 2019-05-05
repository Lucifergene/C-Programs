//RECURSSIVE FACTORIAL

#include<stdio.h>
#include<math.h>

int fac(int n)
{
   if(n==0)
    return 1;
   else
    return (n*fac(n-1));
}

float fl(int x)
{
   int temp1,temp2,i,j;
    float res=0;
    for(i=1,j=1;i<=5;i+=2,j++)
    {
        if(j%2)
        {
            temp1=pow(x,i);
            temp2=fac(i);
            res+=(float)temp1/temp2;
        }
        else
        {
            temp1=pow(x,i);
            temp2=fac(i);
            res-=(float)temp1/temp2;
        }
    }
    return res;
}

float convert(int x,char y)
{
    float res;
    if(y=='y')
    {
        res=(x/180.0)*3.145;
        return res;
    }
    else
    {
        return x;
    }
}

int main()
{
    int no;
    char g;
    printf("ENTER THE NUMBER: ");
    scanf("%d",&no);
    printf("PRESS Y TO CONVERT TO RADIAN: ");
    scanf("%c",&g);


    printf("\nTHE VALUE: %f",fl(convert(no,g)));
}

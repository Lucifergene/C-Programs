#include<stdio.h>
float sin(float x,int n);
float cos(float x,int n);
int main()
{
    int b;
    float a;

    printf(" Enter the value for x : ");
    scanf("%f",&a);

    printf(" Enter the value for n : ");
    scanf("%d",&b);

    printf(" The value of Sin(%f) = %.4f\n",a,sin(a,b));
    printf(" The value of Cos(%f) = %.4f\n",a,cos(a,b));

    return 0;
}

float sin(float x,int n)
{   /* Loop to calculate the value of Sine */
    int i;
    float sumsin,tsin;
    x=x*3.14159/180;
    tsin=x;
    sumsin=x;
    for(i=1;i<=n;i++)
    {
        tsin=(tsin*(-1)*x*x)/(2*i*(2*i+1));
        sumsin=sumsin+tsin;
    }
    return sumsin;
}

float cos(float x,int n)
{   /* Loop to calculate the value of Cosine */
    int i;
    float sumcos=1,tcos=1;
    x=x*3.14159/180;

    for(i=1;i<=n;i++)
    {
        tcos=(tcos*(-1)*x*x)/(2*i*(2*i-1));
        sumcos=sumcos+tcos;
    }
    return sumcos;
}

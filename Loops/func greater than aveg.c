//no. of digits greater than the avg
#include<stdio.h>

print1()
     {
        int a[10]={1,2,3,4,5,1,2,3,4,5};
        int i;
        for(i=0;i<10;i++)
        {
            printf("%2d",a[i]);
        }
        printf("\n");
        return 0;
     }

sume()
    {
        int a[10]={1,2,3,4,5,1,2,3,4,5};
        int i,sum=0;
        for(i=0;i<10;i++)
        {
            sum+=a[i];
        }
        return 0;
    }

aveg()
    {
    int avg,sum;
    avg=sum/10;

    printf("The avg is %d",avg);
    printf("\n");
    return 0;
    }

print2()
    {
    int a[10]={1,2,3,4,5,1,2,3,4,5};
    int i,sum=0,avg,count=0;
    for(i=0;i<10;i++)
        {
            if(a[i]>avg)
            {
                count+=1;
            }
        }
    printf("%d",count);
    return 0;
    }

int main()
{
     print1();
     sume();
     aveg();
     print2();

     return 0;
}

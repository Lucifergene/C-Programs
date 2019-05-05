//no. of digits greater than the avg
#include<stdio.h>
int main()
{
     int a[10]={1,2,3,4,5,1,2,3,4,5};
     int i,j,k,sum=0,avg,count=0;

     for(i=0;i<10;i++)
        {
            printf("%2d",a[i]);
        }
        printf("\n");
     for(i=0;i<10;i++)
        {
            sum+=a[i];
        }
    avg=sum/10;

    printf("The avg is %d",avg);
    printf("\n");

    for(i=0;i<10;i++)
        {
            if(a[i]>avg)
            {
                count+=1;
            }
        }
    printf("no. of digits greater than avg= %d",count);

}

//DISPLAY ELEMENTS MORE THAN AVERAGE
#include<stdio.h>
int main()
{
    int a[10]={1,2,3,4,5,6};
    int i,sum=0,avg;
    printf("ENTER ELEMENTS OF ARRAY\n");

    for(i=0;i<5;i++)
    {
        printf("%2d",a[i]);
    }
    printf("\n");

    for(i=0;i<5;i++)
    {
       sum+=a[i];
    }

    avg=sum/5;

     for(i=0;i<5;i++)
        {
            if(a[i]>avg)
            {
                printf("%2d",a[i]);
            }
        }
}



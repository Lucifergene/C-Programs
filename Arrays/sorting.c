//BUBBLE SORT
#include<stdio.h>
int main()
{
     int a[10]={1,2,3,4,5,1,2,3,4,5};
     int i,j,k,temp;

     for(i=0;i<10;i++)
        {
            printf("%2d",a[i]);
        }

        printf("\n");

     for(i=0; i<10;i++)
        {
            for(j=0;j<9;j++)
                {
                    if(a[j]>a[j+1]) //ascending order
                        {
                            temp=a[j];
                            a[j]=a[j+1];
                            a[j+1]=temp;
                        }
                }
        }

        for(i=0;i<10;i++)
        {
        printf("%2d",a[i]);
        }
}

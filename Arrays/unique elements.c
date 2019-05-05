//NUMBER OF UNIQUE ELEMENTS
#include<stdio.h>
int main()
{
    int a[10]={1,1,1,1,1,3,1,1,1,5};
    int i,j,k,count=0,temp;

     for(i=0;i<10;i++)
    {
        printf("%d",a[i]);
    }
    printf("\n");

    //sorting

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
            printf("%d",a[i]);
        }
    printf("\n");



    for(i=0;i<10;i++)
        {
            if(a[i]==a[i+1])
                continue;
            else
                count++;
        }
            printf("The number of unique elements are %d ",count);

}

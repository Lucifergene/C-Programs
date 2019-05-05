//DELETING DUPLICATE ELEMENTS
#include<stdio.h>
int main()
{
    int a[10]={1,3,2,4,5,5,5,5,5,5};
    int i,j,k=0,temp;

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
    printf("ARRAY AFTER SORTING: ");
     for(i=0;i<10;i++)
        {
            printf("%2d",a[i]);
        }
        printf("\n");


    for(i=0;i<10;i++)
    {
            if(a[i]!=a[k])
            {
                k++;
                a[k] = a[i]; // Move it to the front
            }

    }

               // The new array size..(k+1)

    printf("NEW ARRAY: ");

    for(i=0;i<k+1;i++)
    {
        printf("%2d",a[i]);
    }
        printf("\n");

}

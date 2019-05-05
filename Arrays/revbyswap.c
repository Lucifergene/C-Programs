//REVERSING NUMBERS OF MATRIX BY SWAPPING IN ARRAY

#include<stdio.h>
int main()
{
    int a[10]={1,2,3,4,5,6,7,8,9,0};
    int i,j,k,temp,end=9;

    for(i=0;i<10;i++)
        {
            printf("%4d",a[i]);
        }
    printf("\n");

    for(i=0;i<5;i++)
        {
            temp=a[i];
            a[i]=a[end];
            a[end]=temp;
            end--;
        }


    for(i=0;i<10;i++)
        {
            printf("%4d",a[i]);
        }
    printf("\n");
}


/*END=9;
FOR(I=0;I<5;I++)
{
    TEMP=A[I];
    A[I]=A[END];
    A[END]=TEMP;
    END--
}
*/

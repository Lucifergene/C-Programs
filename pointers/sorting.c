//WAP to sort & reversing an array using Pointer by functions

#include<stdio.h>

void sort(int *ptr,int s)
{
    int i,j,temp;
    for(i=1;i<s;i++)
    {
        for(j=1;j<s-1;j++)
        {
            if(*(ptr+j)>*(ptr+j+1))
            {
                temp=*(ptr+j);
                *(ptr+j)=*(ptr+j+1);
                *(ptr+j+1)=temp;
            }
        }
    }
}

void rev(int *p,int s)
{
    int i,temp;
    int end=s-1;
    for(i=0;i<(s/2);i++)
    {
        temp= *(p+i);
        *(p+i)=*(p+end);
        *(p+end)=temp;
        end--;
    }
}

int  largest(int * p,int s)
{
    int i;
    int lar=p;
    for(i=0;i<s;i++)
    {
        if(lar<*(p+i))
        {
            lar=*(p+i);
        }
    }
    return lar;//ADDRESS
}

int main()
{
    int i,size,a[30],b[30];

    printf("ENTER THE ARRAY SIZE: ");
    scanf("%d",&size);
    printf("ENTER ELEMENTS OF ARRAY: ");
    for(i=0;i<size;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("\nARRAY BEFORE SORTING:");
    for(i=0;i<size;i++)
    {
        printf("%3d",a[i]);
    }
    for(i=0;i<size;i++)
    {
        b[i]=a[i];
    }

    sort(a,size);
    printf("\nARRAY AFTER SORTING: ");
    for(i=0;i<size;i++)
    {
         printf("%3d",a[i]);
    }

    printf("\nARRAY BEFORE REVERSING:");
    for(i=0;i<size;i++)
    {
        printf("%3d",b[i]);
    }

    rev(b,size);
    printf("\nARRAY AFTER REVERSING:");
    for(i=0;i<size;i++)
    {
         printf("%3d",b[i]);
    }

    printf("\nTHE ADDRESS OF LARGEST ELEMENT IS: %p",largest(b,size));


}

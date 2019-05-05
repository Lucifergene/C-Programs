//LARGEST & SECOND LARGEST NUMBER IN ARRAY
#include<stdio.h>
int main()
{
    int a[10]={1,2,3,4,5,6,7,8,9,0};
    int i,j,k,lar,seclar;

    for(i=0;i<10;i++)
    {
        printf("%d",a[i]);
    }
    printf("\n");

    lar=a[0];

    for(i=0;i<10;i++)//LARGEST
    {
        if(a[i]>lar)
            lar=a[i];
    }

    seclar=a[0];

    for(i=0;i<10;i++)//2ND LARGEST
    {
        if(seclar<a[i] && a[i]<lar)
            seclar=a[i];
    }

    printf("THE LARGEST NUMBER IS= %d\n",lar);
    printf("THE 2ND LARGEST NUMBER IS= %d",seclar);
}


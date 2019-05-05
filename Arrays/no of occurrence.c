//finding number of occurrences
#include<stdio.h>

int occ(int *p,int s)
{
    int i,count=0;
        for(i=0;i<3;i++)
    {
        if(s==*(p+i))
        {
            count++;
        }
    }
     return count;
}

int main()
{
    int a[10],i,given,count=0;

    printf("ENTER THE NUMBER: ");
    scanf("%d",&given);
    printf("\n");
    printf("ENTER ELEMENTS: ");
    for(i=0;i<3;i++)
    {
        scanf("%d",&a[i]);
    }

    printf("Count = %d",occ(a,given));
}



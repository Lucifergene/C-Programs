//CAPITALLIZE EACH WORD
#include<stdio.h>
#include<string.h>

void main()
{
    int i=0,j=0,count=0;
    char a[100];
    printf("Enter the text: ");
    gets(a);

    for(i=0;i<strlen(a);i++)
    {
        if(i==0)
        {
            if((a[i]>='a' && a[i]<='z'))
            {
                a[i]=a[i]-32;
                continue;
            }
        }
            if(a[i]==' ')
            {
                i++;
                if((a[i]>='a' && a[i]<='z'))
                {
                    a[i]=a[i]-32;
                    continue;
                }
            }
            else
            {
                if((a[i]>='A' && a[i]<='Z'))
                {
                    a[i]=a[i]+32;
                }
            }
    }
    puts(a);
}



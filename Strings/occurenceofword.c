//occurrence of word in a string
#include<stdio.h>
#include<string.h>
int func(char b[],char c[])
{
    char d[30];
    int i=0,j=0,count=1;
    while(b[i]!='\0')
    {
        while(b[i]!=' '&& b[i]!='\0')
            d[j++]=b[i++];
            d[j]='\0';
            j=0;

        if(strcmp(b,d)==0)
            count++;

        if(b[i]=='\0')
            break;
        else
            i++;
    }

    return count;
}

int main()
{
    char x[30],y[10];
    printf("ENTER THE STRING: ");
    gets(x);
    printf("\nENTER THE WORD: ");
    gets(y);
    printf("\nTHE NUMBER OF TIMES THE WORD IS REPEATED: %d\n",func(x,y));
    return 0;
}

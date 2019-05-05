//counting words
#include<stdio.h>

int count(char *a)
{
    char prev='\0';
    int i=0,words=0;
    while(1)
    {
        if(*(a+i)==' '||*(a+i)=='\0')
        {
            if(prev!='\0' && prev!=' ')
            {
                words++;
            }
        }
        prev=*(a+i);
        if(*(a+i)=='\0')
            break;
        else
            i++;
    }
    return words;
}

int main()
{
    char str[30];
    printf("ENTER STRING: ");
    gets(str);
    printf("\nWORDS: %d",count(str));
}

#include<stdio.h>
#include<string.h>
int func(char b[],char c[])
    {
        int count=0,i;
        for(i=0;b[i]!='\0';i++)
        {
            if(c==b[i])
                count++;

        }
        return count;
    }



int main()
{
    char a[30],d;
    printf("ENTER THE WORD: ");
    gets(a);
    printf("\nENTER THE LETTER: ");
    scanf("%c",&d);
    printf("\nTHE NUMBER OF TIMES THE LETTER IS REPEATED: %d\n",func(a,d));
    return 0;
}

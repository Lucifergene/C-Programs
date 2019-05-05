//counting words,alphabets,digits..space not constant
#include<stdio.h>
#include<string.h>
int main()
{
    char a[30];
    int alpha=0,dig=0,space=0,words=0,i;
    char prevChar='\0';
    printf("ENTER THE SENTENCE: ");
    gets(a);

    for(i=0;a[i]!='\0';i++)
    {
        if(a[i]>='a' && a[i]<='z' || a[i]>='A' && a[i]<='Z')
           {
               alpha++;
           }
        else if(a[i]>='0' && a[i]<='9')
            {
                dig++;
            }
        else if(a[i]==' ' || a[i]=='  ' || a[i]=='   ' )
            {
                space++;
            }
    }
/*If a non-white space character is followed
by a white space or NULL character then it is a word. */

    i=0;
    while(1)
    {
        if(a[i]==' ' || a[i]=='\0')
        {
/*It is a word if current character is whitespace and
previous character is non-white space.*/

            if(prevChar != ' ' && prevChar != '\0')
            {
                words++;
            }
        }

/* Make the current character as previous character */
        prevChar = a[i];

        if(a[i] == '\0')
             break;
        else
             i++;
    }


    printf("ALPHABETS: %d \nDIGITS: %d \nSPACES: %d \nWORDS: %d",alpha,dig,space,words);

}

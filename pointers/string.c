//WAP to print a string using pointer & reverse it
#include<stdio.h>
#include<string.h>

void rev(char *p)
{
    int i,temp;
    int len=strlen(p);
    int end=len-1;
    for(i=0;i<(len/2);i++)
    {
        temp= *(p+i);
        *(p+i)=*(p+end);
        *(p+end)=temp;
        end--;
    }
}

int vowel(char *ptr)
{
    int i=0,v=0,c=0,s=0;
  while(*ptr!='\0')
    {
        printf("%c",*ptr);
        if(*ptr=='a'||*ptr=='e'||*ptr=='i'||*ptr=='o'||*ptr=='u')
        {
            v++;
        }
        else if(*ptr==' ' || *ptr=='\n')
        {
            s++;
        }
        else
        {
            c++;
        }
        ptr++;
        i++;

    }
    return v;
}

int main()
{
    char str[20],b[20];
    char *ptr=NULL;
    int i=0,v=0,c=0,s,temp;
    printf("WRITE A STRING: ");
    gets(str);
    ptr=&str;
    int len=strlen(str);

    printf("\nTHE STRING IS: ");

    //printf("\nTHE NUMBER OF CHARACTERs: %d",i);
    printf("\nTHE NUMBER OF VOWELS: %d",vowel(str));
    printf("\nTHE NUMBER OF CONSONANTS: %d",c);



    printf("\nREVERSING A STRING:");
    printf("\nORIGINAL STRING: ");
    puts(str);
    strcpy(b,str);
    rev(str);

    printf("\nREVERSED STRING: ");
    puts(str);

    if(strcmp(str,b)==0)
    {
        printf("\nTHE WORD IS A PALINDROME");
    }
    else
        printf("\nTHE WORD IS NOT A PALINDROME");
}




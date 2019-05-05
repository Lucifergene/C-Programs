//q9.8
#include<stdio.h>
#include<string.h>
char* cap(char n[])
{
    int i;
    for(i=0;i<strlen(n);i++)
    {
            if(n[i]>='A' && n[i]<='Z')
            {
                continue;
            }
            else if(n[i]>='a' && n[i]<='z')
            {
                n[i]-=32;
            }
    }
    return n;
}

int main()
{
    char str[30];
    int i;
    printf("ENTER A STRING: ");
    gets(str);
    printf("\nTHE NEW STRING IS: %s",cap(str));

}
